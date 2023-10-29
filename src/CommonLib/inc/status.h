#pragma once

C_HEADER_START

// every error/warning status code has the MSB set to 1
#define FAIL_MASK                                       (1UL << 31)

#define ERROR_MASK                                      (0b11UL << 30)
#define WARNING_MASK                                    (0b10UL << 30)
#define INFO_MASK                                       (0b01UL << 30)

#define CUSTOMER_BIT                                    (1UL << 29)

// nothing over (1<<27) should be used
#define GENERAL_MASK                                    (1UL<<27)
#define INTRO_MASK                                      (1UL<<26)
#define VMX_MASK                                        (1UL<<25)
#define CPU_MASK                                        (1UL<<24)
#define COMM_MASK                                       (1UL<<23)
#define TIMER_MASK                                      (1UL<<22)
#define HEAP_MASK                                       (1UL<<21)
#define MEMORY_MASK                                     (1UL<<20)
#define STORAGE_MASK                                    (1UL<<19)
#define DISK_MASK                                       (1UL<<18)
#define APIC_MASK                                       (1UL<<17)
#define DEVICE_MASK                                     (1UL<<16)
#define RESERVED_MASK                                   (1UL<<16)
// nothing under (1<<16) should be used

// general errors
#define CL_STATUS_UNSUPPORTED                              (ERROR_MASK | CUSTOMER_BIT | GENERAL_MASK | 0x0001UL)
#define CL_STATUS_INTERNAL_ERROR                           (ERROR_MASK | CUSTOMER_BIT | GENERAL_MASK | 0x0002UL)
#define CL_STATUS_UNSUCCESSFUL                             (ERROR_MASK | CUSTOMER_BIT | GENERAL_MASK | 0x0003UL)
#define CL_STATUS_ELEMENT_NOT_FOUND                        (ERROR_MASK | CUSTOMER_BIT | GENERAL_MASK | 0x0004UL)
#define CL_STATUS_ELEMENT_FOUND                            (ERROR_MASK | CUSTOMER_BIT | GENERAL_MASK | 0x0005UL)
#define CL_STATUS_LIST_EMPTY                               (ERROR_MASK | CUSTOMER_BIT | GENERAL_MASK | 0x0006UL)
#define CL_STATUS_ALREADY_INITIALIZED                      (ERROR_MASK | CUSTOMER_BIT | GENERAL_MASK | 0x0007UL)
#define CL_STATUS_ALREADY_INITIALIZED_HINT                 (INFO_MASK | CUSTOMER_BIT | GENERAL_MASK | 0x0008UL)
#define CL_STATUS_INCOMPATIBLE_INTERFACE                   (ERROR_MASK | CUSTOMER_BIT | GENERAL_MASK | 0x0009UL)
#define CL_STATUS_INVALID_PARAMETER1                       (ERROR_MASK | CUSTOMER_BIT | GENERAL_MASK | 0x0011UL)
#define CL_STATUS_INVALID_PARAMETER2                       (ERROR_MASK | CUSTOMER_BIT | GENERAL_MASK | 0x0012UL)
#define CL_STATUS_INVALID_PARAMETER3                       (ERROR_MASK | CUSTOMER_BIT | GENERAL_MASK | 0x0013UL)
#define CL_STATUS_INVALID_PARAMETER4                       (ERROR_MASK | CUSTOMER_BIT | GENERAL_MASK | 0x0014UL)
#define CL_STATUS_INVALID_PARAMETER5                       (ERROR_MASK | CUSTOMER_BIT | GENERAL_MASK | 0x0015UL)
#define CL_STATUS_INVALID_PARAMETER6                       (ERROR_MASK | CUSTOMER_BIT | GENERAL_MASK | 0x0016UL)
#define CL_STATUS_INVALID_PARAMETER7                       (ERROR_MASK | CUSTOMER_BIT | GENERAL_MASK | 0x0017UL)
#define CL_STATUS_INVALID_PARAMETER8                       (ERROR_MASK | CUSTOMER_BIT | GENERAL_MASK | 0x0018UL)
#define CL_STATUS_INVALID_FILE_NAME                        (ERROR_MASK | CUSTOMER_BIT | GENERAL_MASK | 0x0019UL)
#define CL_STATUS_FILE_NOT_FOUND                           (ERROR_MASK | CUSTOMER_BIT | GENERAL_MASK | 0x001AUL)
#define CL_STATUS_FILE_TYPE_INVALID                        (ERROR_MASK | CUSTOMER_BIT | GENERAL_MASK | 0x001BUL)
#define CL_STATUS_TIME_INVALID                             (ERROR_MASK | CUSTOMER_BIT | GENERAL_MASK | 0x001CUL)
#define CL_STATUS_PATH_NOT_VALID                           (ERROR_MASK | CUSTOMER_BIT | GENERAL_MASK | 0x001DUL)
#define CL_STATUS_FILE_ALREADY_EXISTS                      (ERROR_MASK | CUSTOMER_BIT | GENERAL_MASK | 0x001EUL)
#define CL_STATUS_FILE_NOT_DIRECTORY                       (ERROR_MASK | CUSTOMER_BIT | GENERAL_MASK | 0x001FUL)
#define CL_STATUS_NO_MORE_OBJECTS                          (ERROR_MASK | CUSTOMER_BIT | GENERAL_MASK | 0x0020UL)
#define CL_STATUS_PARSE_FAILED                             (ERROR_MASK | CUSTOMER_BIT | GENERAL_MASK | 0x0021UL)
#define CL_STATUS_JOB_INTERRUPTED                          (ERROR_MASK | CUSTOMER_BIT | GENERAL_MASK | 0x0022UL)
#define CL_STATUS_INVALID_MZ_IMAGE                         (ERROR_MASK | CUSTOMER_BIT | GENERAL_MASK | 0x0023UL)
#define CL_STATUS_INVALID_IMAGE_SIZE                       (ERROR_MASK | CUSTOMER_BIT | GENERAL_MASK | 0x0024UL)
#define CL_STATUS_INVALID_PE_IMAGE                         (ERROR_MASK | CUSTOMER_BIT | GENERAL_MASK | 0x0025UL)
#define CL_STATUS_IMAGE_NOT_64_BIT                         (ERROR_MASK | CUSTOMER_BIT | GENERAL_MASK | 0x0026UL)
#define CL_STATUS_IMAGE_SUBSYSTEM_NOT_NATIVE               (ERROR_MASK | CUSTOMER_BIT | GENERAL_MASK | 0x0027UL)
#define CL_STATUS_IMAGE_NOT_FULLY_LOADED                   (ERROR_MASK | CUSTOMER_BIT | GENERAL_MASK | 0x0028UL)
#define CL_STATUS_IMAGE_HAS_RELOCATIONS                    (ERROR_MASK | CUSTOMER_BIT | GENERAL_MASK | 0x0029UL)
#define CL_STATUS_NOT_IMPLEMENTED                          (ERROR_MASK | CUSTOMER_BIT | GENERAL_MASK | 0x002AUL)
#define CL_STATUS_INVALID_FUNCTION                         (ERROR_MASK | CUSTOMER_BIT | GENERAL_MASK | 0x002BUL)
#define CL_STATUS_INVALID_BUFFER                           (ERROR_MASK | CUSTOMER_BIT | GENERAL_MASK | 0x002CUL)
#define CL_STATUS_NOT_INITIALIZED                          (ERROR_MASK | CUSTOMER_BIT | GENERAL_MASK | 0x002DUL)
#define CL_STATUS_NO_HANDLING_REQUIRED                     (INFO_MASK | CUSTOMER_BIT | GENERAL_MASK | 0x002EUL)
#define CL_STATUS_CONFLICTING_OPTIONS                      (ERROR_MASK | CUSTOMER_BIT | GENERAL_MASK | 0x002FUL)
#define CL_STATUS_ASSERTION_FAILURE                        (ERROR_MASK | CUSTOMER_BIT | GENERAL_MASK | 0x0030UL)
#define CL_STATUS_NO_DATA_AVAILABLE                        (ERROR_MASK | CUSTOMER_BIT | GENERAL_MASK | 0x0031UL)
#define CL_STATUS_LIMIT_REACHED                            (ERROR_MASK | CUSTOMER_BIT | GENERAL_MASK | 0x0032UL)
#define CL_STATUS_SIZE_INVALID                             (ERROR_MASK | CUSTOMER_BIT | GENERAL_MASK | 0x0033UL)
#define CL_STATUS_VALUE_MISMATCH                           (ERROR_MASK | CUSTOMER_BIT | GENERAL_MASK | 0x0034UL)
#define CL_STATUS_OPERATION_REQUIRES_HIGHER_CPL            (ERROR_MASK | CUSTOMER_BIT | GENERAL_MASK | 0x0035UL)

