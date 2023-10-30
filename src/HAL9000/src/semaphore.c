#include "HAL9000.h"
#include "thread_internal.h"
#include "semaphore.h"
#include "mutex.h"

void
SemaphoreInit(
	OUT     PSEMAPHORE      Semaphore,
	IN      DWORD           InitialValue
)
{
	ASSERT(NULL != Semaphore);

	memzero(Semaphore, sizeof(SEMAPHORE));

	MutexInit(&Semaphore->SemaphoreMutex);

	InitializeListHead(&Semaphore->WaitingList);

	Semaphore->Value = InitialValue;
}

void
SemaphoreDown(
	INOUT   PSEMAPHORE      Semaphore,
	IN      DWORD           Value
)
{
	INTR_STATE dummyState;
	MutexAcquire(&Semaphore->SemaphoreMutex);
	if (Semaphore->Value > Value) {
		Semaphore->Value -= Value;
	}
	else {
		PTHREAD pCurrentThread = GetCurrentThread();
		InsertTailList(&Semaphore->WaitingList, &pCurrentThread->ReadyList);
		MutexRelease(&Semaphore->SemaphoreMutex);
		ThreadBlock();
		MutexAcquire(&Semaphore->SemaphoreMutex);		
	}
	MutexRelease(&Semaphore->SemaphoreMutex	);
}

void
SemaphoreUp(
	INOUT   PSEMAPHORE      Semaphore,
	IN      DWORD           Value
)
{
	
}