// introspection errors
#define CL_STATUS_INTRO_INVALID_SYSCALL_HANDLER            (ERROR_MASK | CUSTOMER_BIT | INTRO_MASK | 0x0001UL )
#define CL_STATUS_INTRO_KERNEL_BASE_NOT_FOUND              (ERROR_MASK | CUSTOMER_BIT | INTRO_MASK | 0x0002UL )
#define CL_STATUS_INTRO_KERNEL_INVALID_IMAGE               (ERROR_MASK | CUSTOMER_BIT | INTRO_MASK | 0x0003UL )
#define CL_STATUS_INTRO_EXPORT_NOT_FOUND                   (ERROR_MASK | CUSTOMER_BIT | INTRO_MASK | 0x0004UL )
#define CL_STATUS_INTRO_MODULE_LIST_NOT_FOUND              (ERROR_MASK | CUSTOMER_BIT | INTRO_MASK | 0x0005UL )
#define CL_STATUS_INTRO_PCR_NOT_AVAILABLE                  (ERROR_MASK | CUSTOMER_BIT | INTRO_MASK | 0x0006UL )
#define CL_STATUS_INTRO_KERNEL_ADDRESS_INVALID             (ERROR_MASK | CUSTOMER_BIT | INTRO_MASK | 0x0007UL )
#define CL_STATUS_INTRO_VARIABLES_NOT_DEFINED              (INFO_MASK | CUSTOMER_BIT | INTRO_MASK | 0x0008UL )
#define CL_STATUS_INTRO_INTROSPECTION_NOT_SUPPORTED        (ERROR_MASK | CUSTOMER_BIT | INTRO_MASK | 0x0009UL )
#define CL_STATUS_INTRO_PROCESS_NOT_VALID                  (ERROR_MASK | CUSTOMER_BIT | INTRO_MASK | 0x000AUL )
#define CL_STATUS_INTRO_PATTERN_NOT_FOUND                  (ERROR_MASK | CUSTOMER_BIT | INTRO_MASK | 0x000BUL )
#define CL_STATUS_INTRO_INTROSPECTION_NOT_INITIALIZED      (ERROR_MASK | CUSTOMER_BIT | INTRO_MASK | 0x000CUL )
#define CL_STATUS_INTRO_DEBUGGER_DATA_NOT_FOUND            (ERROR_MASK | CUSTOMER_BIT | INTRO_MASK | 0x000DUL )

// vmx related issues
#define CL_STATUS_VMX_WRITE_FAILED                         (ERROR_MASK | CUSTOMER_BIT | VMX_MASK | 0x0001UL )
#define CL_STATUS_VMX_READ_FAILED                          (ERROR_MASK | CUSTOMER_BIT | VMX_MASK | 0x0002UL )
#define CL_STATUS_VMX_INVEPT_FAILED                        (ERROR_MASK | CUSTOMER_BIT | VMX_MASK | 0x0003UL )
#define CL_STATUS_VMX_EPT_MAPPING_FAILED                   (ERROR_MASK | CUSTOMER_BIT | VMX_MASK | 0x0004UL )
#define CL_STATUS_VMX_EXIT_NOT_IMPLEMENTED                 (ERROR_MASK | CUSTOMER_BIT | VMX_MASK | 0x0005UL )
#define CL_STATUS_VMX_FEATURE_NOT_SUPPORTED                (ERROR_MASK | CUSTOMER_BIT | VMX_MASK | 0x0006UL )
#define CL_STATUS_VMX_UNEXPECTED_VMCALL                    (ERROR_MASK | CUSTOMER_BIT | VMX_MASK | 0x0007UL )
#define CL_STATUS_VMX_GUEST_MEMORY_CANNOT_BE_MAPPED        (ERROR_MASK | CUSTOMER_BIT | VMX_MASK | 0x0008UL )
#define CL_STATUS_VMX_NO_CALLBACKS                         (WARNING_MASK | CUSTOMER_BIT | VMX_MASK | 0x0009UL )
#define CL_STATUS_VMX_INCOMPATIBLE_CONFIGURATION           (ERROR_MASK | CUSTOMER_BIT | VMX_MASK | 0x000AUL )

// cpu related errors
#define CL_STATUS_CPU_UNSUPPORTED_FEATURE                  (ERROR_MASK | CUSTOMER_BIT | CPU_MASK | 0x0001UL)
#define CL_STATUS_CPU_MONITOR_NOT_SUPPORTED                (ERROR_MASK | CUSTOMER_BIT | CPU_MASK | 0x0002UL)
#define CL_STATUS_CPU_MONITOR_FILTER_SIZE_TOO_SMALL        (ERROR_MASK | CUSTOMER_BIT | CPU_MASK | 0x0003UL)
#define CL_STATUS_CPU_MONITOR_FILTER_SIZE_TOO_LARGE        (ERROR_MASK | CUSTOMER_BIT | CPU_MASK | 0x0004UL)
#define CL_STATUS_CPU_NO_MATCHES                           (INFO_MASK | CUSTOMER_BIT | CPU_MASK | 0x0005UL)
#define CL_STATUS_CPU_UNSUPPORED_XSAVE_FEATURE_SIZE        (ERROR_MASK | CUSTOMER_BIT | CPU_MASK | 0x0006UL)

// communication related errors
#define CL_STATUS_COMM_SERIAL_ALREADY_INITIALIZED          (INFO_MASK | CUSTOMER_BIT | COMM_MASK | 0x0001UL)
#define CL_STATUS_COMM_SERIAL_NO_PORTS_AVAILABLE           (INFO_MASK | CUSTOMER_BIT | COMM_MASK | 0x0002UL)
#define CL_STATUS_COMM_SERIAL_NOT_INITIALIZED              (ERROR_MASK | CUSTOMER_BIT | COMM_MASK | 0x0003UL)
#define CL_STATUS_COMM_VMCALL_UNSUPPORTED_COMMAND          (ERROR_MASK | CUSTOMER_BIT | COMM_MASK | 0x0004UL)

// timer related errors
#define CL_STATUS_TIMER_INVALID_FREQUENCY                  (ERROR_MASK | CUSTOMER_BIT | TIMER_MASK | 0x0001UL)
#define CL_STATUS_TIMER_NOT_EXPIRED_YET					   (INFO_MASK | CUSTOMER_BIT | TIMER_MASK | 0x0002UL)


// heap related errors
#define CL_STATUS_HEAP_TOO_SMALL                           (ERROR_MASK | CUSTOMER_BIT | HEAP_MASK | 0x0001UL)
#define CL_STATUS_HEAP_ALREADY_INITIALIZED                 (ERROR_MASK | CUSTOMER_BIT | HEAP_MASK | 0x0002UL)
#define CL_STATUS_HEAP_NO_MORE_MEMORY                      (ERROR_MASK | CUSTOMER_BIT | HEAP_MASK | 0x0003UL)
#define CL_STATUS_HEAP_INSUFFICIENT_RESOURCES              (ERROR_MASK | CUSTOMER_BIT | HEAP_MASK | 0x0004UL)

// memory related errors
#define CL_STATUS_INVALID_POINTER                          (ERROR_MASK | CUSTOMER_BIT | MEMORY_MASK | 0x0001UL)
#define CL_STATUS_BUFFER_TOO_SMALL                         (ERROR_MASK | CUSTOMER_BIT | MEMORY_MASK | 0x0002UL)
#define CL_STATUS_INSUFFICIENT_MEMORY                      (ERROR_MASK | CUSTOMER_BIT | MEMORY_MASK | 0x0003UL)
#define CL_STATUS_MEMORY_CANNOT_BE_MAPPED                  (ERROR_MASK | CUSTOMER_BIT | MEMORY_MASK | 0x0004UL)
#define CL_STATUS_PHYSICAL_MEMORY_TOO_SMALL                (ERROR_MASK | CUSTOMER_BIT | MEMORY_MASK | 0x0005UL)
#define CL_STATUS_MEMORY_IS_NOT_RESERVED                   (ERROR_MASK | CUSTOMER_BIT | MEMORY_MASK | 0x0006UL)
#define CL_STATUS_PHYSICAL_MEMORY_NOT_AVAILABLE            (ERROR_MASK | CUSTOMER_BIT | MEMORY_MASK | 0x0007UL)
#define CL_STATUS_PAT_LAYOUT_NOT_COMPATIBLE                (ERROR_MASK | CUSTOMER_BIT | MEMORY_MASK | 0x0008UL)
#define CL_STATUS_MEMORY_CANNOT_BE_RESERVED                (ERROR_MASK | CUSTOMER_BIT | MEMORY_MASK | 0x0009UL)
#define CL_STATUS_MEMORY_ACCESS_DENIED                     (ERROR_MASK | CUSTOMER_BIT | MEMORY_MASK | 0x000AUL)
#define CL_STATUS_MEMORY_CANNOT_BE_COMMITED                (ERROR_MASK | CUSTOMER_BIT | MEMORY_MASK | 0x000BUL)
#define CL_STATUS_MEMORY_CONFLICTING_ACCESS_RIGHTS         (ERROR_MASK | CUSTOMER_BIT | MEMORY_MASK | 0x000CUL)
#define CL_STATUS_MEMORY_CONFLICTING_CACHEABILITY          (ERROR_MASK | CUSTOMER_BIT | MEMORY_MASK | 0x000DUL)
#define CL_STATUS_BUFFER_TOO_LARGE                         (ERROR_MASK | CUSTOMER_BIT | MEMORY_MASK | 0x000EUL)
#define CL_STATUS_MEMORY_ALREADY_RESERVED                  (ERROR_MASK | CUSTOMER_BIT | MEMORY_MASK | 0x000FUL)
#define CL_STATUS_MEMORY_IS_NOT_COMMITED                   (ERROR_MASK | CUSTOMER_BIT | MEMORY_MASK | 0x0010UL)
#define CL_STATUS_MEMORY_PREVENTS_USERMODE_ACCESS          (ERROR_MASK | CUSTOMER_BIT | MEMORY_MASK | 0x0011UL)
#define CL_STATUS_MEMORY_INSUFFICIENT_ACCESS_RIGHTS        (ERROR_MASK | CUSTOMER_BIT | MEMORY_MASK | 0x0012UL)
#define CL_STATUS_PHYSICAL_MEMORY_QUOTA_EXCEEDED           (ERROR_MASK | CUSTOMER_BIT | MEMORY_MASK | 0x0013UL)

// disk related errors
#define CL_STATUS_DISK_MBR_NOT_PRESENT                     (ERROR_MASK | CUSTOMER_BIT | DISK_MASK | 0x0001UL)
#define CL_STATUS_DISK_FULL                                (ERROR_MASK | CUSTOMER_BIT | DISK_MASK | 0x0002UL)

// APIC errors
#define CL_STATUS_APIC_NOT_MAPPED                          (ERROR_MASK | CUSTOMER_BIT | APIC_MASK | 0x0001UL)
#define CL_STATUS_APIC_NOT_INITIALIZED                     (ERROR_MASK | CUSTOMER_BIT | APIC_MASK | 0x0002UL)
#define CL_STATUS_APIC_NOT_ENABLED                         (ERROR_MASK | CUSTOMER_BIT | APIC_MASK | 0x0003UL)

// device error
#define CL_STATUS_DEVICE_DOES_NOT_EXIST                    (ERROR_MASK | CUSTOMER_BIT | DEVICE_MASK | 0x0001UL)
#define CL_STATUS_DEVICE_NO_MORE_DEVICES                   (ERROR_MASK | CUSTOMER_BIT | DEVICE_MASK | 0x0002UL)
#define CL_STATUS_DEVICE_NOT_SUPPORTED                     (ERROR_MASK | CUSTOMER_BIT | DEVICE_MASK | 0x0003UL)
#define CL_STATUS_DEVICE_NOT_INITIALIZED                   (ERROR_MASK | CUSTOMER_BIT | DEVICE_MASK | 0x0004UL)
#define CL_STATUS_DEVICE_SECTOR_OFFSET_EXCEEDED            (ERROR_MASK | CUSTOMER_BIT | DEVICE_MASK | 0x0005UL)
#define CL_STATUS_DEVICE_SECTOR_COUNT_EXCEEDED             (ERROR_MASK | CUSTOMER_BIT | DEVICE_MASK | 0x0006UL)
#define CL_STATUS_DEVICE_COULD_NOT_BE_CREATED              (ERROR_MASK | CUSTOMER_BIT | DEVICE_MASK | 0x0007UL)
#define CL_STATUS_DEVICE_DRIVER_COULD_NOT_BE_CREATED       (ERROR_MASK | CUSTOMER_BIT | DEVICE_MASK | 0x0008UL)
#define CL_STATUS_DEVICE_INVALID_OPERATION                 (ERROR_MASK | CUSTOMER_BIT | DEVICE_MASK | 0x0009UL)
#define CL_STATUS_DEVICE_DATA_ALIGNMENT_ERROR              (ERROR_MASK | CUSTOMER_BIT | DEVICE_MASK | 0x000AUL)
#define CL_STATUS_DEVICE_NO_FILESYSTEM_MOUNTED             (ERROR_MASK | CUSTOMER_BIT | DEVICE_MASK | 0x000BUL)
#define CL_STATUS_DEVICE_FILESYSTEM_UNSUPPORTED            (ERROR_MASK | CUSTOMER_BIT | DEVICE_MASK | 0x000CUL)
#define CL_STATUS_DEVICE_CLUSTER_INVALID                   (ERROR_MASK | CUSTOMER_BIT | DEVICE_MASK | 0x000DUL)
#define CL_STATUS_DEVICE_ALIGNMENT_NO_SATISFIED            (ERROR_MASK | CUSTOMER_BIT | DEVICE_MASK | 0x000EUL)
#define CL_STATUS_DEVICE_DMA_NOT_SUPPORTED                 (ERROR_MASK | CUSTOMER_BIT | DEVICE_MASK | 0x000FUL)
#define CL_STATUS_DEVICE_DMA_PHYSICAL_ADDRESS_TOO_HIGH     (ERROR_MASK | CUSTOMER_BIT | DEVICE_MASK | 0x0010UL)
#define CL_STATUS_DEVICE_DMA_PHYSICAL_SPAN_TOO_LARGE       (ERROR_MASK | CUSTOMER_BIT | DEVICE_MASK | 0x0011UL)
#define CL_STATUS_DEVICE_INTERRUPT_NOT_AVAILABLE           (ERROR_MASK | CUSTOMER_BIT | DEVICE_MASK | 0x0012UL)
#define CL_STATUS_DEVICE_DMA_SPAN_CROSSES_BOUNDARY         (ERROR_MASK | CUSTOMER_BIT | DEVICE_MASK | 0x0013UL)
#define CL_STATUS_DEVICE_DOES_NOT_EXIST_HINT               (INFO_MASK | CUSTOMER_BIT | DEVICE_MASK | 0x0014UL)
#define CL_STATUS_DEVICE_NOT_READY                         (ERROR_MASK | CUSTOMER_BIT | DEVICE_MASK | 0x0015UL)
#define CL_STATUS_DEVICE_DISABLED                          (ERROR_MASK | CUSTOMER_BIT | DEVICE_MASK | 0x0016UL)
#define CL_STATUS_DEVICE_NOT_CONNECTED                     (ERROR_MASK | CUSTOMER_BIT | DEVICE_MASK | 0x0017UL)
#define CL_STATUS_DEVICE_INTERRUPT_NOT_CONFIGURED          (ERROR_MASK | CUSTOMER_BIT | DEVICE_MASK | 0x0018UL)
#define CL_STATUS_DEVICE_CAPABILITIES_NOT_SUPPORTED        (ERROR_MASK | CUSTOMER_BIT | DEVICE_MASK | 0x0019UL)
#define CL_STATUS_DEVICE_CAPABILITY_DOES_NOT_EXIST         (ERROR_MASK | CUSTOMER_BIT | DEVICE_MASK | 0x001AUL)
#define CL_STATUS_DEVICE_INTERRUPT_TYPE_NOT_SUPPORTED      (ERROR_MASK | CUSTOMER_BIT | DEVICE_MASK | 0x001BUL)
#define CL_STATUS_DEVICE_INTERRUPT_PRIORITY_NOT_AVAILABLE  (ERROR_MASK | CUSTOMER_BIT | DEVICE_MASK | 0x001CUL)
#define CL_STATUS_DEVICE_SPACE_RANGE_EXCEEDED              (ERROR_MASK | CUSTOMER_BIT | DEVICE_MASK | 0x001DUL)
#define CL_STATUS_DEVICE_TYPE_INVALID                      (ERROR_MASK | CUSTOMER_BIT | DEVICE_MASK | 0x001EUL)
#define CL_STATUS_DEVICE_BUSY                              (ERROR_MASK | CUSTOMER_BIT | DEVICE_MASK | 0x001FUL)

// success status
#define CL_STATUS_SUCCESS                                  0UL

// check if a status was successful
#define SUCCEEDED(x)                                    (0 == ( (x) & FAIL_MASK ) )

typedef _Return_type_success_(SUCCEEDED(return)) DWORD  STATUS;

#ifndef CL_NON_NATIVE

// general errors
#define STATUS_UNSUPPORTED                              CL_STATUS_UNSUPPORTED
#define STATUS_INTERNAL_ERROR                           CL_STATUS_INTERNAL_ERROR
#define STATUS_UNSUCCESSFUL                             CL_STATUS_UNSUCCESSFUL
#define STATUS_ELEMENT_NOT_FOUND                        CL_STATUS_ELEMENT_NOT_FOUND
#define STATUS_ELEMENT_FOUND                            CL_STATUS_ELEMENT_FOUND
#define STATUS_LIST_EMPTY                               CL_STATUS_LIST_EMPTY
#define STATUS_ALREADY_INITIALIZED                      CL_STATUS_ALREADY_INITIALIZED
#define STATUS_ALREADY_INITIALIZED_HINT                 CL_STATUS_ALREADY_INITIALIZED_HINT
#define STATUS_INCOMPATIBLE_INTERFACE                   CL_STATUS_INCOMPATIBLE_INTERFACE
#define STATUS_INVALID_PARAMETER1                       CL_STATUS_INVALID_PARAMETER1
#define STATUS_INVALID_PARAMETER2                       CL_STATUS_INVALID_PARAMETER2
#define STATUS_INVALID_PARAMETER3                       CL_STATUS_INVALID_PARAMETER3
#define STATUS_INVALID_PARAMETER4                       CL_STATUS_INVALID_PARAMETER4
#define STATUS_INVALID_PARAMETER5                       CL_STATUS_INVALID_PARAMETER5
#define STATUS_INVALID_PARAMETER6                       CL_STATUS_INVALID_PARAMETER6
#define STATUS_INVALID_PARAMETER7                       CL_STATUS_INVALID_PARAMETER7
#define STATUS_INVALID_PARAMETER8                       CL_STATUS_INVALID_PARAMETER8
#define STATUS_INVALID_FILE_NAME                        CL_STATUS_INVALID_FILE_NAME
#define STATUS_FILE_NOT_FOUND                           CL_STATUS_FILE_NOT_FOUND
#define STATUS_FILE_TYPE_INVALID                        CL_STATUS_FILE_TYPE_INVALID
#define STATUS_TIME_INVALID                             CL_STATUS_TIME_INVALID
#define STATUS_PATH_NOT_VALID                           CL_STATUS_PATH_NOT_VALID
#define STATUS_FILE_ALREADY_EXISTS                      CL_STATUS_FILE_ALREADY_EXISTS
#define STATUS_FILE_NOT_DIRECTORY                       CL_STATUS_FILE_NOT_DIRECTORY
#define STATUS_NO_MORE_OBJECTS                          CL_STATUS_NO_MORE_OBJECTS
#define STATUS_PARSE_FAILED                             CL_STATUS_PARSE_FAILED
#define STATUS_JOB_INTERRUPTED                          CL_STATUS_JOB_INTERRUPTED
#define STATUS_INVALID_MZ_IMAGE                         CL_STATUS_INVALID_MZ_IMAGE
#define STATUS_INVALID_IMAGE_SIZE                       CL_STATUS_INVALID_IMAGE_SIZE
#define STATUS_INVALID_PE_IMAGE                         CL_STATUS_INVALID_PE_IMAGE
#define STATUS_IMAGE_NOT_64_BIT                         CL_STATUS_IMAGE_NOT_64_BIT
#define STATUS_IMAGE_SUBSYSTEM_NOT_NATIVE               CL_STATUS_IMAGE_SUBSYSTEM_NOT_NATIVE
#define STATUS_IMAGE_NOT_FULLY_LOADED                   CL_STATUS_IMAGE_NOT_FULLY_LOADED
#define STATUS_IMAGE_HAS_RELOCATIONS                    CL_STATUS_IMAGE_HAS_RELOCATIONS
#define STATUS_NOT_IMPLEMENTED                          CL_STATUS_NOT_IMPLEMENTED
#define STATUS_INVALID_FUNCTION                         CL_STATUS_INVALID_FUNCTION
#define STATUS_INVALID_BUFFER                           CL_STATUS_INVALID_BUFFER
#define STATUS_NOT_INITIALIZED                          CL_STATUS_NOT_INITIALIZED
#define STATUS_NO_HANDLING_REQUIRED                     CL_STATUS_NO_HANDLING_REQUIRED
#define STATUS_CONFLICTING_OPTIONS                      CL_STATUS_CONFLICTING_OPTIONS
#define STATUS_ASSERTION_FAILURE                        CL_STATUS_ASSERTION_FAILURE
#define STATUS_NO_DATA_AVAILABLE                        CL_STATUS_NO_DATA_AVAILABLE
#define STATUS_LIMIT_REACHED                            CL_STATUS_LIMIT_REACHED
#define STATUS_SIZE_INVALID                             CL_STATUS_SIZE_INVALID
#define STATUS_VALUE_MISMATCH                           CL_STATUS_VALUE_MISMATCH
#define STATUS_OPERATION_REQUIRES_HIGHER_CPL            CL_STATUS_OPERATION_REQUIRES_HIGHER_CPL

// introspection errors
#define STATUS_INTRO_INVALID_SYSCALL_HANDLER            CL_STATUS_INTRO_INVALID_SYSCALL_HANDLER
#define STATUS_INTRO_KERNEL_BASE_NOT_FOUND              CL_STATUS_INTRO_KERNEL_BASE_NOT_FOUND
#define STATUS_INTRO_KERNEL_INVALID_IMAGE               CL_STATUS_INTRO_KERNEL_INVALID_IMAGE
#define STATUS_INTRO_EXPORT_NOT_FOUND                   CL_STATUS_INTRO_EXPORT_NOT_FOUND
#define STATUS_INTRO_MODULE_LIST_NOT_FOUND              CL_STATUS_INTRO_MODULE_LIST_NOT_FOUND
#define STATUS_INTRO_PCR_NOT_AVAILABLE                  CL_STATUS_INTRO_PCR_NOT_AVAILABLE
#define STATUS_INTRO_KERNEL_ADDRESS_INVALID             CL_STATUS_INTRO_KERNEL_ADDRESS_INVALID
#define STATUS_INTRO_VARIABLES_NOT_DEFINED              CL_STATUS_INTRO_VARIABLES_NOT_DEFINED
#define STATUS_INTRO_INTROSPECTION_NOT_SUPPORTED        CL_STATUS_INTRO_INTROSPECTION_NOT_SUPPORTED
#define STATUS_INTRO_PROCESS_NOT_VALID                  CL_STATUS_INTRO_PROCESS_NOT_VALID
#define STATUS_INTRO_PATTERN_NOT_FOUND                  CL_STATUS_INTRO_PATTERN_NOT_FOUND
#define STATUS_INTRO_INTROSPECTION_NOT_INITIALIZED      CL_STATUS_INTRO_INTROSPECTION_NOT_INITIALIZED
#define STATUS_INTRO_DEBUGGER_DATA_NOT_FOUND            CL_STATUS_INTRO_DEBUGGER_DATA_NOT_FOUND

// vmx related issues
#define STATUS_VMX_WRITE_FAILED                         CL_STATUS_VMX_WRITE_FAILED
#define STATUS_VMX_READ_FAILED                          CL_STATUS_VMX_READ_FAILED
#define STATUS_VMX_INVEPT_FAILED                        CL_STATUS_VMX_INVEPT_FAILED
#define STATUS_VMX_EPT_MAPPING_FAILED                   CL_STATUS_VMX_EPT_MAPPING_FAILED
#define STATUS_VMX_EXIT_NOT_IMPLEMENTED                 CL_STATUS_VMX_EXIT_NOT_IMPLEMENTED
#define STATUS_VMX_FEATURE_NOT_SUPPORTED                CL_STATUS_VMX_FEATURE_NOT_SUPPORTED
#define STATUS_VMX_UNEXPECTED_VMCALL                    CL_STATUS_VMX_UNEXPECTED_VMCALL
#define STATUS_VMX_GUEST_MEMORY_CANNOT_BE_MAPPED        CL_STATUS_VMX_GUEST_MEMORY_CANNOT_BE_MAPPED
#define STATUS_VMX_NO_CALLBACKS                         CL_STATUS_VMX_NO_CALLBACKS
#define STATUS_VMX_INCOMPATIBLE_CONFIGURATION           CL_STATUS_VMX_INCOMPATIBLE_CONFIGURATION

// cpu related errors
#define STATUS_CPU_UNSUPPORTED_FEATURE                  CL_STATUS_CPU_UNSUPPORTED_FEATURE
#define STATUS_CPU_MONITOR_NOT_SUPPORTED                CL_STATUS_CPU_MONITOR_NOT_SUPPORTED
#define STATUS_CPU_MONITOR_FILTER_SIZE_TOO_SMALL        CL_STATUS_CPU_MONITOR_FILTER_SIZE_TOO_SMALL
#define STATUS_CPU_MONITOR_FILTER_SIZE_TOO_LARGE        CL_STATUS_CPU_MONITOR_FILTER_SIZE_TOO_LARGE
#define STATUS_CPU_NO_MATCHES                           CL_STATUS_CPU_NO_MATCHES
#define STATUS_CPU_UNSUPPORED_XSAVE_FEATURE_SIZE        CL_STATUS_CPU_UNSUPPORED_XSAVE_FEATURE_SIZE

// communication related errors
#define STATUS_COMM_SERIAL_ALREADY_INITIALIZED          CL_STATUS_COMM_SERIAL_ALREADY_INITIALIZED
#define STATUS_COMM_SERIAL_NO_PORTS_AVAILABLE           CL_STATUS_COMM_SERIAL_NO_PORTS_AVAILABLE
#define STATUS_COMM_SERIAL_NOT_INITIALIZED              CL_STATUS_COMM_SERIAL_NOT_INITIALIZED
#define STATUS_COMM_VMCALL_UNSUPPORTED_COMMAND          CL_STATUS_COMM_VMCALL_UNSUPPORTED_COMMAND

// timer related errors
#define STATUS_TIMER_INVALID_FREQUENCY                  CL_STATUS_TIMER_INVALID_FREQUENCY
#define STATUS_TIMER_NOT_EXPIRED_YET					CL_STATUS_TIMER_NOT_EXPIRED_YET

// heap related errors
#define STATUS_HEAP_TOO_SMALL                           CL_STATUS_HEAP_TOO_SMALL
#define STATUS_HEAP_ALREADY_INITIALIZED                 CL_STATUS_HEAP_ALREADY_INITIALIZED
#define STATUS_HEAP_NO_MORE_MEMORY                      CL_STATUS_HEAP_NO_MORE_MEMORY
#define STATUS_HEAP_INSUFFICIENT_RESOURCES              CL_STATUS_HEAP_INSUFFICIENT_RESOURCES

// memory related errors
#define STATUS_INVALID_POINTER                          CL_STATUS_INVALID_POINTER
#define STATUS_BUFFER_TOO_SMALL                         CL_STATUS_BUFFER_TOO_SMALL
#define STATUS_INSUFFICIENT_MEMORY                      CL_STATUS_INSUFFICIENT_MEMORY
#define STATUS_MEMORY_CANNOT_BE_MAPPED                  CL_STATUS_MEMORY_CANNOT_BE_MAPPED
#define STATUS_PHYSICAL_MEMORY_TOO_SMALL                CL_STATUS_PHYSICAL_MEMORY_TOO_SMALL
#define STATUS_MEMORY_IS_NOT_RESERVED                   CL_STATUS_MEMORY_IS_NOT_RESERVED
#define STATUS_PHYSICAL_MEMORY_NOT_AVAILABLE            CL_STATUS_PHYSICAL_MEMORY_NOT_AVAILABLE
#define STATUS_PAT_LAYOUT_NOT_COMPATIBLE                CL_STATUS_PAT_LAYOUT_NOT_COMPATIBLE
#define STATUS_MEMORY_CANNOT_BE_RESERVED                CL_STATUS_MEMORY_CANNOT_BE_RESERVED
#define STATUS_MEMORY_ACCESS_DENIED                     CL_STATUS_MEMORY_ACCESS_DENIED
#define STATUS_MEMORY_CANNOT_BE_COMMITED                CL_STATUS_MEMORY_CANNOT_BE_COMMITED
#define STATUS_MEMORY_CONFLICTING_ACCESS_RIGHTS         CL_STATUS_MEMORY_CONFLICTING_ACCESS_RIGHTS
#define STATUS_MEMORY_CONFLICTING_CACHEABILITY          CL_STATUS_MEMORY_CONFLICTING_CACHEABILITY
#define STATUS_BUFFER_TOO_LARGE                         CL_STATUS_BUFFER_TOO_LARGE
#define STATUS_MEMORY_ALREADY_RESERVED                  CL_STATUS_MEMORY_ALREADY_RESERVED
#define STATUS_MEMORY_IS_NOT_COMMITED                   CL_STATUS_MEMORY_IS_NOT_COMMITED
#define STATUS_MEMORY_PREVENTS_USERMODE_ACCESS          CL_STATUS_MEMORY_PREVENTS_USERMODE_ACCESS
#define STATUS_MEMORY_INSUFFICIENT_ACCESS_RIGHTS        CL_STATUS_MEMORY_INSUFFICIENT_ACCESS_RIGHTS
#define STATUS_PHYSICAL_MEMORY_QUOTA_EXCEEDED           CL_STATUS_PHYSICAL_MEMORY_QUOTA_EXCEEDED

// disk related errors
#define STATUS_DISK_MBR_NOT_PRESENT                     CL_STATUS_DISK_MBR_NOT_PRESENT
#define STATUS_DISK_FULL                                CL_STATUS_DISK_FULL

// APIC errors
#define STATUS_APIC_NOT_MAPPED                          CL_STATUS_APIC_NOT_MAPPED
#define STATUS_APIC_NOT_INITIALIZED                     CL_STATUS_APIC_NOT_INITIALIZED
#define STATUS_APIC_NOT_ENABLED                         CL_STATUS_APIC_NOT_ENABLED

// device error
#define STATUS_DEVICE_DOES_NOT_EXIST                    CL_STATUS_DEVICE_DOES_NOT_EXIST
#define STATUS_DEVICE_NO_MORE_DEVICES                   CL_STATUS_DEVICE_NO_MORE_DEVICES
#define STATUS_DEVICE_NOT_SUPPORTED                     CL_STATUS_DEVICE_NOT_SUPPORTED
#define STATUS_DEVICE_NOT_INITIALIZED                   CL_STATUS_DEVICE_NOT_INITIALIZED
#define STATUS_DEVICE_SECTOR_OFFSET_EXCEEDED            CL_STATUS_DEVICE_SECTOR_OFFSET_EXCEEDED
#define STATUS_DEVICE_SECTOR_COUNT_EXCEEDED             CL_STATUS_DEVICE_SECTOR_COUNT_EXCEEDED
#define STATUS_DEVICE_COULD_NOT_BE_CREATED              CL_STATUS_DEVICE_COULD_NOT_BE_CREATED
#define STATUS_DEVICE_DRIVER_COULD_NOT_BE_CREATED       CL_STATUS_DEVICE_DRIVER_COULD_NOT_BE_CREATED
#define STATUS_DEVICE_INVALID_OPERATION                 CL_STATUS_DEVICE_INVALID_OPERATION
#define STATUS_DEVICE_DATA_ALIGNMENT_ERROR              CL_STATUS_DEVICE_DATA_ALIGNMENT_ERROR
#define STATUS_DEVICE_NO_FILESYSTEM_MOUNTED             CL_STATUS_DEVICE_NO_FILESYSTEM_MOUNTED
#define STATUS_DEVICE_FILESYSTEM_UNSUPPORTED            CL_STATUS_DEVICE_FILESYSTEM_UNSUPPORTED
#define STATUS_DEVICE_CLUSTER_INVALID                   CL_STATUS_DEVICE_CLUSTER_INVALID
#define STATUS_DEVICE_ALIGNMENT_NO_SATISFIED            CL_STATUS_DEVICE_ALIGNMENT_NO_SATISFIED
#define STATUS_DEVICE_DMA_NOT_SUPPORTED                 CL_STATUS_DEVICE_DMA_NOT_SUPPORTED
#define STATUS_DEVICE_DMA_PHYSICAL_ADDRESS_TOO_HIGH     CL_STATUS_DEVICE_DMA_PHYSICAL_ADDRESS_TOO_HIGH
#define STATUS_DEVICE_DMA_PHYSICAL_SPAN_TOO_LARGE       CL_STATUS_DEVICE_DMA_PHYSICAL_SPAN_TOO_LARGE
#define STATUS_DEVICE_INTERRUPT_NOT_AVAILABLE           CL_STATUS_DEVICE_INTERRUPT_NOT_AVAILABLE
#define STATUS_DEVICE_DMA_SPAN_CROSSES_BOUNDARY         CL_STATUS_DEVICE_DMA_SPAN_CROSSES_BOUNDARY
#define STATUS_DEVICE_DOES_NOT_EXIST_HINT               CL_STATUS_DEVICE_DOES_NOT_EXIST_HINT
#define STATUS_DEVICE_NOT_READY                         CL_STATUS_DEVICE_NOT_READY
#define STATUS_DEVICE_DISABLED                          CL_STATUS_DEVICE_DISABLED
#define STATUS_DEVICE_NOT_CONNECTED                     CL_STATUS_DEVICE_NOT_CONNECTED
#define STATUS_DEVICE_INTERRUPT_NOT_CONFIGURED          CL_STATUS_DEVICE_INTERRUPT_NOT_CONFIGURED
#define STATUS_DEVICE_CAPABILITIES_NOT_SUPPORTED        CL_STATUS_DEVICE_CAPABILITIES_NOT_SUPPORTED
#define STATUS_DEVICE_CAPABILITY_DOES_NOT_EXIST         CL_STATUS_DEVICE_CAPABILITY_DOES_NOT_EXIST
#define STATUS_DEVICE_INTERRUPT_TYPE_NOT_SUPPORTED      CL_STATUS_DEVICE_INTERRUPT_TYPE_NOT_SUPPORTED
#define STATUS_DEVICE_INTERRUPT_PRIORITY_NOT_AVAILABLE  CL_STATUS_DEVICE_INTERRUPT_PRIORITY_NOT_AVAILABLE
#define STATUS_DEVICE_SPACE_RANGE_EXCEEDED              CL_STATUS_DEVICE_SPACE_RANGE_EXCEEDED
#define STATUS_DEVICE_TYPE_INVALID                      CL_STATUS_DEVICE_TYPE_INVALID
#define STATUS_DEVICE_BUSY                              CL_STATUS_DEVICE_BUSY

// success status
#define STATUS_SUCCESS                                  CL_STATUS_SUCCESS
#endif // CL_NON_NATIVE

C_HEADER_END
