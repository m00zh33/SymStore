struct LIST_ENTRY32;
struct LIST_ENTRY64;
struct POHANDLE__;
struct _ACCESS_STATE;
struct _ADAPTER_OBJECT;
struct _CM_FULL_RESOURCE_DESCRIPTOR;
struct _CM_PARTIAL_RESOURCE_DESCRIPTOR;
struct _CM_PARTIAL_RESOURCE_LIST;
struct _CM_RESOURCE_LIST;
struct _COMPRESSED_DATA_INFO;
struct _CONTEXT;
struct _CONTROLLER_OBJECT;
struct _DESCRIPTION_HEADER;
struct _DESCRIPTOR;
struct _DEVICE_CAPABILITIES;
struct _DEVICE_OBJECT;
struct _DEVICE_OBJECT_POWER_EXTENSION;
struct _DEVOBJ_EXTENSION;
struct _DISPATCHER_HEADER;
struct _DMA_ADAPTER;
struct _DMA_ADAPTER_INFO;
struct _DMA_ADAPTER_INFO_V1;
struct _DMA_FUNCTION_TABLE;
struct _DMA_OPERATIONS;
struct _DMA_REQUEST_LINE_BINDING_DESCRIPTION;
struct _DMA_SCATTER_GATHER_LIST;
struct _DMA_TRANSFER_CONTEXT;
struct _DMA_TRANSFER_CONTEXT_V1;
struct _DMA_TRANSFER_INFO;
struct _DMA_TRANSFER_INFO_V1;
struct _DRIVER_EXTENSION;
struct _DRIVER_OBJECT;
struct _ECP_LIST;
struct _EPROCESS;
struct _ERESOURCE;
struct _ETHREAD;
struct _EVENT_DATA_DESCRIPTOR;
struct _EVENT_DESCRIPTOR;
struct _EXCEPTION_RECORD;
struct _EXCEPTION_REGISTRATION_RECORD;
struct _FACS;
struct _FADT;
struct _FAST_IO_DISPATCH;
struct _FAST_MUTEX;
struct _FILE_BASIC_INFORMATION;
struct _FILE_GET_QUOTA_INFORMATION;
struct _FILE_NETWORK_OPEN_INFORMATION;
struct _FILE_OBJECT;
struct _FILE_STANDARD_INFORMATION;
struct _FLOATING_SAVE_AREA;
struct _GENERAL_LOOKASIDE;
struct _GENERAL_LOOKASIDE_POOL;
struct _GEN_ADDR;
struct _GROUP_AFFINITY;
struct _GUID;
struct _HALP_ALLOC_CONTEXT;
struct _HALP_DMA_ADAPTER_OBJECT;
struct _HALP_DMA_CHANNEL;
struct _HALP_DMA_CONTROLLER;
struct _HALP_DMA_MASTER_ADAPTER_OBJECT;
struct _HALP_DMA_TRANSLATION_BUFFER;
struct _HALP_DMA_TRANSLATION_BUFFER_POSITION;
struct _HALP_DMA_TRANSLATION_ENTRY;
struct _HAL_ENLIGHTENMENT_INFORMATION;
struct _HARDWARE_PTE_X86;
struct _HARDWARE_PTE_X86PAE;
struct _INITIAL_PRIVILEGE_SET;
struct _INTERFACE;
struct _INTERRUPT_FUNCTION_TABLE;
struct _INTERRUPT_LINE;
struct _INTERRUPT_LINE_STATE;
struct _INTERRUPT_TARGET;
struct _IOAPIC;
struct _IOSAPIC;
struct _IO_COMPLETION_CONTEXT;
struct _IO_DRIVER_CREATE_CONTEXT;
struct _IO_NMISOURCE;
struct _IO_RESOURCE_DESCRIPTOR;
struct _IO_RESOURCE_LIST;
struct _IO_RESOURCE_REQUIREMENTS_LIST;
struct _IO_SECURITY_CONTEXT;
struct _IO_STACK_LOCATION;
struct _IO_STATUS_BLOCK;
struct _IO_TIMER;
struct _IRP;
struct _ISA_VECTOR;
struct _KAPC;
struct _KDEVICE_QUEUE;
struct _KDEVICE_QUEUE_ENTRY;
struct _KDPC;
struct _KEVENT;
struct _KGDTENTRY;
struct _KIDTENTRY;
struct _KPCR;
struct _KPRCB;
struct _KPROCESS;
struct _KPROCESSOR_STATE;
struct _KSEMAPHORE;
struct _KSPECIAL_REGISTERS;
struct _KSPIN_LOCK_QUEUE;
struct _KSYSTEM_TIME;
struct _KTHREAD;
struct _KTSS;
struct _KUSER_SHARED_DATA;
struct _KiIoAccessMap;
struct _LIST_ENTRY;
struct _LOCAL_NMISOURCE;
struct _LOOKASIDE_LIST_EX;
struct _LUID;
struct _LUID_AND_ATTRIBUTES;
struct _MAILSLOT_CREATE_PARAMETERS;
struct _MAPIC;
struct _MDL;
struct _NAMED_PIPE_CREATE_PARAMETERS;
struct _NPAGED_LOOKASIDE_LIST;
struct _NT_TIB;
struct _OWNER_ENTRY;
struct _PAGED_LOOKASIDE_LIST;
struct _PLATFORM_INTERRUPT;
struct _POWER_SEQUENCE;
struct _PRIVILEGE_SET;
struct _PROCLOCALAPIC;
struct _PROCLOCALSAPIC;
struct _REGISTERED_INTERRUPT_CONTROLLER;
struct _RSDP;
struct _RSDT_32;
struct _RTL_BITMAP;
struct _RTL_DYNAMIC_HASH_TABLE;
struct _RTL_DYNAMIC_HASH_TABLE_CONTEXT;
struct _RTL_DYNAMIC_HASH_TABLE_ENTRY;
struct _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR;
struct _RTL_QUERY_REGISTRY_TABLE;
struct _RTL_SPLAY_LINKS;
struct _SCATTER_GATHER_ELEMENT;
struct _SCATTER_GATHER_LIST;
struct _SCSI_REQUEST_BLOCK;
struct _SECTION_OBJECT_POINTERS;
struct _SECURITY_QUALITY_OF_SERVICE;
struct _SECURITY_SUBJECT_CONTEXT;
struct _SINGLE_LIST_ENTRY;
struct _STRING;
struct _SYSTEM_POWER_STATE_CONTEXT;
struct _TXN_PARAMETER_BLOCK;
struct _UNICODE_STRING;
struct _VPB;
struct _WAIT_CONTEXT_BLOCK;
struct _WHEA_ERROR_PACKET_V2;
struct _WHEA_ERROR_RECORD;
struct _WHEA_ERROR_RECORD_HEADER;
struct _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR;
struct _WHEA_PROCESSOR_GENERIC_ERROR_SECTION;
struct _WHEA_XPF_MCA_SECTION;
struct _WHEA_XPF_PROCESSOR_ERROR_SECTION;
struct _WORK_QUEUE_ITEM;
struct _XSTATE_CONFIGURATION;
struct _XSTATE_FEATURE;

union _LARGE_INTEGER;
union _MCG_STATUS;
union _MCI_STATUS;
union _POWER_STATE;
union _SLIST_HEADER;
union _ULARGE_INTEGER;
union _WHEA_ERROR_PACKET_FLAGS;
union _WHEA_ERROR_RECORD_HEADER_FLAGS;
union _WHEA_ERROR_RECORD_HEADER_VALIDBITS;
union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS;
union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_VALIDBITS;
union _WHEA_PERSISTENCE_INFO;
union _WHEA_PROCESSOR_GENERIC_ERROR_SECTION_VALIDBITS;
union _WHEA_REVISION;
union _WHEA_TIMESTAMP;
union _WHEA_XPF_PROCESSOR_ERROR_SECTION_VALIDBITS;

enum BUS_QUERY_ID_TYPE;
enum CPU_VENDORS;
enum DEVICE_TEXT_TYPE;
enum DMA_COMPLETION_STATUS;
enum POWER_ACTION;
enum _ALTERNATIVE_ARCHITECTURE_TYPE;
enum _DEVICE_POWER_STATE;
enum _DEVICE_RELATION_TYPE;
enum _DEVICE_USAGE_NOTIFICATION_TYPE;
enum _DEVICE_WAKE_DEPTH;
enum _DMA_INTERRUPT_TYPE;
enum _DMA_WIDTH;
enum _EVENT_TYPE;
enum _EXCEPTION_DISPOSITION;
enum _FILE_INFORMATION_CLASS;
enum _FSINFOCLASS;
enum _HALP_DMA_MAP_BUFFER_TYPE;
enum _HAL_DMA_CRASH_DUMP_REGISTER_TYPE;
enum _HAL_INIT_PHASE;
enum _INTERFACE_TYPE;
enum _INTERRUPT_PROBLEM;
enum _INTERRUPT_RESULT;
enum _INTERRUPT_TARGET_TYPE;
enum _IO_ALLOCATION_ACTION;
enum _IRQ_PRIORITY;
enum _KINTERRUPT_MODE;
enum _KINTERRUPT_POLARITY;
enum _KNOWN_CONTROLLER_TYPE;
enum _KSPIN_LOCK_QUEUE_NUMBER;
enum _MEMORY_CACHING_TYPE;
enum _MEMORY_CACHING_TYPE_ORIG;
enum _MODE;
enum _NT_PRODUCT_TYPE;
enum _POOL_TYPE;
enum _POWER_STATE_TYPE;
enum _REG_NOTIFY_CLASS;
enum _SECURITY_IMPERSONATION_LEVEL;
enum _SYSTEM_POWER_STATE;
enum _USER_ACTIVITY_PRESENCE;
enum _WHEA_CPU_VENDOR;
enum _WHEA_ERROR_PACKET_DATA_FORMAT;
enum _WHEA_ERROR_SEVERITY;
enum _WHEA_ERROR_SOURCE_TYPE;
enum _WHEA_ERROR_TYPE;

typedef struct LIST_ENTRY32 {
    ULONG Flink;
    ULONG Blink;
};

typedef struct LIST_ENTRY64 {
    ULONG64 Flink;
    ULONG64 Blink;
};

typedef struct POHANDLE__ {
    LONG unused;
};

typedef struct _ACCESS_STATE {
    struct _LUID OperationID;
    UCHAR SecurityEvaluated;
    UCHAR GenerateAudit;
    UCHAR GenerateOnClose;
    UCHAR PrivilegesAllocated;
    ULONG Flags;
    ULONG RemainingDesiredAccess;
    ULONG PreviouslyGrantedAccess;
    ULONG OriginalDesiredAccess;
    struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext;
    PVOID SecurityDescriptor;
    PVOID AuxData;
    union {
        struct _INITIAL_PRIVILEGE_SET InitialPrivilegeSet;
        struct _PRIVILEGE_SET PrivilegeSet;
    } Privileges;
    UCHAR AuditPrivileges;
    struct _UNICODE_STRING ObjectName;
    struct _UNICODE_STRING ObjectTypeName;
};

typedef struct _ADAPTER_OBJECT {
    struct _HALP_DMA_ADAPTER_OBJECT AdapterObject;
    ULONG LibraryVersion;
    struct _HALP_DMA_MASTER_ADAPTER_OBJECT *MasterAdapter;
    struct _LIST_ENTRY WaitQueueEntry;
    struct _KDEVICE_QUEUE ChannelWaitQueue;
    ULONG ResourceWaitLock;
    struct _LIST_ENTRY ResourceWaitQueue;
    struct _LIST_ENTRY ChannelResourceWaitQueue;
    UCHAR ResourceQueueBusy;
    ULONG MapRegistersPerChannel;
    PVOID MapRegisterBase;
    ULONG NumberOfMapRegisters;
    PVOID CrashDumpRegisterBase[2];
    ULONG NumberOfCrashDumpRegisters[2];
    ULONG CrashDumpRegisterRefCount[2];
    struct _LIST_ENTRY AdapterCrashDumpList;
    struct _MDL *MapRegisterMdl;
    ULONG MapRegisterMdlLock;
    PVOID AllocationHandle;
    PVOID VirtualAddress;
    UCHAR IsAllocationMdlBased;
    UCHAR NoLocalPool;
    struct _WAIT_CONTEXT_BLOCK *CurrentWcb;
    struct _DMA_TRANSFER_CONTEXT *CurrentTransferContext;
    struct _HALP_DMA_CONTROLLER *DmaController;
    ULONG Controller;
    ULONG ChannelNumber;
    ULONG RequestLine;
    ULONG RequestedChannelCount;
    ULONG AllocatedChannelCount;
    ULONG AllocatedChannels[8];
    PVOID ChannelAdapter;
    UCHAR NeedsMapRegisters;
    UCHAR MasterDevice;
    UCHAR ScatterGather;
    UCHAR AutoInitialize;
    UCHAR IgnoreCount;
    UCHAR CacheCoherent;
    UCHAR Dma32BitAddresses;
    UCHAR Dma64BitAddresses;
    ULONG DmaAddressWidth;
    enum _DMA_WIDTH DmaPortWidth;
    union _LARGE_INTEGER DeviceAddress;
    struct _LIST_ENTRY AdapterList;
    struct _WORK_QUEUE_ITEM WorkItem;
    struct _MDL *ScatterGatherMdl;
    ULONG ScatterGatherBufferLength;
    struct _SCATTER_GATHER_LIST ScatterGatherBuffer;
};

typedef struct _CM_FULL_RESOURCE_DESCRIPTOR {
    enum _INTERFACE_TYPE InterfaceType;
    ULONG BusNumber;
    struct _CM_PARTIAL_RESOURCE_LIST PartialResourceList;
};

typedef struct _CM_PARTIAL_RESOURCE_DESCRIPTOR {
    UCHAR Type;
    UCHAR ShareDisposition;
    USHORT Flags;
    union {
        struct {
            union _LARGE_INTEGER Start;
            ULONG Length;
        } Generic;
        struct {
            union _LARGE_INTEGER Start;
            ULONG Length;
        } Port;
        struct {
            USHORT Level;
            USHORT Group;
            ULONG Vector;
            ULONG Affinity;
        } Interrupt;
        struct {
            struct {
                USHORT Group;
                USHORT MessageCount;
                ULONG Vector;
                ULONG Affinity;
            } Raw;
            struct {
                USHORT Level;
                USHORT Group;
                ULONG Vector;
                ULONG Affinity;
            } Translated;
        } MessageInterrupt;
        struct {
            union _LARGE_INTEGER Start;
            ULONG Length;
        } Memory;
        struct {
            ULONG Channel;
            ULONG Port;
            ULONG Reserved1;
        } Dma;
        struct {
            ULONG Channel;
            ULONG RequestLine;
            UCHAR TransferWidth;
            UCHAR Reserved1;
            UCHAR Reserved2;
            UCHAR Reserved3;
        } DmaV3;
        struct {
            ULONG Data[3];
        } DevicePrivate;
        struct {
            ULONG Start;
            ULONG Length;
            ULONG Reserved;
        } BusNumber;
        struct {
            ULONG DataSize;
            ULONG Reserved1;
            ULONG Reserved2;
        } DeviceSpecificData;
        struct {
            union _LARGE_INTEGER Start;
            ULONG Length40;
        } Memory40;
        struct {
            union _LARGE_INTEGER Start;
            ULONG Length48;
        } Memory48;
        struct {
            union _LARGE_INTEGER Start;
            ULONG Length64;
        } Memory64;
        struct {
            UCHAR Class;
            UCHAR Type;
            UCHAR Reserved1;
            UCHAR Reserved2;
            ULONG IdLowPart;
            ULONG IdHighPart;
        } Connection;
    } u;
};

typedef struct _CM_PARTIAL_RESOURCE_LIST {
    USHORT Version;
    USHORT Revision;
    ULONG Count;
    struct _CM_PARTIAL_RESOURCE_DESCRIPTOR PartialDescriptors[1];
};

typedef struct _CM_RESOURCE_LIST {
    ULONG Count;
    struct _CM_FULL_RESOURCE_DESCRIPTOR List[1];
};

typedef struct _COMPRESSED_DATA_INFO {
};

typedef struct _CONTEXT {
    ULONG ContextFlags;
    ULONG Dr0;
    ULONG Dr1;
    ULONG Dr2;
    ULONG Dr3;
    ULONG Dr6;
    ULONG Dr7;
    struct _FLOATING_SAVE_AREA FloatSave;
    ULONG SegGs;
    ULONG SegFs;
    ULONG SegEs;
    ULONG SegDs;
    ULONG Edi;
    ULONG Esi;
    ULONG Ebx;
    ULONG Edx;
    ULONG Ecx;
    ULONG Eax;
    ULONG Ebp;
    ULONG Eip;
    ULONG SegCs;
    ULONG EFlags;
    ULONG Esp;
    ULONG SegSs;
    UCHAR ExtendedRegisters[512];
};

typedef struct _CONTROLLER_OBJECT {
    SHORT Type;
    SHORT Size;
    PVOID ControllerExtension;
    struct _KDEVICE_QUEUE DeviceWaitQueue;
    ULONG Spare1;
    union _LARGE_INTEGER Spare2;
};

typedef struct _DESCRIPTION_HEADER {
    ULONG Signature;
    ULONG Length;
    UCHAR Revision;
    UCHAR Checksum;
    CHAR OEMID[6];
    CHAR OEMTableID[8];
    ULONG OEMRevision;
    CHAR CreatorID[4];
    ULONG CreatorRev;
};

typedef struct _DESCRIPTOR {
    USHORT Pad;
    USHORT Limit;
    ULONG Base;
};

typedef struct _DEVICE_CAPABILITIES {
    USHORT Size;
    USHORT Version;
    ULONG DeviceD1 : 1;
    ULONG DeviceD2 : 1;
    ULONG LockSupported : 1;
    ULONG EjectSupported : 1;
    ULONG Removable : 1;
    ULONG DockDevice : 1;
    ULONG UniqueID : 1;
    ULONG SilentInstall : 1;
    ULONG RawDeviceOK : 1;
    ULONG SurpriseRemovalOK : 1;
    ULONG WakeFromD0 : 1;
    ULONG WakeFromD1 : 1;
    ULONG WakeFromD2 : 1;
    ULONG WakeFromD3 : 1;
    ULONG HardwareDisabled : 1;
    ULONG NonDynamic : 1;
    ULONG WarmEjectSupported : 1;
    ULONG NoDisplayInUI : 1;
    ULONG Reserved1 : 1;
    ULONG Reserved : 13;
    ULONG Address;
    ULONG UINumber;
    enum _DEVICE_POWER_STATE DeviceState[7];
    enum _SYSTEM_POWER_STATE SystemWake;
    enum _DEVICE_POWER_STATE DeviceWake;
    ULONG D1Latency;
    ULONG D2Latency;
    ULONG D3Latency;
};

typedef struct _DEVICE_OBJECT {
    SHORT Type;
    USHORT Size;
    LONG ReferenceCount;
    struct _DRIVER_OBJECT *DriverObject;
    struct _DEVICE_OBJECT *NextDevice;
    struct _DEVICE_OBJECT *AttachedDevice;
    struct _IRP *CurrentIrp;
    struct _IO_TIMER *Timer;
    ULONG Flags;
    ULONG Characteristics;
    struct _VPB *Vpb;
    PVOID DeviceExtension;
    ULONG DeviceType;
    CHAR StackSize;
    union {
        struct _LIST_ENTRY ListEntry;
        struct _WAIT_CONTEXT_BLOCK Wcb;
    } Queue;
    ULONG AlignmentRequirement;
    struct _KDEVICE_QUEUE DeviceQueue;
    struct _KDPC Dpc;
    ULONG ActiveThreadCount;
    PVOID SecurityDescriptor;
    struct _KEVENT DeviceLock;
    USHORT SectorSize;
    USHORT Spare1;
    struct _DEVOBJ_EXTENSION *DeviceObjectExtension;
    PVOID Reserved;
};

typedef struct _DEVICE_OBJECT_POWER_EXTENSION {
};

typedef struct _DEVOBJ_EXTENSION {
    SHORT Type;
    USHORT Size;
    struct _DEVICE_OBJECT *DeviceObject;
    ULONG PowerFlags;
    struct _DEVICE_OBJECT_POWER_EXTENSION *Dope;
    ULONG ExtensionFlags;
    PVOID DeviceNode;
    struct _DEVICE_OBJECT *AttachedTo;
    LONG StartIoKey;
    ULONG StartIoFlags;
    struct _VPB *Vpb;
    struct _LIST_ENTRY DependentList;
    struct _LIST_ENTRY ProviderList;
};

typedef struct _DISPATCHER_HEADER {
    UCHAR Type;
    UCHAR TimerControlFlags;
    UCHAR Absolute : 1;
    UCHAR Wake : 1;
    UCHAR EncodedTolerableDelay : 6;
    UCHAR Abandoned;
    UCHAR Signalling;
    UCHAR ThreadControlFlags;
    UCHAR CycleProfiling : 1;
    UCHAR CounterProfiling : 1;
    UCHAR GroupScheduling : 1;
    UCHAR AffinitySet : 1;
    UCHAR Reserved : 4;
    UCHAR Hand;
    UCHAR Size;
    UCHAR TimerMiscFlags;
    UCHAR Index : 1;
    UCHAR Processor : 5;
    UCHAR Inserted : 1;
    UCHAR Expired : 1;
    UCHAR DebugActive;
    UCHAR DpcActive;
    LONG Lock;
    LONG LockNV;
    LONG SignalState;
    struct _LIST_ENTRY WaitListHead;
};

typedef struct _DMA_ADAPTER {
    USHORT Version;
    USHORT Size;
    struct _DMA_OPERATIONS *DmaOperations;
};

typedef struct _DMA_ADAPTER_INFO {
    ULONG Version;
    struct _DMA_ADAPTER_INFO_V1 V1;
};

typedef struct _DMA_ADAPTER_INFO_V1 {
    ULONG ReadDmaCounterAvailable;
    ULONG ScatterGatherLimit;
    ULONG DmaAddressWidth;
    ULONG Flags;
    ULONG MinimumTransferUnit;
};

typedef struct _DMA_FUNCTION_TABLE {
    PVOID InitializeController;
    PUCHAR ValidateRequestLineBinding;
    PULONG QueryMaxFragments;
    PVOID ProgramChannel;
    PLONG ConfigureChannel;
    PVOID FlushChannel;
    PUCHAR HandleInterrupt;
    PULONG ReadDmaCounter;
    PVOID ReportCommonBuffer;
    PUCHAR CancelTransfer;
};

typedef struct _DMA_OPERATIONS {
    ULONG Size;
    PVOID PutDmaAdapter;
    PVOID *AllocateCommonBuffer;
    PVOID FreeCommonBuffer;
    PLONG AllocateAdapterChannel;
    PUCHAR FlushAdapterBuffers;
    PVOID FreeAdapterChannel;
    PVOID FreeMapRegisters;
    union _LARGE_INTEGER *MapTransfer;
    PULONG GetDmaAlignment;
    PULONG ReadDmaCounter;
    PLONG GetScatterGatherList;
    PVOID PutScatterGatherList;
    PLONG CalculateScatterGatherList;
    PLONG BuildScatterGatherList;
    PLONG BuildMdlFromScatterGatherList;
    PLONG GetDmaAdapterInfo;
    PLONG GetDmaTransferInfo;
    PLONG InitializeDmaTransferContext;
    PVOID *AllocateCommonBufferEx;
    PLONG AllocateAdapterChannelEx;
    PLONG ConfigureAdapterChannel;
    PUCHAR CancelAdapterChannel;
    PLONG MapTransferEx;
    PLONG GetScatterGatherListEx;
    PLONG BuildScatterGatherListEx;
    PLONG FlushAdapterBuffersEx;
    PVOID FreeAdapterObject;
    PLONG CancelMappedTransfer;
};

typedef struct _DMA_REQUEST_LINE_BINDING_DESCRIPTION {
    ULONG RequestLine;
    ULONG ChannelNumber;
};

typedef struct _DMA_SCATTER_GATHER_LIST {
    ULONG NumberOfElements;
    ULONG Reserved;
    struct _SCATTER_GATHER_ELEMENT Elements[0];
};

typedef struct _DMA_TRANSFER_CONTEXT {
    ULONG Version;
    struct _DMA_TRANSFER_CONTEXT_V1 V1;
};

typedef struct _DMA_TRANSFER_CONTEXT_V1 {
    LONG DmaState;
    ULONG TransferState;
    struct _WAIT_CONTEXT_BLOCK Wcb;
    PVOID HalWcb;
};

typedef struct _DMA_TRANSFER_INFO {
    ULONG Version;
    struct _DMA_TRANSFER_INFO_V1 V1;
};

typedef struct _DMA_TRANSFER_INFO_V1 {
    ULONG MapRegisterCount;
    ULONG ScatterGatherElementCount;
    ULONG ScatterGatherListSize;
};

typedef struct _DRIVER_EXTENSION {
    struct _DRIVER_OBJECT *DriverObject;
    PLONG AddDevice;
    ULONG Count;
    struct _UNICODE_STRING ServiceKeyName;
};

typedef struct _DRIVER_OBJECT {
    SHORT Type;
    SHORT Size;
    struct _DEVICE_OBJECT *DeviceObject;
    ULONG Flags;
    PVOID DriverStart;
    ULONG DriverSize;
    PVOID DriverSection;
    struct _DRIVER_EXTENSION *DriverExtension;
    struct _UNICODE_STRING DriverName;
    struct _UNICODE_STRING *HardwareDatabase;
    struct _FAST_IO_DISPATCH *FastIoDispatch;
    PLONG DriverInit;
    PVOID DriverStartIo;
    PVOID DriverUnload;
    PLONG MajorFunction[28];
};

typedef struct _ECP_LIST {
};

typedef struct _EPROCESS {
};

typedef struct _ERESOURCE {
    struct _LIST_ENTRY SystemResourcesList;
    struct _OWNER_ENTRY *OwnerTable;
    SHORT ActiveCount;
    USHORT Flag;
    UCHAR ReservedLowFlags;
    UCHAR WaiterPriority;
    struct _KSEMAPHORE *SharedWaiters;
    struct _KEVENT *ExclusiveWaiters;
    struct _OWNER_ENTRY OwnerEntry;
    ULONG ActiveEntries;
    ULONG ContentionCount;
    ULONG NumberOfSharedWaiters;
    ULONG NumberOfExclusiveWaiters;
    PVOID Address;
    ULONG CreatorBackTraceIndex;
    ULONG SpinLock;
};

typedef struct _ETHREAD {
};

typedef struct _EVENT_DATA_DESCRIPTOR {
    ULONG64 Ptr;
    ULONG Size;
    ULONG Reserved;
};

typedef struct _EVENT_DESCRIPTOR {
    USHORT Id;
    UCHAR Version;
    UCHAR Channel;
    UCHAR Level;
    UCHAR Opcode;
    USHORT Task;
    ULONG64 Keyword;
};

typedef struct _EXCEPTION_RECORD {
    LONG ExceptionCode;
    ULONG ExceptionFlags;
    struct _EXCEPTION_RECORD *ExceptionRecord;
    PVOID ExceptionAddress;
    ULONG NumberParameters;
    ULONG ExceptionInformation[15];
};

typedef struct _EXCEPTION_REGISTRATION_RECORD {
    struct _EXCEPTION_REGISTRATION_RECORD *Next;
    enum _EXCEPTION_DISPOSITION *Handler;
};

typedef struct _FACS {
    ULONG Signature;
    ULONG Length;
    ULONG HardwareSignature;
    ULONG pFirmwareWakingVector;
    ULONG GlobalLock;
    ULONG Flags;
    union _LARGE_INTEGER x_FirmwareWakingVector;
    UCHAR version;
    UCHAR Reserved[31];
};

typedef struct _FADT {
    struct _DESCRIPTION_HEADER Header;
    ULONG facs;
    ULONG dsdt;
    UCHAR int_model;
    UCHAR pm_profile;
    USHORT sci_int_vector;
    ULONG smi_cmd_io_port;
    UCHAR acpi_on_value;
    UCHAR acpi_off_value;
    UCHAR s4bios_req;
    UCHAR pstate_control;
    ULONG pm1a_evt_blk_io_port;
    ULONG pm1b_evt_blk_io_port;
    ULONG pm1a_ctrl_blk_io_port;
    ULONG pm1b_ctrl_blk_io_port;
    ULONG pm2_ctrl_blk_io_port;
    ULONG pm_tmr_blk_io_port;
    ULONG gp0_blk_io_port;
    ULONG gp1_blk_io_port;
    UCHAR pm1_evt_len;
    UCHAR pm1_ctrl_len;
    UCHAR pm2_ctrl_len;
    UCHAR pm_tmr_len;
    UCHAR gp0_blk_len;
    UCHAR gp1_blk_len;
    UCHAR gp1_base;
    UCHAR cstate_control;
    USHORT lvl2_latency;
    USHORT lvl3_latency;
    USHORT flush_size;
    USHORT flush_stride;
    UCHAR duty_offset;
    UCHAR duty_width;
    UCHAR day_alarm_index;
    UCHAR month_alarm_index;
    UCHAR century_alarm_index;
    USHORT boot_arch;
    UCHAR reserved3[1];
    ULONG flags;
    struct _GEN_ADDR reset_reg;
    UCHAR reset_val;
    UCHAR reserved4[3];
    union _LARGE_INTEGER x_firmware_ctrl;
    union _LARGE_INTEGER x_dsdt;
    struct _GEN_ADDR x_pm1a_evt_blk;
    struct _GEN_ADDR x_pm1b_evt_blk;
    struct _GEN_ADDR x_pm1a_ctrl_blk;
    struct _GEN_ADDR x_pm1b_ctrl_blk;
    struct _GEN_ADDR x_pm2_ctrl_blk;
    struct _GEN_ADDR x_pm_tmr_blk;
    struct _GEN_ADDR x_gp0_blk;
    struct _GEN_ADDR x_gp1_blk;
    struct _GEN_ADDR sleep_control_reg;
    struct _GEN_ADDR sleep_status_reg;
};

typedef struct _FAST_IO_DISPATCH {
    ULONG SizeOfFastIoDispatch;
    PUCHAR FastIoCheckIfPossible;
    PUCHAR FastIoRead;
    PUCHAR FastIoWrite;
    PUCHAR FastIoQueryBasicInfo;
    PUCHAR FastIoQueryStandardInfo;
    PUCHAR FastIoLock;
    PUCHAR FastIoUnlockSingle;
    PUCHAR FastIoUnlockAll;
    PUCHAR FastIoUnlockAllByKey;
    PUCHAR FastIoDeviceControl;
    PVOID AcquireFileForNtCreateSection;
    PVOID ReleaseFileForNtCreateSection;
    PVOID FastIoDetachDevice;
    PUCHAR FastIoQueryNetworkOpenInfo;
    PLONG AcquireForModWrite;
    PUCHAR MdlRead;
    PUCHAR MdlReadComplete;
    PUCHAR PrepareMdlWrite;
    PUCHAR MdlWriteComplete;
    PUCHAR FastIoReadCompressed;
    PUCHAR FastIoWriteCompressed;
    PUCHAR MdlReadCompleteCompressed;
    PUCHAR MdlWriteCompleteCompressed;
    PUCHAR FastIoQueryOpen;
    PLONG ReleaseForModWrite;
    PLONG AcquireForCcFlush;
    PLONG ReleaseForCcFlush;
};

typedef struct _FAST_MUTEX {
    LONG Count;
    PVOID Owner;
    ULONG Contention;
    struct _KEVENT Event;
    ULONG OldIrql;
};

typedef struct _FILE_BASIC_INFORMATION {
    union _LARGE_INTEGER CreationTime;
    union _LARGE_INTEGER LastAccessTime;
    union _LARGE_INTEGER LastWriteTime;
    union _LARGE_INTEGER ChangeTime;
    ULONG FileAttributes;
};

typedef struct _FILE_GET_QUOTA_INFORMATION {
};

typedef struct _FILE_NETWORK_OPEN_INFORMATION {
    union _LARGE_INTEGER CreationTime;
    union _LARGE_INTEGER LastAccessTime;
    union _LARGE_INTEGER LastWriteTime;
    union _LARGE_INTEGER ChangeTime;
    union _LARGE_INTEGER AllocationSize;
    union _LARGE_INTEGER EndOfFile;
    ULONG FileAttributes;
};

typedef struct _FILE_OBJECT {
    SHORT Type;
    SHORT Size;
    struct _DEVICE_OBJECT *DeviceObject;
    struct _VPB *Vpb;
    PVOID FsContext;
    PVOID FsContext2;
    struct _SECTION_OBJECT_POINTERS *SectionObjectPointer;
    PVOID PrivateCacheMap;
    LONG FinalStatus;
    struct _FILE_OBJECT *RelatedFileObject;
    UCHAR LockOperation;
    UCHAR DeletePending;
    UCHAR ReadAccess;
    UCHAR WriteAccess;
    UCHAR DeleteAccess;
    UCHAR SharedRead;
    UCHAR SharedWrite;
    UCHAR SharedDelete;
    ULONG Flags;
    struct _UNICODE_STRING FileName;
    union _LARGE_INTEGER CurrentByteOffset;
    ULONG Waiters;
    ULONG Busy;
    PVOID LastLock;
    struct _KEVENT Lock;
    struct _KEVENT Event;
    struct _IO_COMPLETION_CONTEXT *CompletionContext;
    ULONG IrpListLock;
    struct _LIST_ENTRY IrpList;
    PVOID FileObjectExtension;
};

typedef struct _FILE_STANDARD_INFORMATION {
    union _LARGE_INTEGER AllocationSize;
    union _LARGE_INTEGER EndOfFile;
    ULONG NumberOfLinks;
    UCHAR DeletePending;
    UCHAR Directory;
};

typedef struct _FLOATING_SAVE_AREA {
    ULONG ControlWord;
    ULONG StatusWord;
    ULONG TagWord;
    ULONG ErrorOffset;
    ULONG ErrorSelector;
    ULONG DataOffset;
    ULONG DataSelector;
    UCHAR RegisterArea[80];
    ULONG Cr0NpxState;
};

typedef struct _GENERAL_LOOKASIDE {
    union _SLIST_HEADER ListHead;
    struct _SINGLE_LIST_ENTRY SingleListHead;
    USHORT Depth;
    USHORT MaximumDepth;
    ULONG TotalAllocates;
    ULONG AllocateMisses;
    ULONG AllocateHits;
    ULONG TotalFrees;
    ULONG FreeMisses;
    ULONG FreeHits;
    enum _POOL_TYPE Type;
    ULONG Tag;
    ULONG Size;
    PVOID *AllocateEx;
    PVOID *Allocate;
    PVOID FreeEx;
    PVOID Free;
    struct _LIST_ENTRY ListEntry;
    ULONG LastTotalAllocates;
    ULONG LastAllocateMisses;
    ULONG LastAllocateHits;
    ULONG Future[2];
};

typedef struct _GENERAL_LOOKASIDE_POOL {
    union _SLIST_HEADER ListHead;
    struct _SINGLE_LIST_ENTRY SingleListHead;
    USHORT Depth;
    USHORT MaximumDepth;
    ULONG TotalAllocates;
    ULONG AllocateMisses;
    ULONG AllocateHits;
    ULONG TotalFrees;
    ULONG FreeMisses;
    ULONG FreeHits;
    enum _POOL_TYPE Type;
    ULONG Tag;
    ULONG Size;
    PVOID *AllocateEx;
    PVOID *Allocate;
    PVOID FreeEx;
    PVOID Free;
    struct _LIST_ENTRY ListEntry;
    ULONG LastTotalAllocates;
    ULONG LastAllocateMisses;
    ULONG LastAllocateHits;
    ULONG Future[2];
};

typedef struct _GEN_ADDR {
    UCHAR AddressSpaceID;
    UCHAR BitWidth;
    UCHAR BitOffset;
    UCHAR AccessSize;
    union _LARGE_INTEGER Address;
};

typedef struct _GROUP_AFFINITY {
    ULONG Mask;
    USHORT Group;
    USHORT Reserved[3];
};

typedef struct _GUID {
    ULONG Data1;
    USHORT Data2;
    USHORT Data3;
    UCHAR Data4[8];
};

typedef struct _HALP_ALLOC_CONTEXT {
    struct _LIST_ENTRY BufferList;
    ULONG Lock;
};

typedef struct _HALP_DMA_ADAPTER_OBJECT {
    struct _DMA_ADAPTER DmaHeader;
    struct _RTL_BITMAP *ContiguousMapRegisters;
    struct _HALP_DMA_TRANSLATION_ENTRY *ScatterBufferListHead;
    ULONG NumberOfFreeScatterBuffers;
    struct _HALP_DMA_TRANSLATION_BUFFER *ContiguousTranslations;
    struct _HALP_DMA_TRANSLATION_BUFFER *ScatterTranslations;
    struct _HALP_DMA_TRANSLATION_BUFFER_POSITION ContiguousTranslationEnd;
    struct _HALP_DMA_TRANSLATION_BUFFER_POSITION ScatterTranslationEnd;
    struct {
        struct _HALP_DMA_TRANSLATION_BUFFER_POSITION ContiguousHint;
        struct _HALP_DMA_TRANSLATION_BUFFER_POSITION ScatterHint;
    } CrashDump;
    ULONG SpinLock;
    ULONG GrowLock;
    union _LARGE_INTEGER MaximumPhysicalAddress;
    UCHAR IsMasterAdapter;
    UCHAR DmaCanCross64K;
};

typedef struct _HALP_DMA_CHANNEL {
    ULONG ChannelNumber;
    UCHAR Initialized;
    UCHAR Busy;
    UCHAR Complete;
    PVOID CurrentCompletionRoutine;
    PVOID CurrentCompletionContext;
    struct _ADAPTER_OBJECT *CurrentChildAdapter;
    enum _DMA_INTERRUPT_TYPE CurrentInterruptType;
    struct _KDPC Dpc;
    UCHAR GeneratesInterrupt;
    LONG Gsi;
    enum _KINTERRUPT_POLARITY InterruptPolarity;
    enum _KINTERRUPT_MODE InterruptMode;
    ULONG CommonBufferLength;
    PVOID CommonBufferVirtualAddress;
    union _LARGE_INTEGER CommonBufferLogicalAddress;
    struct _LIST_ENTRY AdapterQueue;
};

typedef struct _HALP_DMA_CONTROLLER {
    struct _LIST_ENTRY Controllers;
    struct _LIST_ENTRY AdapterList;
    ULONG ControllerId;
    ULONG MinimumRequestLine;
    ULONG MaximumRequestLine;
    ULONG ChannelCount;
    ULONG ScatterGatherLimit;
    struct _HALP_DMA_CHANNEL *Channels;
    PVOID ExtensionData;
    UCHAR CacheCoherent;
    ULONG DmaAddressWidth;
    struct _DMA_FUNCTION_TABLE Operations;
    ULONG SupportedPortWidths;
    ULONG MinimumTransferUnit;
    ULONG Lock;
    UCHAR Irql;
    UCHAR GeneratesInterrupt;
    LONG Gsi;
    enum _KINTERRUPT_POLARITY InterruptPolarity;
    enum _KINTERRUPT_MODE InterruptMode;
    struct _UNICODE_STRING ResourceId;
    struct POHANDLE__ *PowerHandle;
    UCHAR PowerActive;
};

typedef struct _HALP_DMA_MASTER_ADAPTER_OBJECT {
    struct _HALP_DMA_ADAPTER_OBJECT AdapterObject;
    struct _LIST_ENTRY ContiguousAdapterQueue;
    struct _LIST_ENTRY ScatterAdapterQueue;
    ULONG MapBufferSize;
    union _LARGE_INTEGER MapBufferPhysicalAddress;
    ULONG ContiguousPageCount;
    ULONG ContiguousPageLimit;
    ULONG ScatterPageCount;
    ULONG ScatterPageLimit;
};

typedef struct _HALP_DMA_TRANSLATION_BUFFER {
    struct _HALP_DMA_TRANSLATION_BUFFER *Next;
    ULONG EntryCount;
    struct _HALP_DMA_TRANSLATION_ENTRY *Entries;
};

typedef struct _HALP_DMA_TRANSLATION_BUFFER_POSITION {
    struct _HALP_DMA_TRANSLATION_BUFFER *Buffer;
    ULONG Offset;
};

typedef struct _HALP_DMA_TRANSLATION_ENTRY {
    ULONG PhysicalAddress;
    struct _HALP_DMA_TRANSLATION_ENTRY *Next;
    ULONG MappedLength;
    union {
        PVOID VirtualAddress;
        struct {
            ULONG BoundToMaster : 1;
            ULONG BoundToScatterPool : 1;
            ULONG OwnedByMaster : 1;
            ULONG OwnedByScatterPool : 1;
            ULONG TemporaryMapping : 1;
            ULONG Address : 27;
        } Flags;
    } u;
    struct _HALP_DMA_TRANSLATION_ENTRY *NextMapping;
};

typedef struct _HAL_ENLIGHTENMENT_INFORMATION {
    ULONG Enlightenments;
    ULONG HypervisorConnected;
    PVOID EndOfInterrupt;
    PVOID ApicWriteIcr;
    ULONG Reserved0;
    ULONG SpinCountMask;
    PVOID LongSpinWait;
    PULONG64 GetReferenceTime;
    PLONG SetSystemSleepProperty;
    PLONG EnterSleepState;
    PLONG NotifyDebugDeviceAvailable;
    PLONG MapDeviceInterrupt;
    PLONG UnmapDeviceInterrupt;
    PLONG SetHpetConfig;
    PLONG NotifyHpetEnabled;
    PLONG QueryAssociatedProcessors;
    PLONG ReadMultipleMsr;
    PLONG WriteMultipleMsr;
    PLONG ReadCpuid;
    PLONG LpWritebackInvalidate;
    PLONG GetMachineCheckContext;
    PLONG SuspendPartition;
    PLONG ResumePartition;
    PLONG SetSystemMachineCheckProperty;
    PLONG WheaErrorNotification;
};

typedef struct _HARDWARE_PTE_X86 {
    ULONG Valid : 1;
    ULONG Write : 1;
    ULONG Owner : 1;
    ULONG WriteThrough : 1;
    ULONG CacheDisable : 1;
    ULONG Accessed : 1;
    ULONG Dirty : 1;
    ULONG LargePage : 1;
    ULONG Global : 1;
    ULONG CopyOnWrite : 1;
    ULONG Prototype : 1;
    ULONG reserved : 1;
    ULONG PageFrameNumber : 20;
};

typedef struct _HARDWARE_PTE_X86PAE {
    ULONG64 Valid : 1;
    ULONG64 Write : 1;
    ULONG64 Owner : 1;
    ULONG64 WriteThrough : 1;
    ULONG64 CacheDisable : 1;
    ULONG64 Accessed : 1;
    ULONG64 Dirty : 1;
    ULONG64 LargePage : 1;
    ULONG64 Global : 1;
    ULONG64 CopyOnWrite : 1;
    ULONG64 Prototype : 1;
    ULONG64 reserved0 : 1;
    ULONG64 PageFrameNumber : 26;
    ULONG64 reserved1 : 26;
    ULONG LowPart;
    ULONG HighPart;
};

typedef struct _INITIAL_PRIVILEGE_SET {
    ULONG PrivilegeCount;
    ULONG Control;
    struct _LUID_AND_ATTRIBUTES Privilege[3];
};

typedef struct _INTERFACE {
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PVOID InterfaceReference;
    PVOID InterfaceDereference;
};

typedef struct _INTERRUPT_FUNCTION_TABLE {
    PLONG InitializeLocalUnit;
    PLONG InitializeIoUnit;
    PVOID SetPriority;
    PULONG GetLocalUnitError;
    PVOID ClearLocalUnitError;
    PLONG GetLogicalId;
    PLONG SetLogicalId;
    enum _INTERRUPT_RESULT *AcceptAndGetSource;
    PVOID EndOfInterrupt;
    PVOID FastEndOfInterrupt;
    PLONG SetLineState;
    PLONG RequestInterrupt;
    PLONG StartProcessor;
    PLONG GenerateMessage;
    PLONG ConvertId;
    PLONG SaveLocalInterrupts;
    PLONG ReplayLocalInterrupts;
    PLONG DeinitializeLocalUnit;
    PLONG DeinitializeIoUnit;
    enum _INTERRUPT_RESULT *QueryAndGetSource;
};

typedef struct _INTERRUPT_LINE {
    ULONG UnitId;
    LONG Line;
};

typedef struct _INTERRUPT_LINE_STATE {
    enum _KINTERRUPT_POLARITY Polarity;
    enum _KINTERRUPT_MODE TriggerMode;
    ULONG Flags;
    struct _INTERRUPT_LINE Routing;
    struct _INTERRUPT_TARGET ProcessorTarget;
    ULONG Vector;
    ULONG Priority;
};

typedef struct _INTERRUPT_TARGET {
    enum _INTERRUPT_TARGET_TYPE Target;
    ULONG PhysicalTarget;
    ULONG LogicalFlatTarget;
    ULONG RemapIndex;
    ULONG ClusterId;
    ULONG ClusterMask;
    struct {
        ULONG Low32;
        ULONG High32;
    } HypervisorTarget;
};

typedef struct _IOAPIC {
    UCHAR Type;
    UCHAR Length;
    UCHAR IOAPICID;
    UCHAR Reserved;
    ULONG IOAPICAddress;
    ULONG SystemVectorBase;
};

typedef struct _IOSAPIC {
    UCHAR Type;
    UCHAR Length;
    UCHAR IOSAPICID;
    UCHAR Reserved;
    ULONG SystemVectorBase;
    ULONG IOSAPICAddress;
};

typedef struct _IO_COMPLETION_CONTEXT {
    PVOID Port;
    PVOID Key;
};

typedef struct _IO_DRIVER_CREATE_CONTEXT {
    SHORT Size;
    struct _ECP_LIST *ExtraCreateParameter;
    PVOID DeviceObjectHint;
    struct _TXN_PARAMETER_BLOCK *TxnParameters;
};

typedef struct _IO_NMISOURCE {
    UCHAR Type;
    UCHAR Length;
    USHORT Flags;
    ULONG GlobalSystemInterruptVector;
};

typedef struct _IO_RESOURCE_DESCRIPTOR {
    UCHAR Option;
    UCHAR Type;
    UCHAR ShareDisposition;
    UCHAR Spare1;
    USHORT Flags;
    USHORT Spare2;
    union {
        struct {
            ULONG Length;
            ULONG Alignment;
            union _LARGE_INTEGER MinimumAddress;
            union _LARGE_INTEGER MaximumAddress;
        } Port;
        struct {
            ULONG Length;
            ULONG Alignment;
            union _LARGE_INTEGER MinimumAddress;
            union _LARGE_INTEGER MaximumAddress;
        } Memory;
        struct {
            ULONG MinimumVector;
            ULONG MaximumVector;
            USHORT AffinityPolicy;
            USHORT Group;
            enum _IRQ_PRIORITY PriorityPolicy;
            ULONG TargetedProcessors;
        } Interrupt;
        struct {
            ULONG MinimumChannel;
            ULONG MaximumChannel;
        } Dma;
        struct {
            ULONG RequestLine;
            ULONG Reserved;
            ULONG Channel;
            ULONG TransferWidth;
        } DmaV3;
        struct {
            ULONG Length;
            ULONG Alignment;
            union _LARGE_INTEGER MinimumAddress;
            union _LARGE_INTEGER MaximumAddress;
        } Generic;
        struct {
            ULONG Data[3];
        } DevicePrivate;
        struct {
            ULONG Length;
            ULONG MinBusNumber;
            ULONG MaxBusNumber;
            ULONG Reserved;
        } BusNumber;
        struct {
            ULONG Priority;
            ULONG Reserved1;
            ULONG Reserved2;
        } ConfigData;
        struct {
            ULONG Length40;
            ULONG Alignment40;
            union _LARGE_INTEGER MinimumAddress;
            union _LARGE_INTEGER MaximumAddress;
        } Memory40;
        struct {
            ULONG Length48;
            ULONG Alignment48;
            union _LARGE_INTEGER MinimumAddress;
            union _LARGE_INTEGER MaximumAddress;
        } Memory48;
        struct {
            ULONG Length64;
            ULONG Alignment64;
            union _LARGE_INTEGER MinimumAddress;
            union _LARGE_INTEGER MaximumAddress;
        } Memory64;
        struct {
            UCHAR Class;
            UCHAR Type;
            UCHAR Reserved1;
            UCHAR Reserved2;
            ULONG IdLowPart;
            ULONG IdHighPart;
        } Connection;
    } u;
};

typedef struct _IO_RESOURCE_LIST {
    USHORT Version;
    USHORT Revision;
    ULONG Count;
    struct _IO_RESOURCE_DESCRIPTOR Descriptors[1];
};

typedef struct _IO_RESOURCE_REQUIREMENTS_LIST {
    ULONG ListSize;
    enum _INTERFACE_TYPE InterfaceType;
    ULONG BusNumber;
    ULONG SlotNumber;
    ULONG Reserved[3];
    ULONG AlternativeLists;
    struct _IO_RESOURCE_LIST List[1];
};

typedef struct _IO_SECURITY_CONTEXT {
    struct _SECURITY_QUALITY_OF_SERVICE *SecurityQos;
    struct _ACCESS_STATE *AccessState;
    ULONG DesiredAccess;
    ULONG FullCreateOptions;
};

typedef struct _IO_STACK_LOCATION {
    UCHAR MajorFunction;
    UCHAR MinorFunction;
    UCHAR Flags;
    UCHAR Control;
    union {
        struct {
            struct _IO_SECURITY_CONTEXT *SecurityContext;
            ULONG Options;
            USHORT FileAttributes;
            USHORT ShareAccess;
            ULONG EaLength;
        } Create;
        struct {
            struct _IO_SECURITY_CONTEXT *SecurityContext;
            ULONG Options;
            USHORT Reserved;
            USHORT ShareAccess;
            struct _NAMED_PIPE_CREATE_PARAMETERS *Parameters;
        } CreatePipe;
        struct {
            struct _IO_SECURITY_CONTEXT *SecurityContext;
            ULONG Options;
            USHORT Reserved;
            USHORT ShareAccess;
            struct _MAILSLOT_CREATE_PARAMETERS *Parameters;
        } CreateMailslot;
        struct {
            ULONG Length;
            ULONG Key;
            union _LARGE_INTEGER ByteOffset;
        } Read;
        struct {
            ULONG Length;
            ULONG Key;
            union _LARGE_INTEGER ByteOffset;
        } Write;
        struct {
            ULONG Length;
            struct _UNICODE_STRING *FileName;
            enum _FILE_INFORMATION_CLASS FileInformationClass;
            ULONG FileIndex;
        } QueryDirectory;
        struct {
            ULONG Length;
            ULONG CompletionFilter;
        } NotifyDirectory;
        struct {
            ULONG Length;
            enum _FILE_INFORMATION_CLASS FileInformationClass;
        } QueryFile;
        struct {
            ULONG Length;
            enum _FILE_INFORMATION_CLASS FileInformationClass;
            struct _FILE_OBJECT *FileObject;
            UCHAR ReplaceIfExists;
            UCHAR AdvanceOnly;
            ULONG ClusterCount;
            PVOID DeleteHandle;
        } SetFile;
        struct {
            ULONG Length;
            PVOID EaList;
            ULONG EaListLength;
            ULONG EaIndex;
        } QueryEa;
        struct {
            ULONG Length;
        } SetEa;
        struct {
            ULONG Length;
            enum _FSINFOCLASS FsInformationClass;
        } QueryVolume;
        struct {
            ULONG Length;
            enum _FSINFOCLASS FsInformationClass;
        } SetVolume;
        struct {
            ULONG OutputBufferLength;
            ULONG InputBufferLength;
            ULONG FsControlCode;
            PVOID Type3InputBuffer;
        } FileSystemControl;
        struct {
            union _LARGE_INTEGER *Length;
            ULONG Key;
            union _LARGE_INTEGER ByteOffset;
        } LockControl;
        struct {
            ULONG OutputBufferLength;
            ULONG InputBufferLength;
            ULONG IoControlCode;
            PVOID Type3InputBuffer;
        } DeviceIoControl;
        struct {
            ULONG SecurityInformation;
            ULONG Length;
        } QuerySecurity;
        struct {
            ULONG SecurityInformation;
            PVOID SecurityDescriptor;
        } SetSecurity;
        struct {
            struct _VPB *Vpb;
            struct _DEVICE_OBJECT *DeviceObject;
        } MountVolume;
        struct {
            struct _VPB *Vpb;
            struct _DEVICE_OBJECT *DeviceObject;
        } VerifyVolume;
        struct {
            struct _SCSI_REQUEST_BLOCK *Srb;
        } Scsi;
        struct {
            ULONG Length;
            PVOID StartSid;
            struct _FILE_GET_QUOTA_INFORMATION *SidList;
            ULONG SidListLength;
        } QueryQuota;
        struct {
            ULONG Length;
        } SetQuota;
        struct {
            enum _DEVICE_RELATION_TYPE Type;
        } QueryDeviceRelations;
        struct {
            struct _GUID *InterfaceType;
            USHORT Size;
            USHORT Version;
            struct _INTERFACE *Interface;
            PVOID InterfaceSpecificData;
        } QueryInterface;
        struct {
            struct _DEVICE_CAPABILITIES *Capabilities;
        } DeviceCapabilities;
        struct {
            struct _IO_RESOURCE_REQUIREMENTS_LIST *IoResourceRequirementList;
        } FilterResourceRequirements;
        struct {
            ULONG WhichSpace;
            PVOID Buffer;
            ULONG Offset;
            ULONG Length;
        } ReadWriteConfig;
        struct {
            UCHAR Lock;
        } SetLock;
        struct {
            enum BUS_QUERY_ID_TYPE IdType;
        } QueryId;
        struct {
            enum DEVICE_TEXT_TYPE DeviceTextType;
            ULONG LocaleId;
        } QueryDeviceText;
        struct {
            UCHAR InPath;
            UCHAR Reserved[3];
            enum _DEVICE_USAGE_NOTIFICATION_TYPE Type;
        } UsageNotification;
        struct {
            enum _SYSTEM_POWER_STATE PowerState;
        } WaitWake;
        struct {
            struct _POWER_SEQUENCE *PowerSequence;
        } PowerSequence;
        struct {
            ULONG SystemContext;
            struct _SYSTEM_POWER_STATE_CONTEXT SystemPowerStateContext;
            enum _POWER_STATE_TYPE Type;
            union _POWER_STATE State;
            enum POWER_ACTION ShutdownType;
        } Power;
        struct {
            struct _CM_RESOURCE_LIST *AllocatedResources;
            struct _CM_RESOURCE_LIST *AllocatedResourcesTranslated;
        } StartDevice;
        struct {
            ULONG ProviderId;
            PVOID DataPath;
            ULONG BufferSize;
            PVOID Buffer;
        } WMI;
        struct {
            PVOID Argument1;
            PVOID Argument2;
            PVOID Argument3;
            PVOID Argument4;
        } Others;
    } Parameters;
    struct _DEVICE_OBJECT *DeviceObject;
    struct _FILE_OBJECT *FileObject;
    PLONG CompletionRoutine;
    PVOID Context;
};

typedef struct _IO_STATUS_BLOCK {
    LONG Status;
    PVOID Pointer;
    ULONG Information;
};

typedef struct _IO_TIMER {
};

typedef struct _IRP {
    SHORT Type;
    USHORT Size;
    struct _MDL *MdlAddress;
    ULONG Flags;
    union {
        struct _IRP *MasterIrp;
        LONG IrpCount;
        PVOID SystemBuffer;
    } AssociatedIrp;
    struct _LIST_ENTRY ThreadListEntry;
    struct _IO_STATUS_BLOCK IoStatus;
    CHAR RequestorMode;
    UCHAR PendingReturned;
    CHAR StackCount;
    CHAR CurrentLocation;
    UCHAR Cancel;
    UCHAR CancelIrql;
    CHAR ApcEnvironment;
    UCHAR AllocationFlags;
    struct _IO_STATUS_BLOCK *UserIosb;
    struct _KEVENT *UserEvent;
    union {
        struct {
            PVOID UserApcRoutine;
            PVOID IssuingProcess;
            PVOID UserApcContext;
        } AsynchronousParameters;
        union _LARGE_INTEGER AllocationSize;
    } Overlay;
    PVOID CancelRoutine;
    PVOID UserBuffer;
    union {
        struct {
            struct _KDEVICE_QUEUE_ENTRY DeviceQueueEntry;
            PVOID DriverContext[4];
            struct _ETHREAD *Thread;
            PCHAR AuxiliaryBuffer;
            struct _LIST_ENTRY ListEntry;
            struct _IO_STACK_LOCATION *CurrentStackLocation;
            ULONG PacketType;
            struct _FILE_OBJECT *OriginalFileObject;
        } Overlay;
        struct _KAPC Apc;
        PVOID CompletionKey;
    } Tail;
};

typedef struct _ISA_VECTOR {
    UCHAR Type;
    UCHAR Length;
    UCHAR Bus;
    UCHAR Source;
    ULONG GlobalSystemInterruptVector;
    USHORT Flags;
};

typedef struct _KAPC {
    UCHAR Type;
    UCHAR SpareByte0;
    UCHAR Size;
    UCHAR SpareByte1;
    ULONG SpareLong0;
    struct _KTHREAD *Thread;
    struct _LIST_ENTRY ApcListEntry;
    PVOID Reserved[3];
    PVOID NormalContext;
    PVOID SystemArgument1;
    PVOID SystemArgument2;
    CHAR ApcStateIndex;
    CHAR ApcMode;
    UCHAR Inserted;
};

typedef struct _KDEVICE_QUEUE {
    SHORT Type;
    SHORT Size;
    struct _LIST_ENTRY DeviceListHead;
    ULONG Lock;
    UCHAR Busy;
};

typedef struct _KDEVICE_QUEUE_ENTRY {
    struct _LIST_ENTRY DeviceListEntry;
    ULONG SortKey;
    UCHAR Inserted;
};

typedef struct _KDPC {
    UCHAR Type;
    UCHAR Importance;
    USHORT Number;
    struct _LIST_ENTRY DpcListEntry;
    PVOID DeferredRoutine;
    PVOID DeferredContext;
    PVOID SystemArgument1;
    PVOID SystemArgument2;
    PVOID DpcData;
};

typedef struct _KEVENT {
    struct _DISPATCHER_HEADER Header;
};

typedef struct _KGDTENTRY {
    USHORT LimitLow;
    USHORT BaseLow;
    union {
        struct {
            UCHAR BaseMid;
            UCHAR Flags1;
            UCHAR Flags2;
            UCHAR BaseHi;
        } Bytes;
        struct {
            ULONG BaseMid : 8;
            ULONG Type : 5;
            ULONG Dpl : 2;
            ULONG Pres : 1;
            ULONG LimitHi : 4;
            ULONG Sys : 1;
            ULONG Reserved_0 : 1;
            ULONG Default_Big : 1;
            ULONG Granularity : 1;
            ULONG BaseHi : 8;
        } Bits;
    } HighWord;
};

typedef struct _KIDTENTRY {
    USHORT Offset;
    USHORT Selector;
    USHORT Access;
    USHORT ExtendedOffset;
};

typedef struct _KPCR {
    struct _NT_TIB NtTib;
    struct _EXCEPTION_REGISTRATION_RECORD *Used_ExceptionList;
    PVOID Used_StackBase;
    PVOID Spare2;
    PVOID TssCopy;
    ULONG ContextSwitches;
    ULONG SetMemberCopy;
    PVOID Used_Self;
    struct _KPCR *SelfPcr;
    struct _KPRCB *Prcb;
    UCHAR Irql;
    ULONG IRR;
    ULONG IrrActive;
    ULONG IDR;
    PVOID KdVersionBlock;
    struct _KIDTENTRY *IDT;
    struct _KGDTENTRY *GDT;
    struct _KTSS *TSS;
    USHORT MajorVersion;
    USHORT MinorVersion;
    ULONG SetMember;
    ULONG StallScaleFactor;
    UCHAR SpareUnused;
    UCHAR Number;
    UCHAR Spare0;
    UCHAR SecondLevelCacheAssociativity;
    ULONG VdmAlert;
    ULONG KernelReserved[14];
    ULONG SecondLevelCacheSize;
    ULONG HalReserved[16];
};

typedef struct _KPRCB {
    USHORT MinorVersion;
    USHORT MajorVersion;
    struct _KTHREAD *CurrentThread;
    struct _KTHREAD *NextThread;
    struct _KTHREAD *IdleThread;
    UCHAR LegacyNumber;
    UCHAR NestingLevel;
    USHORT BuildType;
    CHAR CpuType;
    CHAR CpuID;
    USHORT CpuStep;
    UCHAR CpuStepping;
    UCHAR CpuModel;
    struct _KPROCESSOR_STATE ProcessorState;
    ULONG KernelReserved[16];
    ULONG HalReserved[16];
    ULONG CFlushSize;
    UCHAR CoresPerPhysicalProcessor;
    UCHAR LogicalProcessorsPerCore;
    UCHAR PrcbPad0[2];
    ULONG MHz;
    UCHAR CpuVendor;
    UCHAR GroupIndex;
    USHORT Group;
    ULONG GroupSetMember;
    ULONG Number;
    UCHAR ClockOwner;
    UCHAR PendingTick;
    UCHAR PrcbPad1[70];
    struct _KSPIN_LOCK_QUEUE LockQueue[17];
};

typedef struct _KPROCESS {
};

typedef struct _KPROCESSOR_STATE {
    struct _CONTEXT ContextFrame;
    struct _KSPECIAL_REGISTERS SpecialRegisters;
};

typedef struct _KSEMAPHORE {
    struct _DISPATCHER_HEADER Header;
    LONG Limit;
};

typedef struct _KSPECIAL_REGISTERS {
    ULONG Cr0;
    ULONG Cr2;
    ULONG Cr3;
    ULONG Cr4;
    ULONG KernelDr0;
    ULONG KernelDr1;
    ULONG KernelDr2;
    ULONG KernelDr3;
    ULONG KernelDr6;
    ULONG KernelDr7;
    struct _DESCRIPTOR Gdtr;
    struct _DESCRIPTOR Idtr;
    USHORT Tr;
    USHORT Ldtr;
    ULONG64 Xcr0;
    ULONG Reserved[4];
};

typedef struct _KSPIN_LOCK_QUEUE {
    struct _KSPIN_LOCK_QUEUE *Next;
    PULONG Lock;
};

typedef struct _KSYSTEM_TIME {
    ULONG LowPart;
    LONG High1Time;
    LONG High2Time;
};

typedef struct _KTHREAD {
};

typedef struct _KTSS {
    USHORT Backlink;
    USHORT Reserved0;
    ULONG Esp0;
    USHORT Ss0;
    USHORT Reserved1;
    ULONG NotUsed1[4];
    ULONG CR3;
    ULONG Eip;
    ULONG EFlags;
    ULONG Eax;
    ULONG Ecx;
    ULONG Edx;
    ULONG Ebx;
    ULONG Esp;
    ULONG Ebp;
    ULONG Esi;
    ULONG Edi;
    USHORT Es;
    USHORT Reserved2;
    USHORT Cs;
    USHORT Reserved3;
    USHORT Ss;
    USHORT Reserved4;
    USHORT Ds;
    USHORT Reserved5;
    USHORT Fs;
    USHORT Reserved6;
    USHORT Gs;
    USHORT Reserved7;
    USHORT LDT;
    USHORT Reserved8;
    USHORT Flags;
    USHORT IoMapBase;
    struct _KiIoAccessMap IoMaps[1];
    UCHAR IntDirectionMap[32];
};

typedef struct _KUSER_SHARED_DATA {
    ULONG TickCountLowDeprecated;
    ULONG TickCountMultiplier;
    struct _KSYSTEM_TIME InterruptTime;
    struct _KSYSTEM_TIME SystemTime;
    struct _KSYSTEM_TIME TimeZoneBias;
    USHORT ImageNumberLow;
    USHORT ImageNumberHigh;
    WCHAR NtSystemRoot[260];
    ULONG MaxStackTraceDepth;
    ULONG CryptoExponent;
    ULONG TimeZoneId;
    ULONG LargePageMinimum;
    ULONG AitSamplingValue;
    ULONG AppCompatFlag;
    ULONG64 RNGSeedVersion;
    ULONG GlobalValidationRunlevel;
    LONG TimeZoneBiasStamp;
    ULONG Reserved2;
    enum _NT_PRODUCT_TYPE NtProductType;
    UCHAR ProductTypeIsValid;
    UCHAR Reserved0[1];
    USHORT NativeProcessorArchitecture;
    ULONG NtMajorVersion;
    ULONG NtMinorVersion;
    UCHAR ProcessorFeatures[64];
    ULONG Reserved1;
    ULONG Reserved3;
    ULONG TimeSlip;
    enum _ALTERNATIVE_ARCHITECTURE_TYPE AlternativeArchitecture;
    ULONG AltArchitecturePad[1];
    union _LARGE_INTEGER SystemExpirationDate;
    ULONG SuiteMask;
    UCHAR KdDebuggerEnabled;
    UCHAR MitigationPolicies;
    UCHAR NXSupportPolicy : 2;
    UCHAR SEHValidationPolicy : 2;
    UCHAR CurDirDevicesSkippedForDlls : 2;
    UCHAR Reserved : 2;
    UCHAR Reserved6[2];
    ULONG ActiveConsoleId;
    ULONG DismountCount;
    ULONG ComPlusPackage;
    ULONG LastSystemRITEventTickCount;
    ULONG NumberOfPhysicalPages;
    UCHAR SafeBootMode;
    UCHAR Reserved12[3];
    ULONG SharedDataFlags;
    ULONG DbgErrorPortPresent : 1;
    ULONG DbgElevationEnabled : 1;
    ULONG DbgVirtEnabled : 1;
    ULONG DbgInstallerDetectEnabled : 1;
    ULONG DbgLkgEnabled : 1;
    ULONG DbgDynProcessorEnabled : 1;
    ULONG DbgConsoleBrokerEnabled : 1;
    ULONG DbgSecureBootEnabled : 1;
    ULONG SpareBits : 24;
    ULONG DataFlagsPad[1];
    ULONG64 TestRetInstruction;
    LONG64 QpcFrequency;
    ULONG64 SystemCallPad[3];
    struct _KSYSTEM_TIME TickCount;
    ULONG64 TickCountQuad;
    ULONG ReservedTickCountOverlay[3];
    ULONG TickCountPad[1];
    ULONG Cookie;
    ULONG CookiePad[1];
    LONG64 ConsoleSessionForegroundProcessId;
    ULONG64 TimeUpdateSequence;
    ULONG64 BaselineSystemTimeQpc;
    ULONG64 BaselineInterruptTimeQpc;
    ULONG64 QpcSystemTimeIncrement;
    ULONG64 QpcInterruptTimeIncrement;
    ULONG QpcSystemTimeIncrement32;
    ULONG QpcInterruptTimeIncrement32;
    UCHAR QpcSystemTimeIncrementShift;
    UCHAR QpcInterruptTimeIncrementShift;
    UCHAR Reserved8[14];
    USHORT UserModeGlobalLogger[16];
    ULONG ImageFileExecutionOptions;
    ULONG LangGenerationCount;
    ULONG64 Reserved4;
    ULONG64 InterruptTimeBias;
    ULONG64 TscQpcBias;
    ULONG ActiveProcessorCount;
    UCHAR ActiveGroupCount;
    UCHAR Reserved9;
    USHORT TscQpcData;
    UCHAR TscQpcEnabled;
    UCHAR TscQpcShift;
    union _LARGE_INTEGER TimeZoneBiasEffectiveStart;
    union _LARGE_INTEGER TimeZoneBiasEffectiveEnd;
    struct _XSTATE_CONFIGURATION XState;
};

typedef struct _KiIoAccessMap {
    UCHAR DirectionMap[32];
    UCHAR IoMap[8196];
};

typedef struct _LIST_ENTRY {
    struct _LIST_ENTRY *Flink;
    struct _LIST_ENTRY *Blink;
};

typedef struct _LOCAL_NMISOURCE {
    UCHAR Type;
    UCHAR Length;
    UCHAR ProcessorID;
    USHORT Flags;
    UCHAR LINTIN;
};

typedef struct _LOOKASIDE_LIST_EX {
    struct _GENERAL_LOOKASIDE_POOL L;
};

typedef struct _LUID {
    ULONG LowPart;
    LONG HighPart;
};

typedef struct _LUID_AND_ATTRIBUTES {
    struct _LUID Luid;
    ULONG Attributes;
};

typedef struct _MAILSLOT_CREATE_PARAMETERS {
    ULONG MailslotQuota;
    ULONG MaximumMessageSize;
    union _LARGE_INTEGER ReadTimeout;
    UCHAR TimeoutSpecified;
};

typedef struct _MAPIC {
    struct _DESCRIPTION_HEADER Header;
    ULONG LocalAPICAddress;
    ULONG Flags;
    ULONG APICTables[1];
};

typedef struct _MDL {
    struct _MDL *Next;
    SHORT Size;
    SHORT MdlFlags;
    struct _EPROCESS *Process;
    PVOID MappedSystemVa;
    PVOID StartVa;
    ULONG ByteCount;
    ULONG ByteOffset;
};

typedef struct _NAMED_PIPE_CREATE_PARAMETERS {
    ULONG NamedPipeType;
    ULONG ReadMode;
    ULONG CompletionMode;
    ULONG MaximumInstances;
    ULONG InboundQuota;
    ULONG OutboundQuota;
    union _LARGE_INTEGER DefaultTimeout;
    UCHAR TimeoutSpecified;
};

typedef struct _NPAGED_LOOKASIDE_LIST {
    struct _GENERAL_LOOKASIDE L;
    ULONG Lock__ObsoleteButDoNotDelete;
};

typedef struct _NT_TIB {
    struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList;
    PVOID StackBase;
    PVOID StackLimit;
    PVOID SubSystemTib;
    PVOID FiberData;
    ULONG Version;
    PVOID ArbitraryUserPointer;
    struct _NT_TIB *Self;
};

typedef struct _OWNER_ENTRY {
    ULONG OwnerThread;
    ULONG IoPriorityBoosted : 1;
    ULONG OwnerReferenced : 1;
    ULONG OwnerCount : 30;
    ULONG TableSize;
};

typedef struct _PAGED_LOOKASIDE_LIST {
    struct _GENERAL_LOOKASIDE L;
    struct _FAST_MUTEX Lock__ObsoleteButDoNotDelete;
};

typedef struct _PLATFORM_INTERRUPT {
    UCHAR Type;
    UCHAR Length;
    USHORT Flags;
    UCHAR InterruptType;
    UCHAR APICID;
    UCHAR ACPIEID;
    UCHAR IOSAPICVector;
    ULONG GlobalVector;
    ULONG Reserved;
};

typedef struct _POWER_SEQUENCE {
    ULONG SequenceD1;
    ULONG SequenceD2;
    ULONG SequenceD3;
};

typedef struct _PRIVILEGE_SET {
    ULONG PrivilegeCount;
    ULONG Control;
    struct _LUID_AND_ATTRIBUTES Privilege[1];
};

typedef struct _PROCLOCALAPIC {
    UCHAR Type;
    UCHAR Length;
    UCHAR ACPIProcessorID;
    UCHAR APICID;
    ULONG Flags;
};

typedef struct _PROCLOCALSAPIC {
    UCHAR Type;
    UCHAR Length;
    UCHAR ACPIProcessorID;
    UCHAR APICID;
    UCHAR APICEID;
    UCHAR Reserved[3];
    ULONG Flags;
    ULONG ACPIProcessorUIDInteger;
    CHAR ACPIProcessorUIDString[1];
};

typedef struct _REGISTERED_INTERRUPT_CONTROLLER {
    struct _LIST_ENTRY ListEntry;
    PVOID InternalData;
    ULONG InternalDataSize;
    struct _INTERRUPT_FUNCTION_TABLE FunctionTable;
    enum _KNOWN_CONTROLLER_TYPE KnownType;
    ULONG Capabilities;
    ULONG Flags;
    ULONG MaxPriority;
    ULONG UnitId;
    struct _LIST_ENTRY LinesHead;
    struct _LIST_ENTRY OutputLinesHead;
    LONG MinLine;
    LONG MaxLine;
    ULONG MaxClusterSize;
    ULONG MaxClusters;
    ULONG InterruptReplayDataSize;
    enum _INTERRUPT_PROBLEM Problem;
    LONG ProblemStatus;
    PCHAR ProblemSourceFile;
    ULONG ProblemSourceLine;
    ULONG CustomProblem;
    LONG CustomProblemStatus;
    struct _UNICODE_STRING ResourceId;
    struct POHANDLE__ *PowerHandle;
};

typedef struct _RSDP {
    ULONG64 Signature;
    UCHAR Checksum;
    UCHAR OEMID[6];
    UCHAR Revision;
    ULONG RsdtAddress;
    ULONG Length;
    union _LARGE_INTEGER XsdtAddress;
    UCHAR XChecksum;
    UCHAR Reserved[3];
};

typedef struct _RSDT_32 {
    struct _DESCRIPTION_HEADER Header;
    ULONG Tables[1];
};

typedef struct _RTL_BITMAP {
    ULONG SizeOfBitMap;
    PULONG Buffer;
};

typedef struct _RTL_DYNAMIC_HASH_TABLE {
    ULONG Flags;
    ULONG Shift;
    ULONG TableSize;
    ULONG Pivot;
    ULONG DivisorMask;
    ULONG NumEntries;
    ULONG NonEmptyBuckets;
    ULONG NumEnumerators;
    PVOID Directory;
};

typedef struct _RTL_DYNAMIC_HASH_TABLE_CONTEXT {
    struct _LIST_ENTRY *ChainHead;
    struct _LIST_ENTRY *PrevLinkage;
    ULONG Signature;
};

typedef struct _RTL_DYNAMIC_HASH_TABLE_ENTRY {
    struct _LIST_ENTRY Linkage;
    ULONG Signature;
};

typedef struct _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR {
    struct _RTL_DYNAMIC_HASH_TABLE_ENTRY HashEntry;
    struct _LIST_ENTRY *ChainHead;
    ULONG BucketIndex;
};

typedef struct _RTL_QUERY_REGISTRY_TABLE {
    PLONG QueryRoutine;
    ULONG Flags;
    PUSHORT Name;
    PVOID EntryContext;
    ULONG DefaultType;
    PVOID DefaultData;
    ULONG DefaultLength;
};

typedef struct _RTL_SPLAY_LINKS {
    struct _RTL_SPLAY_LINKS *Parent;
    struct _RTL_SPLAY_LINKS *LeftChild;
    struct _RTL_SPLAY_LINKS *RightChild;
};

typedef struct _SCATTER_GATHER_ELEMENT {
    union _LARGE_INTEGER Address;
    ULONG Length;
    ULONG Reserved;
};

typedef struct _SCATTER_GATHER_LIST {
    ULONG NumberOfElements;
    ULONG Reserved;
    struct _SCATTER_GATHER_ELEMENT Elements[0];
};

typedef struct _SCSI_REQUEST_BLOCK {
};

typedef struct _SECTION_OBJECT_POINTERS {
    PVOID DataSectionObject;
    PVOID SharedCacheMap;
    PVOID ImageSectionObject;
};

typedef struct _SECURITY_QUALITY_OF_SERVICE {
    ULONG Length;
    enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;
    UCHAR ContextTrackingMode;
    UCHAR EffectiveOnly;
};

typedef struct _SECURITY_SUBJECT_CONTEXT {
    PVOID ClientToken;
    enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;
    PVOID PrimaryToken;
    PVOID ProcessAuditId;
};

typedef struct _SINGLE_LIST_ENTRY {
    struct _SINGLE_LIST_ENTRY *Next;
};

typedef struct _STRING {
    USHORT Length;
    USHORT MaximumLength;
    PCHAR Buffer;
};

typedef struct _SYSTEM_POWER_STATE_CONTEXT {
    ULONG Reserved1 : 8;
    ULONG TargetSystemState : 4;
    ULONG EffectiveSystemState : 4;
    ULONG CurrentSystemState : 4;
    ULONG IgnoreHibernationPath : 1;
    ULONG PseudoTransition : 1;
    ULONG Reserved2 : 10;
    ULONG ContextAsUlong;
};

typedef struct _TXN_PARAMETER_BLOCK {
    USHORT Length;
    USHORT TxFsContext;
    PVOID TransactionObject;
};

typedef struct _UNICODE_STRING {
    USHORT Length;
    USHORT MaximumLength;
    PUSHORT Buffer;
};

typedef struct _VPB {
    SHORT Type;
    SHORT Size;
    USHORT Flags;
    USHORT VolumeLabelLength;
    struct _DEVICE_OBJECT *DeviceObject;
    struct _DEVICE_OBJECT *RealDevice;
    ULONG SerialNumber;
    ULONG ReferenceCount;
    WCHAR VolumeLabel[32];
};

typedef struct _WAIT_CONTEXT_BLOCK {
    struct _KDEVICE_QUEUE_ENTRY WaitQueueEntry;
    struct _LIST_ENTRY DmaWaitEntry;
    ULONG NumberOfChannels;
    ULONG SyncCallback : 1;
    ULONG DmaContext : 1;
    ULONG Reserved : 30;
    enum _IO_ALLOCATION_ACTION *DeviceRoutine;
    PVOID DeviceContext;
    ULONG NumberOfMapRegisters;
    PVOID DeviceObject;
    PVOID CurrentIrp;
    struct _KDPC *BufferChainingDpc;
};

typedef struct _WHEA_ERROR_PACKET_V2 {
    ULONG Signature;
    ULONG Version;
    ULONG Length;
    union _WHEA_ERROR_PACKET_FLAGS Flags;
    enum _WHEA_ERROR_TYPE ErrorType;
    enum _WHEA_ERROR_SEVERITY ErrorSeverity;
    ULONG ErrorSourceId;
    enum _WHEA_ERROR_SOURCE_TYPE ErrorSourceType;
    struct _GUID NotifyType;
    ULONG64 Context;
    enum _WHEA_ERROR_PACKET_DATA_FORMAT DataFormat;
    ULONG Reserved1;
    ULONG DataOffset;
    ULONG DataLength;
    ULONG PshedDataOffset;
    ULONG PshedDataLength;
};

typedef struct _WHEA_ERROR_RECORD {
    struct _WHEA_ERROR_RECORD_HEADER Header;
    struct _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR SectionDescriptor[1];
};

typedef struct _WHEA_ERROR_RECORD_HEADER {
    ULONG Signature;
    union _WHEA_REVISION Revision;
    ULONG SignatureEnd;
    USHORT SectionCount;
    enum _WHEA_ERROR_SEVERITY Severity;
    union _WHEA_ERROR_RECORD_HEADER_VALIDBITS ValidBits;
    ULONG Length;
    union _WHEA_TIMESTAMP Timestamp;
    struct _GUID PlatformId;
    struct _GUID PartitionId;
    struct _GUID CreatorId;
    struct _GUID NotifyType;
    ULONG64 RecordId;
    union _WHEA_ERROR_RECORD_HEADER_FLAGS Flags;
    union _WHEA_PERSISTENCE_INFO PersistenceInfo;
    UCHAR Reserved[12];
};

typedef struct _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR {
    ULONG SectionOffset;
    ULONG SectionLength;
    union _WHEA_REVISION Revision;
    union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_VALIDBITS ValidBits;
    UCHAR Reserved;
    union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS Flags;
    struct _GUID SectionType;
    struct _GUID FRUId;
    enum _WHEA_ERROR_SEVERITY SectionSeverity;
    CHAR FRUText[20];
};

typedef struct _WHEA_PROCESSOR_GENERIC_ERROR_SECTION {
    union _WHEA_PROCESSOR_GENERIC_ERROR_SECTION_VALIDBITS ValidBits;
    UCHAR ProcessorType;
    UCHAR InstructionSet;
    UCHAR ErrorType;
    UCHAR Operation;
    UCHAR Flags;
    UCHAR Level;
    USHORT Reserved;
    ULONG64 CPUVersion;
    UCHAR CPUBrandString[128];
    ULONG64 ProcessorId;
    ULONG64 TargetAddress;
    ULONG64 RequesterId;
    ULONG64 ResponderId;
    ULONG64 InstructionPointer;
};

typedef struct _WHEA_XPF_MCA_SECTION {
    ULONG VersionNumber;
    enum _WHEA_CPU_VENDOR CpuVendor;
    union _LARGE_INTEGER Timestamp;
    ULONG ProcessorNumber;
    union _MCG_STATUS GlobalStatus;
    ULONG64 InstructionPointer;
    ULONG BankNumber;
    union _MCI_STATUS Status;
    ULONG64 Address;
    ULONG64 Misc;
    ULONG ExtendedRegisterCount;
    ULONG Reserved2;
    ULONG64 ExtendedRegisters[24];
};

typedef struct _WHEA_XPF_PROCESSOR_ERROR_SECTION {
    union _WHEA_XPF_PROCESSOR_ERROR_SECTION_VALIDBITS ValidBits;
    ULONG64 LocalAPICId;
    UCHAR CpuId[48];
    UCHAR VariableInfo[1];
};

typedef struct _WORK_QUEUE_ITEM {
    struct _LIST_ENTRY List;
    PVOID WorkerRoutine;
    PVOID Parameter;
};

typedef struct _XSTATE_CONFIGURATION {
    ULONG64 EnabledFeatures;
    ULONG64 EnabledVolatileFeatures;
    ULONG Size;
    ULONG OptimizedSave : 1;
    struct _XSTATE_FEATURE Features[64];
};

typedef struct _XSTATE_FEATURE {
    ULONG Offset;
    ULONG Size;
};

typedef union _LARGE_INTEGER {
    ULONG LowPart;
    LONG HighPart;
    struct {
        ULONG LowPart;
        LONG HighPart;
    } u;
    LONG64 QuadPart;
};

typedef union _MCG_STATUS {
    ULONG RestartIpValid : 1;
    ULONG ErrorIpValid : 1;
    ULONG MachineCheckInProgress : 1;
    ULONG Reserved1 : 29;
    ULONG Reserved2;
    ULONG64 QuadPart;
};

typedef union _MCI_STATUS {
    USHORT McaErrorCode;
    USHORT ModelErrorCode;
    ULONG OtherInformation : 23;
    ULONG ActionRequired : 1;
    ULONG Signalling : 1;
    ULONG ContextCorrupt : 1;
    ULONG AddressValid : 1;
    ULONG MiscValid : 1;
    ULONG ErrorEnabled : 1;
    ULONG UncorrectedError : 1;
    ULONG StatusOverFlow : 1;
    ULONG Valid : 1;
    ULONG64 QuadPart;
};

typedef union _POWER_STATE {
    enum _SYSTEM_POWER_STATE SystemState;
    enum _DEVICE_POWER_STATE DeviceState;
};

typedef union _SLIST_HEADER {
    ULONG64 Alignment;
    struct _SINGLE_LIST_ENTRY Next;
    USHORT Depth;
    USHORT Sequence;
};

typedef union _ULARGE_INTEGER {
    ULONG LowPart;
    ULONG HighPart;
    struct {
        ULONG LowPart;
        ULONG HighPart;
    } u;
    ULONG64 QuadPart;
};

typedef union _WHEA_ERROR_PACKET_FLAGS {
    ULONG PreviousError : 1;
    ULONG Reserved1 : 1;
    ULONG HypervisorError : 1;
    ULONG Simulated : 1;
    ULONG PlatformPfaControl : 1;
    ULONG PlatformDirectedOffline : 1;
    ULONG Reserved2 : 26;
    ULONG AsULONG;
};

typedef union _WHEA_ERROR_RECORD_HEADER_FLAGS {
    ULONG Recovered : 1;
    ULONG PreviousError : 1;
    ULONG Simulated : 1;
    ULONG Reserved : 29;
    ULONG AsULONG;
};

typedef union _WHEA_ERROR_RECORD_HEADER_VALIDBITS {
    ULONG PlatformId : 1;
    ULONG Timestamp : 1;
    ULONG PartitionId : 1;
    ULONG Reserved : 29;
    ULONG AsULONG;
};

typedef union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS {
    ULONG Primary : 1;
    ULONG ContainmentWarning : 1;
    ULONG Reset : 1;
    ULONG ThresholdExceeded : 1;
    ULONG ResourceNotAvailable : 1;
    ULONG LatentError : 1;
    ULONG Reserved : 26;
    ULONG AsULONG;
};

typedef union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_VALIDBITS {
    UCHAR FRUId : 1;
    UCHAR FRUText : 1;
    UCHAR Reserved : 6;
    UCHAR AsUCHAR;
};

typedef union _WHEA_PERSISTENCE_INFO {
    ULONG64 Signature : 16;
    ULONG64 Length : 24;
    ULONG64 Identifier : 16;
    ULONG64 Attributes : 2;
    ULONG64 DoNotLog : 1;
    ULONG64 Reserved : 5;
    ULONG64 AsULONGLONG;
};

typedef union _WHEA_PROCESSOR_GENERIC_ERROR_SECTION_VALIDBITS {
    ULONG64 ProcessorType : 1;
    ULONG64 InstructionSet : 1;
    ULONG64 ErrorType : 1;
    ULONG64 Operation : 1;
    ULONG64 Flags : 1;
    ULONG64 Level : 1;
    ULONG64 CPUVersion : 1;
    ULONG64 CPUBrandString : 1;
    ULONG64 ProcessorId : 1;
    ULONG64 TargetAddress : 1;
    ULONG64 RequesterId : 1;
    ULONG64 ResponderId : 1;
    ULONG64 InstructionPointer : 1;
    ULONG64 Reserved : 51;
    ULONG64 ValidBits;
};

typedef union _WHEA_REVISION {
    UCHAR MinorRevision;
    UCHAR MajorRevision;
    USHORT AsUSHORT;
};

typedef union _WHEA_TIMESTAMP {
    ULONG64 Seconds : 8;
    ULONG64 Minutes : 8;
    ULONG64 Hours : 8;
    ULONG64 Precise : 1;
    ULONG64 Reserved : 7;
    ULONG64 Day : 8;
    ULONG64 Month : 8;
    ULONG64 Year : 8;
    ULONG64 Century : 8;
    union _LARGE_INTEGER AsLARGE_INTEGER;
};

typedef union _WHEA_XPF_PROCESSOR_ERROR_SECTION_VALIDBITS {
    ULONG64 LocalAPICId : 1;
    ULONG64 CpuId : 1;
    ULONG64 ProcInfoCount : 6;
    ULONG64 ContextInfoCount : 6;
    ULONG64 Reserved : 50;
    ULONG64 ValidBits;
};

typedef enum BUS_QUERY_ID_TYPE {
    BusQueryDeviceID = 0,
    BusQueryHardwareIDs = 1,
    BusQueryCompatibleIDs = 2,
    BusQueryInstanceID = 3,
    BusQueryDeviceSerialNumber = 4,
    BusQueryContainerID = 5
};

typedef enum CPU_VENDORS {
    CPU_NONE = 0,
    CPU_INTEL = 1,
    CPU_AMD = 2,
    CPU_CYRIX = 3,
    CPU_TRANSMETA = 4,
    CPU_VIA = 5,
    CPU_CENTAUR = 5,
    CPU_RISE = 6,
    CPU_UNKNOWN = 7
};

typedef enum DEVICE_TEXT_TYPE {
    DeviceTextDescription = 0,
    DeviceTextLocationInformation = 1
};

typedef enum DMA_COMPLETION_STATUS {
    DmaComplete = 0,
    DmaAborted = 1,
    DmaError = 2,
    DmaCancelled = 3
};

typedef enum POWER_ACTION {
    PowerActionNone = 0,
    PowerActionReserved = 1,
    PowerActionSleep = 2,
    PowerActionHibernate = 3,
    PowerActionShutdown = 4,
    PowerActionShutdownReset = 5,
    PowerActionShutdownOff = 6,
    PowerActionWarmEject = 7
};

typedef enum _ALTERNATIVE_ARCHITECTURE_TYPE {
    StandardDesign = 0,
    NEC98x86 = 1,
    EndAlternatives = 2
};

typedef enum _DEVICE_POWER_STATE {
    PowerDeviceUnspecified = 0,
    PowerDeviceD0 = 1,
    PowerDeviceD1 = 2,
    PowerDeviceD2 = 3,
    PowerDeviceD3 = 4,
    PowerDeviceMaximum = 5
};

typedef enum _DEVICE_RELATION_TYPE {
    BusRelations = 0,
    EjectionRelations = 1,
    PowerRelations = 2,
    RemovalRelations = 3,
    TargetDeviceRelation = 4,
    SingleBusRelations = 5,
    TransportRelations = 6
};

typedef enum _DEVICE_USAGE_NOTIFICATION_TYPE {
    DeviceUsageTypeUndefined = 0,
    DeviceUsageTypePaging = 1,
    DeviceUsageTypeHibernation = 2,
    DeviceUsageTypeDumpFile = 3,
    DeviceUsageTypeBoot = 4,
    DeviceUsageTypePostDisplay = 5
};

typedef enum _DEVICE_WAKE_DEPTH {
    DeviceWakeDepthNotWakeable = 0,
    DeviceWakeDepthD0 = 1,
    DeviceWakeDepthD1 = 2,
    DeviceWakeDepthD2 = 3,
    DeviceWakeDepthD3hot = 4,
    DeviceWakeDepthD3cold = 5,
    DeviceWakeDepthMaximum = 6
};

typedef enum _DMA_INTERRUPT_TYPE {
    InterruptTypeCompletion = 0,
    InterruptTypeError = 1,
    InterruptTypeCancelled = 2
};

typedef enum _DMA_WIDTH {
    Width8Bits = 0,
    Width16Bits = 1,
    Width32Bits = 2,
    Width64Bits = 3,
    WidthNoWrap = 4,
    MaximumDmaWidth = 5
};

typedef enum _EVENT_TYPE {
    NotificationEvent = 0,
    SynchronizationEvent = 1
};

typedef enum _EXCEPTION_DISPOSITION {
    ExceptionContinueExecution = 0,
    ExceptionContinueSearch = 1,
    ExceptionNestedException = 2,
    ExceptionCollidedUnwind = 3
};

typedef enum _FILE_INFORMATION_CLASS {
    FileDirectoryInformation = 1,
    FileFullDirectoryInformation = 2,
    FileBothDirectoryInformation = 3,
    FileBasicInformation = 4,
    FileStandardInformation = 5,
    FileInternalInformation = 6,
    FileEaInformation = 7,
    FileAccessInformation = 8,
    FileNameInformation = 9,
    FileRenameInformation = 10,
    FileLinkInformation = 11,
    FileNamesInformation = 12,
    FileDispositionInformation = 13,
    FilePositionInformation = 14,
    FileFullEaInformation = 15,
    FileModeInformation = 16,
    FileAlignmentInformation = 17,
    FileAllInformation = 18,
    FileAllocationInformation = 19,
    FileEndOfFileInformation = 20,
    FileAlternateNameInformation = 21,
    FileStreamInformation = 22,
    FilePipeInformation = 23,
    FilePipeLocalInformation = 24,
    FilePipeRemoteInformation = 25,
    FileMailslotQueryInformation = 26,
    FileMailslotSetInformation = 27,
    FileCompressionInformation = 28,
    FileObjectIdInformation = 29,
    FileCompletionInformation = 30,
    FileMoveClusterInformation = 31,
    FileQuotaInformation = 32,
    FileReparsePointInformation = 33,
    FileNetworkOpenInformation = 34,
    FileAttributeTagInformation = 35,
    FileTrackingInformation = 36,
    FileIdBothDirectoryInformation = 37,
    FileIdFullDirectoryInformation = 38,
    FileValidDataLengthInformation = 39,
    FileShortNameInformation = 40,
    FileIoCompletionNotificationInformation = 41,
    FileIoStatusBlockRangeInformation = 42,
    FileIoPriorityHintInformation = 43,
    FileSfioReserveInformation = 44,
    FileSfioVolumeInformation = 45,
    FileHardLinkInformation = 46,
    FileProcessIdsUsingFileInformation = 47,
    FileNormalizedNameInformation = 48,
    FileNetworkPhysicalNameInformation = 49,
    FileIdGlobalTxDirectoryInformation = 50,
    FileIsRemoteDeviceInformation = 51,
    FileAttributeCacheInformation = 52,
    FileNumaNodeInformation = 53,
    FileStandardLinkInformation = 54,
    FileRemoteProtocolInformation = 55,
    FileRenameInformationBypassAccessCheck = 56,
    FileLinkInformationBypassAccessCheck = 57,
    FileVolumeNameInformation = 58,
    FileIdInformation = 59,
    FileIdExtdDirectoryInformation = 60,
    FileMaximumInformation = 61
};

typedef enum _FSINFOCLASS {
    FileFsVolumeInformation = 1,
    FileFsLabelInformation = 2,
    FileFsSizeInformation = 3,
    FileFsDeviceInformation = 4,
    FileFsAttributeInformation = 5,
    FileFsControlInformation = 6,
    FileFsFullSizeInformation = 7,
    FileFsObjectIdInformation = 8,
    FileFsDriverPathInformation = 9,
    FileFsVolumeFlagsInformation = 10,
    FileFsSectorSizeInformation = 11,
    FileFsDataCopyInformation = 12,
    FileFsMaximumInformation = 13
};

typedef enum _HALP_DMA_MAP_BUFFER_TYPE {
    HalpDmaContiguousMapBuffer = 0,
    HalpDmaNonContiguousMapBuffer = 1,
    HalpDmaMaximumMapBufferType = 2
};

typedef enum _HAL_DMA_CRASH_DUMP_REGISTER_TYPE {
    HalDmaCrashDumpRegisterSet1 = 0,
    HalDmaCrashDumpRegisterSet2 = 1,
    HalDmaCrashDumpRegisterSetMax = 2
};

typedef enum _HAL_INIT_PHASE {
    HalInitPhaseBspProcEarly = 0,
    HalInitPhaseBspProcEarlyMmReady = 1,
    HalInitPhaseBspProcEarlyTimerReady = 2,
    HalInitPhaseBspProcEarlyEnd = 3,
    HalInitPhasePnProcEarly = 4,
    HalInitPhasePnProcEarlyEnd = 5,
    HalInitPhaseBspSystemEarly = 6,
    HalInitPhaseBspSystemEarlyAcpiReady = 7,
    HalInitPhaseBspSystemEarlyHalExtensionsReady = 8,
    HalInitPhaseBspSystemEarlyInterruptsReady = 9,
    HalInitPhaseBspSystemEarlyDmaReady = 9,
    HalInitPhaseBspSystemEarlyProcReady = 10,
    HalInitPhaseBspSystemEarlyHwPerfCntReady = 11,
    HalInitPhaseBspSystemEarlyEnd = 12,
    HalInitPhaseBspSystemLate = 13,
    HalInitPhaseBspSystemLateEnd = 14,
    HalInitPhasePnSystemLate = 15,
    HalInitPhasePnSystemLateEnd = 16,
    HalInitPhaseAllProcStartComplete = 17,
    HalInitPhaseAllProcStartCompleteEnd = 18,
    HalInitPhaseReportResources = 19,
    HalInitPhaseReportResourcesEnd = 20,
    HalInitPhaseReportCoreSystemResources = 21,
    HalInitPhaseReportCoreSystemResourcesEnd = 22
};

typedef enum _INTERFACE_TYPE {
    InterfaceTypeUndefined = -1,
    Internal = 0,
    Isa = 1,
    Eisa = 2,
    MicroChannel = 3,
    TurboChannel = 4,
    PCIBus = 5,
    VMEBus = 6,
    NuBus = 7,
    PCMCIABus = 8,
    CBus = 9,
    MPIBus = 10,
    MPSABus = 11,
    ProcessorInternal = 12,
    InternalPowerBus = 13,
    PNPISABus = 14,
    PNPBus = 15,
    Vmcs = 16,
    ACPIBus = 17,
    MaximumInterfaceType = 18
};

typedef enum _INTERRUPT_PROBLEM {
    InterruptProblemNone = 0,
    InterruptProblemMadtParsingFailure = 1,
    InterruptProblemNoControllersFound = 2,
    InterruptProblemFailedDiscovery = 3,
    InterruptProblemInitializeLocalUnitFailed = 4,
    InterruptProblemInitializeIoUnitFailed = 5,
    InterruptProblemSetLogicalIdFailed = 6,
    InterruptProblemSetLineStateFailed = 7,
    InterruptProblemGenerateMessageFailed = 8,
    InterruptProblemConvertIdFailed = 9,
    InterruptProblemCmciSetupFailed = 10,
    InterruptProblemQueryMaxProcessorsCalledTooEarly = 11,
    InterruptProblemProcessorReset = 12,
    InterruptProblemStartProcessorFailed = 13,
    InterruptProblemProcessorNotAlive = 14,
    InterruptProblemLowerIrqlViolation = 15,
    InterruptProblemInvalidIrql = 16,
    InterruptProblemNoSuchController = 17,
    InterruptProblemNoSuchLines = 18,
    InterruptProblemBadConnectionData = 19,
    InterruptProblemBadRoutingData = 20,
    InterruptProblemInvalidProcessor = 21,
    InterruptProblemFailedToAttainTarget = 22,
    InterruptProblemUnsupportedWiringConfiguration = 23,
    InterruptProblemSpareAlreadyStarted = 24,
    InterruptProblemClusterNotFullyReplaced = 25,
    InterruptProblemNewClusterAlreadyActive = 26,
    InterruptProblemNewClusterTooLarge = 27,
    InterruptProblemCannotHardwareQuiesce = 28,
    InterruptProblemIpiDestinationUpdateFailed = 29,
    InterruptProblemNoMemory = 30,
    InterruptProblemNoIrtEntries = 31,
    InterruptProblemConnectionDataBaitAndSwitch = 32,
    InterruptProblemInvalidLogicalFlatId = 33,
    InterruptProblemDeinitializeLocalUnitFailed = 34,
    InterruptProblemDeinitializeIoUnitFailed = 35
};

typedef enum _INTERRUPT_RESULT {
    InterruptBeginFatalError = 0,
    InterruptBeginLine = 1,
    InterruptBeginSpurious = 2,
    InterruptBeginVector = 3,
    InterruptBeginNone = 4
};

typedef enum _INTERRUPT_TARGET_TYPE {
    InterruptTargetInvalid = 0,
    InterruptTargetAllIncludingSelf = 1,
    InterruptTargetAllExcludingSelf = 2,
    InterruptTargetSelfOnly = 3,
    InterruptTargetPhysical = 4,
    InterruptTargetLogicalFlat = 5,
    InterruptTargetLogicalClustered = 6,
    InterruptTargetRemapIndex = 7,
    InterruptTargetHypervisor = 8
};

typedef enum _IO_ALLOCATION_ACTION {
    KeepObject = 1,
    DeallocateObject = 2,
    DeallocateObjectKeepRegisters = 3
};

typedef enum _IRQ_PRIORITY {
    IrqPriorityUndefined = 0,
    IrqPriorityLow = 1,
    IrqPriorityNormal = 2,
    IrqPriorityHigh = 3
};

typedef enum _KINTERRUPT_MODE {
    LevelSensitive = 0,
    Latched = 1
};

typedef enum _KINTERRUPT_POLARITY {
    InterruptPolarityUnknown = 0,
    InterruptActiveHigh = 1,
    InterruptRisingEdge = 1,
    InterruptActiveLow = 2,
    InterruptFallingEdge = 2,
    InterruptActiveBoth = 3
};

typedef enum _KNOWN_CONTROLLER_TYPE {
    InterruptControllerInvalid = 0,
    InterruptControllerPic = 1,
    InterruptControllerApic = 2,
    InterruptControllerGic = 3,
    InterruptControllerUnknown = 4096
};

typedef enum _KSPIN_LOCK_QUEUE_NUMBER {
    LockQueueUnusedSpare0 = 0,
    LockQueueExpansionLock = 1,
    LockQueueUnusedSpare2 = 2,
    LockQueueSystemSpaceLock = 3,
    LockQueueVacbLock = 4,
    LockQueueMasterLock = 5,
    LockQueueNonPagedPoolLock = 6,
    LockQueueIoCancelLock = 7,
    LockQueueWorkQueueLock = 8,
    LockQueueIoVpbLock = 9,
    LockQueueIoDatabaseLock = 10,
    LockQueueIoCompletionLock = 11,
    LockQueueNtfsStructLock = 12,
    LockQueueAfdWorkQueueLock = 13,
    LockQueueBcbLock = 14,
    LockQueueMmNonPagedPoolLock = 15,
    LockQueueUnusedSpare16 = 16,
    LockQueueMaximumLock = 17
};

typedef enum _MEMORY_CACHING_TYPE {
    MmNonCached = 0,
    MmCached = 1,
    MmWriteCombined = 2,
    MmHardwareCoherentCached = 3,
    MmNonCachedUnordered = 4,
    MmUSWCCached = 5,
    MmMaximumCacheType = 6
};

typedef enum _MEMORY_CACHING_TYPE_ORIG {
    MmFrameBufferCached = 2
};

typedef enum _MODE {
    KernelMode = 0,
    UserMode = 1,
    MaximumMode = 2
};

typedef enum _NT_PRODUCT_TYPE {
    NtProductWinNt = 1,
    NtProductLanManNt = 2,
    NtProductServer = 3
};

typedef enum _POOL_TYPE {
    NonPagedPool = 0,
    NonPagedPoolExecute = 0,
    PagedPool = 1,
    NonPagedPoolMustSucceed = 2,
    DontUseThisType = 3,
    NonPagedPoolCacheAligned = 4,
    PagedPoolCacheAligned = 5,
    NonPagedPoolCacheAlignedMustS = 6,
    MaxPoolType = 7,
    NonPagedPoolBase = 0,
    NonPagedPoolBaseMustSucceed = 2,
    NonPagedPoolBaseCacheAligned = 4,
    NonPagedPoolBaseCacheAlignedMustS = 6,
    NonPagedPoolSession = 32,
    PagedPoolSession = 33,
    NonPagedPoolMustSucceedSession = 34,
    DontUseThisTypeSession = 35,
    NonPagedPoolCacheAlignedSession = 36,
    PagedPoolCacheAlignedSession = 37,
    NonPagedPoolCacheAlignedMustSSession = 38,
    NonPagedPoolNx = 512,
    NonPagedPoolNxCacheAligned = 516,
    NonPagedPoolSessionNx = 544
};

typedef enum _POWER_STATE_TYPE {
    SystemPowerState = 0,
    DevicePowerState = 1
};

typedef enum _REG_NOTIFY_CLASS {
    RegNtDeleteKey = 0,
    RegNtPreDeleteKey = 0,
    RegNtSetValueKey = 1,
    RegNtPreSetValueKey = 1,
    RegNtDeleteValueKey = 2,
    RegNtPreDeleteValueKey = 2,
    RegNtSetInformationKey = 3,
    RegNtPreSetInformationKey = 3,
    RegNtRenameKey = 4,
    RegNtPreRenameKey = 4,
    RegNtEnumerateKey = 5,
    RegNtPreEnumerateKey = 5,
    RegNtEnumerateValueKey = 6,
    RegNtPreEnumerateValueKey = 6,
    RegNtQueryKey = 7,
    RegNtPreQueryKey = 7,
    RegNtQueryValueKey = 8,
    RegNtPreQueryValueKey = 8,
    RegNtQueryMultipleValueKey = 9,
    RegNtPreQueryMultipleValueKey = 9,
    RegNtPreCreateKey = 10,
    RegNtPostCreateKey = 11,
    RegNtPreOpenKey = 12,
    RegNtPostOpenKey = 13,
    RegNtKeyHandleClose = 14,
    RegNtPreKeyHandleClose = 14,
    RegNtPostDeleteKey = 15,
    RegNtPostSetValueKey = 16,
    RegNtPostDeleteValueKey = 17,
    RegNtPostSetInformationKey = 18,
    RegNtPostRenameKey = 19,
    RegNtPostEnumerateKey = 20,
    RegNtPostEnumerateValueKey = 21,
    RegNtPostQueryKey = 22,
    RegNtPostQueryValueKey = 23,
    RegNtPostQueryMultipleValueKey = 24,
    RegNtPostKeyHandleClose = 25,
    RegNtPreCreateKeyEx = 26,
    RegNtPostCreateKeyEx = 27,
    RegNtPreOpenKeyEx = 28,
    RegNtPostOpenKeyEx = 29,
    RegNtPreFlushKey = 30,
    RegNtPostFlushKey = 31,
    RegNtPreLoadKey = 32,
    RegNtPostLoadKey = 33,
    RegNtPreUnLoadKey = 34,
    RegNtPostUnLoadKey = 35,
    RegNtPreQueryKeySecurity = 36,
    RegNtPostQueryKeySecurity = 37,
    RegNtPreSetKeySecurity = 38,
    RegNtPostSetKeySecurity = 39,
    RegNtCallbackObjectContextCleanup = 40,
    RegNtPreRestoreKey = 41,
    RegNtPostRestoreKey = 42,
    RegNtPreSaveKey = 43,
    RegNtPostSaveKey = 44,
    RegNtPreReplaceKey = 45,
    RegNtPostReplaceKey = 46,
    MaxRegNtNotifyClass = 47
};

typedef enum _SECURITY_IMPERSONATION_LEVEL {
    SecurityAnonymous = 0,
    SecurityIdentification = 1,
    SecurityImpersonation = 2,
    SecurityDelegation = 3
};

typedef enum _SYSTEM_POWER_STATE {
    PowerSystemUnspecified = 0,
    PowerSystemWorking = 1,
    PowerSystemSleeping1 = 2,
    PowerSystemSleeping2 = 3,
    PowerSystemSleeping3 = 4,
    PowerSystemHibernate = 5,
    PowerSystemShutdown = 6,
    PowerSystemMaximum = 7
};

typedef enum _USER_ACTIVITY_PRESENCE {
    PowerUserPresent = 0,
    PowerUserNotPresent = 1,
    PowerUserInactive = 2,
    PowerUserMaximum = 3,
    PowerUserInvalid = 3
};

typedef enum _WHEA_CPU_VENDOR {
    WheaCpuVendorOther = 0,
    WheaCpuVendorIntel = 1,
    WheaCpuVendorAmd = 2
};

typedef enum _WHEA_ERROR_PACKET_DATA_FORMAT {
    WheaDataFormatIPFSalRecord = 0,
    WheaDataFormatXPFMCA = 1,
    WheaDataFormatMemory = 2,
    WheaDataFormatPCIExpress = 3,
    WheaDataFormatNMIPort = 4,
    WheaDataFormatPCIXBus = 5,
    WheaDataFormatPCIXDevice = 6,
    WheaDataFormatGeneric = 7,
    WheaDataFormatMax = 8
};

typedef enum _WHEA_ERROR_SEVERITY {
    WheaErrSevRecoverable = 0,
    WheaErrSevFatal = 1,
    WheaErrSevCorrected = 2,
    WheaErrSevInformational = 3
};

typedef enum _WHEA_ERROR_SOURCE_TYPE {
    WheaErrSrcTypeMCE = 0,
    WheaErrSrcTypeCMC = 1,
    WheaErrSrcTypeCPE = 2,
    WheaErrSrcTypeNMI = 3,
    WheaErrSrcTypePCIe = 4,
    WheaErrSrcTypeGeneric = 5,
    WheaErrSrcTypeINIT = 6,
    WheaErrSrcTypeBOOT = 7,
    WheaErrSrcTypeSCIGeneric = 8,
    WheaErrSrcTypeIPFMCA = 9,
    WheaErrSrcTypeIPFCMC = 10,
    WheaErrSrcTypeIPFCPE = 11,
    WheaErrSrcTypeMax = 12
};

typedef enum _WHEA_ERROR_TYPE {
    WheaErrTypeProcessor = 0,
    WheaErrTypeMemory = 1,
    WheaErrTypePCIExpress = 2,
    WheaErrTypeNMI = 3,
    WheaErrTypePCIXBus = 4,
    WheaErrTypePCIXDevice = 5,
    WheaErrTypeGeneric = 6
};

AcpiRootPdo;
Amd64CounterStatus;
Amd64ProfileInterface;
Amd64ProfileIntervalLimits;
Amd64ProfileSourceDescriptorTable;
BadIOAddrList;
CMC_NOTIFY_TYPE_GUID;
CmosRangeHandlersStdPCAT;
CurTiledCr3LowPart;
DEVPKEY_Device_ClassGuid;
DEVPKEY_Device_DriverInfPath;
DEVPKEY_Device_InstallDate;
DefaultProfileInterface;
DefaultProfileIntervalLimits;
DefaultProfileSourceDescriptor;
DmaDispatch;
EmonCounterResolution;
EmonCounterStatus;
EmonNumberCounters;
EmonProfileInterface;
EmonProfileIntervalLimits;
EmonProfileSourceDescriptorTable;
EmonVersion;
False;
GENERIC_NOTIFY_TYPE_GUID;
GUID_ACPI_CMOS_INTERFACE_STANDARD;
GUID_DEVICE_ACPI_TIME;
GUID_DEVICE_INTERFACE_REMOVAL;
GUID_EM_CPU_TYPE_INTEL_DTT_DISABLE;
GUID_EM_DISABLE_MSI_RULE;
GUID_HAL_CALLBACK_ACPI_CREATOR_REVISION;
GUID_HAL_CALLBACK_ACPI_FADT_BOOTARCH;
GUID_HAL_CALLBACK_ACPI_OEM_ID;
GUID_HAL_CALLBACK_ACPI_OEM_REVISION;
GUID_HAL_CALLBACK_ACPI_OEM_TABLE_ID;
GUID_HAL_CALLBACK_ACPI_REVISION;
GUID_PCC_INTERFACE_STANDARD;
HAL_ETW_EVENT_DYNAMIC_TICK_BCD_DISABLED;
HAL_ETW_EVENT_DYNAMIC_TICK_EM_OVERRIDE_DISABLED;
HAL_ETW_EVENT_DYNAMIC_TICK_HW_DISABLED;
HAL_ETW_EVENT_EXPECTED_FALLBACK;
HAL_ETW_EVENT_FIRMWARE_SLEEP_CORRUPTION;
HAL_ETW_EVENT_TIMER_PROC_DELTA_REPORT;
HAL_ETW_EVENT_TIMER_PROC_SYNCH_REPORT;
HAL_ETW_EVENT_TIMER_SYNCH_FAILED;
HAL_ETW_EVENT_TIMER_SYNCH_SUMMARY;
HAL_ETW_EVENT_UNEXPECTED_FALLBACK;
HAL_ETW_PROVIDER;
HalAcpiDispatchTable;
HalAcpiHardwareIdString;
HalDeviceClassKeyPath;
HalDispatchTable;
HalEfiMissedMappingsCount;
HalEfiRuntimeServicesBlock;
HalEfiRuntimeServicesTable;
HalEfiSetVirtualAddressMapStatus;
HalEfiToNtStatusMappings;
HalFirmwareCatalogValueName;
HalFirmwareFilenameValueName;
HalFirmwareInstallDateValueName;
HalFirmwareLastStatusValueName;
HalFirmwareMaxRetryCountValueName;
HalFirmwarePhaseValueName;
HalFirmwarePolicyValueName;
HalFirmwareResourcesKeyPath;
HalFirmwareRetryCountValueName;
HalFirmwareStatusValueName;
HalFirmwareTypeEfi;
HalFirmwareVersionValueName;
HalHardwareIdString;
HalInstanceIdString;
HalName;
HalPerformEndOfInterrupt;
HalPrivateDispatchTable;
HalSubComponents;
HalUefiEsrtCompatibleIdFormatStrings;
HalUefiEsrtDeviceIdFormatString;
HalUefiEsrtHardwareIdFormatString;
HalUefiEsrtHardwareIdFormatStrings;
HalUefiHardwareIdString;
HalWdHardwareIdString;
HalpAcpiFacsMapping;
HalpAcpiFlags;
HalpAcpiMpst;
HalpAcpiMsct;
HalpAcpiMultiNode;
HalpAcpiSlit;
HalpAcpiSrat;
HalpAcpiTableCacheList;
HalpAcpiTableCacheLock;
HalpAcpiTableMatchList;
HalpAcpiTablePointers;
HalpAcpiVerifiedTable;
HalpAcquiredInterface;
HalpAddressUsageList;
HalpAllocationDescriptorArray;
HalpAlwaysOnCounter;
HalpAlwaysOnTimer;
HalpApicClusterModeEnabled;
HalpApicCpuApi;
HalpApicEndOfInterrupt;
HalpApicRead;
HalpApicRestoreNonX2ModeOnReset;
HalpApicTimerCpuApi;
HalpApicValidateSelfIpi;
HalpApicWaitForCommand;
HalpApicWrite;
HalpApicWriteCommand;
HalpApicX2Mode;
HalpAuditResults;
HalpAuditStatus;
HalpAvoidMmConfigAccessMethod;
HalpBarrier;
HalpBiosCallCount;
HalpBroken440BX;
HalpBugcheckInProgress;
HalpCR3Root;
HalpCachingRequirements;
HalpCachingRequirementsEntryCount;
HalpChannelMemoryRangeCount;
HalpChannelMemoryRanges;
HalpChipHackCount;
HalpChipHacksTable;
HalpClockTimer;
HalpClockWorkUnion;
HalpCmcContext;
HalpCmcErrorPacket;
HalpCmcErrorSource;
HalpCmcErrorSourceId;
HalpCmcFallbackLock;
HalpCmcLock;
HalpCmcPollingInitialized;
HalpCmcPollingStartDeferred;
HalpCmcPollingStarted;
HalpCmcReserveErrorPacket;
HalpCmciEnabled;
HalpCmciRevertToPolledMode;
HalpCmosCenturyOffset;
HalpComPortIrqMapping;
HalpCoreDmaAlignment;
HalpDebugDeviceInUse;
HalpDebugDeviceInformation;
HalpDebugPortTable;
HalpDebugPortTableV2;
HalpDefaultPcIoSpace;
HalpDiagClockLogRoutine;
HalpDiagnosticEventHandle;
HalpDiagnosticEventsRegistered;
HalpDisableHibernate;
HalpDisableNvsSaveRestore;
HalpDmaAdapterList;
HalpDmaAdapterListLock;
HalpDmaAdapters;
HalpDmaControllers;
HalpDmaGrowMapBufferWorkerQueued;
HalpDmaHibernateAdapter;
HalpDmaHibernateAdapters;
HalpDmaHibernatePhase1RegisterSetIndex;
HalpDmaHibernateRegisterPhase;
HalpDmaHibernateRegisterSetIndex;
HalpDmaHibernateRegisterSets;
HalpDmaLastControllerId;
HalpDmaOperationsV2;
HalpDmaOperationsV3;
HalpDoingCrashDump;
HalpDriverObject;
HalpDynamicDeviceInterfaceLock;
HalpDynamicDeviceInterfaces;
HalpDynamicDevices;
HalpDynamicDevicesReady;
HalpEfiCapsuleCalls;
HalpEfiCapsuleWrites;
HalpEfiSystemResourceList;
HalpEfiTimeCalls;
HalpEfiTimeWrites;
HalpEfiVariableCalls;
HalpEfiVariableWrites;
HalpEnlightenment;
HalpEnlightenmentHbSaved;
HalpErrataChipHacksInitialized;
HalpExtHandleArray;
HalpExtHandleCount;
HalpExtLoaderBlock;
HalpExtensionImports;
HalpFakePciBusData;
HalpFakePciBusHandler;
HalpFallbackPerformanceCounter;
HalpFeatureBits;
HalpFixedAcpiDescTable;
HalpFlushBarrier;
HalpFrameBufferBase;
HalpFwBootPerformanceTable;
HalpFwS3PerformanceTable;
HalpGenericConfiguration;
HalpGenericInitDone;
HalpGenericNmiErrorSourceListHead;
HalpGenericNmiInitDone;
HalpGenericPolledContext;
HalpGenericPolledErrorSourceListHead;
HalpGenericPollingInitDone;
HalpGlobalVolatile;
HalpHeapEnd;
HalpHeapStart;
HalpHiberInProgress;
HalpHiberProcState;
HalpHpetBaseAddress;
HalpHpetGsiOffset;
HalpHpetInitializationStatus;
HalpHpetLegacyInterrupts;
HalpHpetPhysicalAddress;
HalpHvComIoSpace;
HalpHvCpuManager;
HalpHvMcaBankCount;
HalpHvMcaLpCount;
HalpHvMcaStatusCache;
HalpHvMcaStatusCacheInitialized;
HalpHvMcaStatusMsrIndices;
HalpHvPhysicalMemoryApi;
HalpHvPresent;
HalpHvTimerApi;
HalpHvUsedForReboot;
HalpHvVpMcaPcrContextData;
HalpHwToSwIrqlMap;
HalpIDTUsage;
HalpIDTUsageFlags;
HalpInterruptClusterAffinity;
HalpInterruptClusterId;
HalpInterruptClusterModeEnabled;
HalpInterruptClusterModeForced;
HalpInterruptController;
HalpInterruptControllerCount;
HalpInterruptDynamicProcessorCount;
HalpInterruptDynamicProcessorState;
HalpInterruptFixedLines;
HalpInterruptHasPriorities;
HalpInterruptIoApic;
HalpInterruptIoApicCount;
HalpInterruptIpiLines;
HalpInterruptIpiPolicy;
HalpInterruptIpiThreshold;
HalpInterruptIrqlAsserted;
HalpInterruptIrqlAudit;
HalpInterruptIrtCacheInvalidationLock;
HalpInterruptLastProblem;
HalpInterruptLastProblemController;
HalpInterruptLastProblemFile;
HalpInterruptLastProblemLine;
HalpInterruptLastProblemStatus;
HalpInterruptLocalUnitErrorCount;
HalpInterruptLocalUnitErrorLock;
HalpInterruptLocalUnitErrorLog;
HalpInterruptLocalUnitErrorLogProcessor;
HalpInterruptLock;
HalpInterruptLogicalFlatLimit;
HalpInterruptLogicalMode;
HalpInterruptMaxCluster;
HalpInterruptMaxClusterSize;
HalpInterruptMaxGroupStarted;
HalpInterruptMaxProcessors;
HalpInterruptMsiOverrideFlags;
HalpInterruptMsiSupportDetermined;
HalpInterruptMsiSupported;
HalpInterruptNextCluster;
HalpInterruptNextClusterIndex;
HalpInterruptNmiSources;
HalpInterruptNoShorthand;
HalpInterruptOverrides;
HalpInterruptP0LocalId;
HalpInterruptPackagesStarted;
HalpInterruptPerfLinesFound;
HalpInterruptPhysicalModeOnly;
HalpInterruptPhysicalTargets;
HalpInterruptPicModeForced;
HalpInterruptPicStateIntact;
HalpInterruptProcessorCap;
HalpInterruptProcessorCount;
HalpInterruptProcessorPcr;
HalpInterruptProcessorRestarting;
HalpInterruptProcessorState;
HalpInterruptProcessorStateInitialized;
HalpInterruptProcessorsStarted;
HalpInterruptRegistrationAllowed;
HalpInterruptRegistrationProblem;
HalpInterruptRegistrationType;
HalpInterruptReplayCount;
HalpInterruptReplayInProgress;
HalpInterruptSendNmiFailed;
HalpInterruptTargets;
HalpInterruptX2ApicPolicy;
HalpInterruptsInitialized;
HalpIoControlBase;
HalpIoMemoryBase;
HalpKdComIoSpace;
HalpKdInitialResourceConstraints;
HalpKdSavedResourceConstraints;
HalpLocalApic;
HalpLocalApicPhysical;
HalpLowMemoryMap;
HalpLowMemoryMapBuffer;
HalpLowMemoryMapStack;
HalpLowMemoryMapStackBuffer;
HalpLowStub;
HalpLowStubPhysicalAddress;
HalpMachineCheckConfiguration;
HalpMaxHotPlugMemoryAddress;
HalpMaxNumaPage;
HalpMaxPciBus;
HalpMaximumClockDomainCount;
HalpMaximumGroupSize;
HalpMcUpdateLockFunc;
HalpMcUpdateMicrocodeFunc;
HalpMcUpdatePostUpdateFunc;
HalpMcUpdateUnlockFunc;
HalpMcaBanksValidOnBoot;
HalpMcaEnabled;
HalpMcaMiscImplemented;
HalpMcaNumberOfBanks;
HalpMcaPcrContextData;
HalpMcaPollForCmc;
HalpMcaRecoveryPolicy;
HalpMcaRecoverySupported;
HalpMcaWheaReady;
HalpMceBackupErrorBuffer;
HalpMceBroadcast;
HalpMceEnabled;
HalpMceErrorFound;
HalpMceErrorSource;
HalpMceErrorSourceId;
HalpMceLock;
HalpMceProcessorCount;
HalpMceRendezvousCount;
HalpMceRendezvousInProgress;
HalpMceRendezvousNoRipvOnlyCount;
HalpMemoryCoolingPacket;
HalpMemoryCoolingPacketLock;
HalpMinNumaPage;
HalpMinPciBus;
HalpMinimumClockFrequency;
HalpMiscCallbackRecord;
HalpMiscDebugBreakRequested;
HalpMiscDiscardLowMemory;
HalpMmLeftoverMemory;
HalpMmLeftoverMemorySize;
HalpMmLoaderBlock;
HalpMoveMemory;
HalpNPPoolAllocCtx;
HalpNewAdapter;
HalpNmiConfiguration;
HalpNmiInfo;
HalpNumaConfig;
HalpNumaDynamicMemoryRanges;
HalpNumaInitializationComplete;
HalpNumaMaxMemoryRangeCount;
HalpNumaMemoryRangeCount;
HalpNumaMemoryRangeLock;
HalpNumaMemoryRanges;
HalpNumaPageCount;
HalpNvsPreservedData;
HalpNvsPreservedDataSize;
HalpNvsRegionCount;
HalpNvsRegionData;
HalpOriginalPerformanceCounter;
HalpOriginalStallTimer;
HalpOrionOPB;
HalpPCIConfigAccessMethod;
HalpPCIConfigLock;
HalpPCIConfigReadHandlers;
HalpPCIConfigSpaceInitialized;
HalpPCIConfigWriteHandlers;
HalpPciAmdK8SpecialLocationHack;
HalpPciErrorHandlerCallback;
HalpPciMmConfigBaseAddressList;
HalpPciMmConfigReadHandlers;
HalpPciMmConfigVirtualAddress;
HalpPciMmConfigWriteHandlers;
HalpPerfInterruptHandler;
HalpPerformanceCounter;
HalpPhysicalMemoryCheckSums;
HalpPhysicalMemoryMayAppearAbove4GB;
HalpPicIdtExclusionList;
HalpPicVectorFlags;
HalpPicVectorRedirect;
HalpPiix4;
HalpPiix4BusNumber;
HalpPiix4DevActB;
HalpPiix4Present;
HalpPiix4SlotNumber;
HalpPlatformFlags;
HalpPmuHandle;
HalpPmuInUse;
HalpPreferedDebuggingDevice;
HalpProcessedACPIPhase0;
HalpProcessorInMceHandler;
HalpProcessorInNmiHandler;
HalpProfileData;
HalpProfileInterface;
HalpProfileTimer;
HalpProfilingActive;
HalpPteForFlush;
HalpReEnableDiagnosticEventsOnResume;
HalpRebootNow;
HalpRegisteredInterruptControllers;
HalpRegisteredTimerCount;
HalpRegisteredTimers;
HalpResumeFlags;
HalpResumeFromHibernate;
HalpResumeStructuresAllocated;
HalpResumeTime;
HalpRtcRegA;
HalpRtcRegB;
HalpSafeBootMode;
HalpSaveStateSync;
HalpSavedStallCounter;
HalpShutdownActive;
HalpShutdownContext;
HalpSimpleBootFlagTable;
HalpSleepContext;
HalpSleepPage16Lock;
HalpSleepPageLock;
HalpStallCounter;
HalpSystemHardwareLock;
HalpSzBreak;
HalpSzDisableDynamicTick;
HalpSzDisableExtCache;
HalpSzDisableX2ApicPolicy;
HalpSzDisallowMmConfig;
HalpSzDisallowMsi;
HalpSzEnableX2ApicPolicy;
HalpSzEnhancedTscSyncPolicy;
HalpSzForceClusterMode;
HalpSzForceMSI;
HalpSzForcePicMode;
HalpSzGroupSize;
HalpSzHypervisorLaunchRequested;
HalpSzLegacyTscSyncPolicy;
HalpSzMaxApicCluster;
HalpSzOneCpu;
HalpSzUseLegacyApicMode;
HalpSzUseLowMemory;
HalpSzUsePhysicalApic;
HalpSzUsePlatformClock;
HalpSzUsePlatformTick;
HalpTiledCr3Addresses;
HalpTimeStampAtResume;
HalpTimerClockIdleLock;
HalpTimerClockOwner;
HalpTimerClockState;
HalpTimerClockSwapViolationCount;
HalpTimerClockUpdateLock;
HalpTimerClockVector;
HalpTimerCmosApi;
HalpTimerCriticalClockSource;
HalpTimerCriticalClockSourceCount;
HalpTimerDeepestIdleState;
HalpTimerDelayedQueryHardwareCount;
HalpTimerDpc;
HalpTimerDriftReadjustmentCount;
HalpTimerDynamicTickDisableFlags;
HalpTimerDynamicTickDisabled;
HalpTimerDynamicTickEndTime;
HalpTimerDynamicTickExitLatencyHistory;
HalpTimerDynamicTickExitLatencyHistoryIndex;
HalpTimerDynamicTickStartTime;
HalpTimerDynamicTickViolationCount;
HalpTimerFrequenciesMeasured;
HalpTimerHeavilyPenalizedQpcCalls;
HalpTimerHvApicCallbackList;
HalpTimerHvReferenceCallbackList;
HalpTimerHypervisorReferenceTime;
HalpTimerIdleStateFallback;
HalpTimerLastAlwaysOnCounterValue;
HalpTimerLastDpc;
HalpTimerLastProblem;
HalpTimerLastProblemFile;
HalpTimerLastProblemLine;
HalpTimerLastProblemStatus;
HalpTimerLastProblemTimer;
HalpTimerLastRequestedClockIncrement;
HalpTimerLatencyMeasurementForced;
HalpTimerLatencyMeasurementMaximumOneShotTimer100ns;
HalpTimerLatencyMeasurementProcessor;
HalpTimerLoaderBlock;
HalpTimerMaximumAllowableDrift;
HalpTimerNextClockUpdateTime;
HalpTimerPcCpuApi;
HalpTimerPeriodicTimer;
HalpTimerPlatformClockSourceForced;
HalpTimerPlatformSourceForced;
HalpTimerProcessorFrequencyKnown;
HalpTimerProcessorsFrozen;
HalpTimerProfileLevel;
HalpTimerProfileVector;
HalpTimerProfilingCallback;
HalpTimerRegistrationAllowed;
HalpTimerRegistrationProblem;
HalpTimerRegistrationType;
HalpTimerRtcApi;
HalpTimerSavedClockTimer;
HalpTimerSavedPerformanceCounter;
HalpTimerSavedProcessorCounter;
HalpTimerTscBitShift;
HalpTscDeltas;
HalpTscFallbackLock;
HalpTscIdleStateInvariant;
HalpTscMaximumCounterSyncSpread;
HalpTscNopCycles;
HalpTscOnWake;
HalpTscPerformanceStateInvariant;
HalpTscProcessorFeatureFallback;
HalpTscRestoreValue;
HalpTscSkewOffset;
HalpTscSyncPolicy;
HalpTscSynchronizationFailureFallback;
HalpTscWaves;
HalpUsbControllerList;
HalpUseDbgPrint;
HalpUsedAllocDescriptors;
HalpVideoBiosPresent;
HalpVirtAddrForFlush;
HalpWAETDeviceFlags;
HalpWakeVector;
HalpWakeupState;
HalpWheaCpuid;
HalpWheaMappingLock;
HalpWheaMappingMceLock;
HalpWheaMappingMceReservation;
HalpWheaMappingNmiLock;
HalpWheaMappingNmiReservation;
HalpWheaMappingReservation;
HalpWheaReadMsr;
HalpWheaWriteMsr;
HalpWheaWritebackInvalidate;
HiberFreeCR3;
IoAdapterObjectType;
KdComPortInUse;
KdDbgDevice;
KdHvComPortInUse;
KeTickCount;
KiBugCheckData;
LastKnownGood;
MCE_NOTIFY_TYPE_GUID;
MEMORY_ERROR_SECTION_GUID;
MasterAdapter24;
MasterAdapter24V3;
MasterAdapter32;
MasterAdapter32V3;
MpstValidationError;
NMI_NOTIFY_TYPE_GUID;
NMI_SECTION_GUID;
PCIDeref;
PROCESSOR_GENERIC_ERROR_SECTION_GUID;
PcDmaChannelState;
PcDmaDispatch;
PicHalHardwareIdString;
PicHalName;
PmAcpiDispatchTable;
PmRegisters;
SecondaryGsivAssignedCount;
SecondaryGsivRangeSize;
SecondaryGsivRangeStart;
SecondaryIcList;
SecondaryIcListSpinLock;
SecondaryIcServicesEnabled;
SecondarySignalDpc;
SecondarySignalDpcRunning;
SecondarySignalList;
SecondarySignalListLock;
SystemPowerPhase;
True;
TscRequest;
VrtcTime;
WHEA_BUSCHECK_GUID;
WHEA_CACHECHECK_GUID;
WHEA_ERROR_PACKET_SECTION_GUID;
WHEA_MSCHECK_GUID;
WHEA_TLBCHECK_GUID;
XPF_MCA_SECTION_GUID;
XPF_PROCESSOR_ERROR_SECTION_GUID;
XmBitCount;
XmCmosAddress;
XmContext;
XmEmulatorInitialized;
XmGetPciData;
XmNumberPciBusses;
XmOpcodeControlTable1;
XmOpcodeControlTable2;
XmOpcodeFunctionTable;
XmOperandDecodeTable;
XmPCIConfigAddress;
XmPciBiosPresent;
XmSetPciData;
XmStatus;
_IMPORT_DESCRIPTOR_PSHED;
_IMPORT_DESCRIPTOR_kdcom;
_IMPORT_DESCRIPTOR_ntoskrnl;
_NLG_Destination;
_NULL_IMPORT_DESCRIPTOR;
__safe_se_handler_table;
__security_cookie;
__security_cookie_complement;
_imp_ExAcquireFastMutex;
_imp_ExReleaseFastMutex;
_imp_InterlockedPopEntrySList;
_imp_InterlockedPushEntrySList;
_imp_IoReadPartitionTable;
_imp_IoSetPartitionInformation;
_imp_IoWritePartitionTable;
_imp_IofCallDriver;
_imp_IofCompleteRequest;
_imp_KeAcquireInStackQueuedSpinLock;
_imp_KeAcquireInStackQueuedSpinLockAtDpcLevel;
_imp_KeReleaseInStackQueuedSpinLock;
_imp_KeReleaseInStackQueuedSpinLockFromDpcLevel;
_imp_KeTryToAcquireSpinLockAtDpcLevel;
_imp_KeUpdateRunTime;
_imp_KeUpdateTime;
_imp_KefAcquireSpinLockAtDpcLevel;
_imp_KefReleaseSpinLockFromDpcLevel;
_imp_Kei386EoiHelper;
_imp_KfAcquireSpinLock;
_imp_KfReleaseSpinLock;
_imp_KiCheckForSListAddress;
_imp_KiEndThreadAccountingPeriod;
_imp_KiEntropyQueueDpc;
_imp_ObfDereferenceObject;
_imp_ObfReferenceObject;
_imp_ObfReferenceObjectWithTag;
_imp__DbgPrint;
_imp__DbgPrintEx;
_imp__EmClientQueryRuleState;
_imp__EmpProviderRegister;
_imp__EtwEventEnabled;
_imp__EtwRegister;
_imp__EtwWrite;
_imp__EtwWriteEx;
_imp__ExAcquireSpinLockExclusive;
_imp__ExAcquireSpinLockShared;
_imp__ExAllocatePoolWithTag;
_imp__ExCreateCallback;
_imp__ExFreePoolWithTag;
_imp__ExLocalTimeToSystemTime;
_imp__ExQueueWorkItem;
_imp__ExRealTimeIsUniversal;
_imp__ExRegisterCallback;
_imp__ExReleaseSpinLockExclusive;
_imp__ExReleaseSpinLockShared;
_imp__ExSystemTimeToLocalTime;
_imp__HalDispatchTable;
_imp__HalPrivateDispatchTable;
_imp__InbvCheckDisplayOwnership;
_imp__IoAdapterObjectType;
_imp__IoAllocateMdl;
_imp__IoAttachDeviceToDeviceStack;
_imp__IoBuildDeviceIoControlRequest;
_imp__IoBuildPartialMdl;
_imp__IoBuildSynchronousFsdRequest;
_imp__IoCreateDevice;
_imp__IoCreateDriver;
_imp__IoDeleteDevice;
_imp__IoFreeMdl;
_imp__IoGetAttachedDeviceReference;
_imp__IoGetDeviceObjectPointer;
_imp__IoGetDevicePropertyData;
_imp__IoGetStackLimits;
_imp__IoOpenDeviceRegistryKey;
_imp__IoRegisterPlugPlayNotification;
_imp__IoReportDetectedDevice;
_imp__IoReportHalResourceUsage;
_imp__KdPowerTransition;
_imp__KdRestore;
_imp__KeAddGroupAffinityEx;
_imp__KeAddProcessorAffinityEx;
_imp__KeAddProcessorGroupAffinity;
_imp__KeAndAffinityEx;
_imp__KeAndGroupAffinityEx;
_imp__KeBugCheckEx;
_imp__KeCountSetBitsAffinityEx;
_imp__KeCountSetBitsGroupAffinity;
_imp__KeDispatchSecondaryInterrupt;
_imp__KeEnumerateNextProcessor;
_imp__KeFindConfigurationEntry;
_imp__KeFindConfigurationNextEntry;
_imp__KeFindFirstSetRightGroupAffinity;
_imp__KeForceEnableNx;
_imp__KeGetCurrentProcessorNumberEx;
_imp__KeGetNextTimerExpirationDueTime;
_imp__KeGetProcessorIndexFromNumber;
_imp__KeGetProcessorNumberFromIndex;
_imp__KeGetRecommendedSharedDataAlignment;
_imp__KeHwPolicyLocateResource;
_imp__KeInitializeAffinityEx;
_imp__KeInitializeDeviceQueue;
_imp__KeInitializeDpc;
_imp__KeInitializeEnumerationContext;
_imp__KeInitializeEnumerationContextFromGroup;
_imp__KeInitializeEvent;
_imp__KeInitializeMutex;
_imp__KeInitializeSecondaryInterruptServices;
_imp__KeInitializeSpinLock;
_imp__KeInitializeTimer;
_imp__KeInitializeTimerEx;
_imp__KeInsertDeviceQueue;
_imp__KeInsertQueueDpc;
_imp__KeIpiGenericCall;
_imp__KeIsEmptyAffinityEx;
_imp__KeLoadMTRR;
_imp__KePollFreezeExecution;
_imp__KeProcessorGroupAffinity;
_imp__KeProfileInterruptWithSource;
_imp__KeQueryActiveProcessorAffinity;
_imp__KeQueryActiveProcessorCountEx;
_imp__KeQueryInterruptTime;
_imp__KeQueryInterruptTimePrecise;
_imp__KeQueryMaximumProcessorCountEx;
_imp__KeQuerySystemTime;
_imp__KeQuerySystemTimePrecise;
_imp__KeQueryTimeIncrement;
_imp__KeRegisterBugCheckCallback;
_imp__KeRemoveDeviceQueue;
_imp__KeRemoveProcessorAffinityEx;
_imp__KeRemoveProcessorGroupAffinity;
_imp__KeRevertToUserGroupAffinityThread;
_imp__KeSaveStateForHibernate;
_imp__KeSetEvent;
_imp__KeSetProfileIrql;
_imp__KeSetSystemGroupAffinityThread;
_imp__KeSetTimeIncrement;
_imp__KeSetTimerEx;
_imp__KeStallWhileFrozen;
_imp__KeTickCount;
_imp__KeUpdateTimeAssist;
_imp__KeWaitForSingleObject;
_imp__KeWriteProtectPAT;
_imp__KiBugCheckData;
_imp__KiCpuId;
_imp__KiDeliverApc;
_imp__KiDispatchInterrupt;
_imp__KiIpiServiceRoutine;
_imp__MmAllocateContiguousNodeMemory;
_imp__MmAllocateMappingAddress;
_imp__MmAllocatePagesForMdl;
_imp__MmBuildMdlForNonPagedPool;
_imp__MmFreeContiguousMemory;
_imp__MmFreeMappingAddress;
_imp__MmFreePagesFromMdl;
_imp__MmGetPhysicalAddress;
_imp__MmGetSystemRoutineAddress;
_imp__MmLockPagableDataSection;
_imp__MmLockPagableSectionByHandle;
_imp__MmMapIoSpace;
_imp__MmMapLockedPagesSpecifyCache;
_imp__MmMapLockedPagesWithReservedMapping;
_imp__MmSizeOfMdl;
_imp__MmUnlockPagableImageSection;
_imp__MmUnmapIoSpace;
_imp__MmUnmapLockedPages;
_imp__MmUnmapReservedMapping;
_imp__ObCreateObject;
_imp__ObInsertObject;
_imp__ObReferenceObjectByHandle;
_imp__ObReferenceObjectByPointer;
_imp__PoAllProcessorsDeepIdle;
_imp__PoFxActivateComponent;
_imp__PoFxCompleteIdleCondition;
_imp__PoFxRegisterCoreDevice;
_imp__PoFxStartDevicePowerManagement;
_imp__PoGetProcessorIdleAccounting;
_imp__PoNotifyDisableDynamicTick;
_imp__PoSetFixedWakeSource;
_imp__PoSetHiberRange;
_imp__PoStartNextPowerIrp;
_imp__PsGetCurrentProcessId;
_imp__PshedGetErrorSourceInfo;
_imp__PshedIsSystemWheaEnabled;
_imp__PshedMarkHiberPhase;
_imp__PshedRetrieveErrorInfo;
_imp__READ_REGISTER_UCHAR;
_imp__READ_REGISTER_ULONG;
_imp__READ_REGISTER_USHORT;
_imp__RtlAnsiStringToUnicodeString;
_imp__RtlAreBitsClear;
_imp__RtlClearAllBits;
_imp__RtlClearBits;
_imp__RtlCmEncodeMemIoResource;
_imp__RtlCompareMemory;
_imp__RtlCopyUnicodeString;
_imp__RtlEqualString;
_imp__RtlFindClearBits;
_imp__RtlFindClearBitsAndSet;
_imp__RtlFindFirstRunClear;
_imp__RtlFindLeastSignificantBit;
_imp__RtlFindNextForwardRunClear;
_imp__RtlFindSetBitsAndClear;
_imp__RtlFreeUnicodeString;
_imp__RtlGUIDFromString;
_imp__RtlInitAnsiString;
_imp__RtlInitString;
_imp__RtlInitUnicodeString;
_imp__RtlInitializeBitMap;
_imp__RtlIntegerToUnicodeString;
_imp__RtlMoveMemory;
_imp__RtlNumberOfClearBits;
_imp__RtlNumberOfSetBitsUlongPtr;
_imp__RtlQueryRegistryValues;
_imp__RtlRaiseException;
_imp__RtlSetAllBits;
_imp__RtlSetBit;
_imp__RtlSetBits;
_imp__RtlStringFromGUID;
_imp__RtlTestBit;
_imp__RtlTimeFieldsToTime;
_imp__RtlTimeToTimeFields;
_imp__RtlUnwind;
_imp__WRITE_REGISTER_UCHAR;
_imp__WRITE_REGISTER_ULONG;
_imp__WRITE_REGISTER_USHORT;
_imp__WheaConfigureErrorSource;
_imp__WheaGetErrorSource;
_imp__WheaInitializeRecordHeader;
_imp__WheaReportHwError;
_imp__ZwClose;
_imp__ZwCreateKey;
_imp__ZwDeleteValueKey;
_imp__ZwEnumerateValueKey;
_imp__ZwOpenFile;
_imp__ZwOpenKey;
_imp__ZwPowerInformation;
_imp__ZwQueryKey;
_imp__ZwQueryLicenseValue;
_imp__ZwQueryValueKey;
_imp__ZwSetValueKey;
_imp___alldiv;
_imp___alldvrm;
_imp___allmul;
_imp___alloca_probe;
_imp___allshl;
_imp___aulldiv;
_imp___aulldvrm;
_imp___aullshr;
_imp___stricmp;
_imp___strupr;
_imp___vsnwprintf;
_imp___wcsicmp;
_imp__atoi;
_imp__atol;
_imp__memcmp;
_imp__memcpy;
_imp__memset;
_imp__qsort;
_imp__strncmp;
_imp__strncpy_s;
_imp__strstr;
_imp__swprintf_s;
_imp__wcscpy_s;
_imp__wcsrchr;
_imp__wcstoul;
_load_config_used;
rgzBadHal;
rgzConfigurationData;
rgzIdentifier;
rgzMultiFunctionAdapter;
rgzPCICardList;
rgzRTCNotFound;
x86BiosBufferAllocated;
x86BiosFrameBuffer;
x86BiosInitialized;
x86BiosIoMemory;
x86BiosIoSpace;
x86BiosLowMemory;
x86BiosScratchMemory;
x86BiosTransferLength;
x86BiosTransferMemory;
PSHED_NULL_THUNK_DATA;
kdcom_NULL_THUNK_DATA;
ntoskrnl_NULL_THUNK_DATA;

 ?? ::DFIOBLLK::`string'();
 ?? ::FNODOBFM::`string'();
 ?? ::NNGAKEGL::`string'();
 ?? ::OKHAJAOM::`string'();
 ?? ::PBOPGDP::`string'();
Amd64AllocateCounter();
Amd64ConfigureCounter();
Amd64DisableMonitoring();
Amd64EnableMonitoring();
Amd64FreeCounter();
Amd64GetProfileDescriptor();
Amd64InitializeProfiling();
Amd64OverflowHandler();
Amd64QueryInformation();
Amd64RestartProfiling();
Amd64SetInterval();
ArbDeleteMmConfigRange();
ArbInitializeMmConfigRange();
DefaultDisableMonitoring();
DefaultEnableMonitoring();
DefaultInitializeProfiling();
DefaultOverflowHandler();
DefaultQueryInformation();
DefaultRestartProfiling();
DefaultSetInterval();
Dr_Dmai_a();
Dr_HPrI_a();
Dr_Hipi_a();
Dr_Hpf_a();
Dr_LocalError_a();
Dr_Reboot_a();
Dr_StubInt_a();
Dr_Timerci_a();
Dr_Timerstub_a();
EmonAllocateCounter();
EmonConfigureCounter();
EmonDisableMonitoring();
EmonEnableMonitoring();
EmonFreeCounter();
EmonGetProfileDescriptor();
EmonInitializeProfiling();
EmonOverflowHandler();
EmonQueryInformation();
EmonRestartProfiling();
EmonSetInterval();
ForceSEHExceptionHandler();
GetPdeAddressEx();
GetPteAddress();
GsIsReadTimeStampCounterAvailable();
HalAcpiEmCheckOperator();
HalAcpiGetAllTablesDispatch();
HalAcpiGetFacsMappingDispatch();
HalAcpiGetRsdpDispatch();
HalAcpiGetTable();
HalAcpiGetTableDispatch();
HalAcpiGetTableEx();
HalAcquireDisplayOwnership();
HalAdjustResourceList();
HalAllProcessorsStarted();
HalAllocateAdapterChannel();
HalAllocateAdapterChannelEx();
HalAllocateAdapterChannelV2();
HalAllocateCommonBuffer();
HalAllocateCommonBufferEx();
HalAllocateCommonBufferV2();
HalAllocateCrashDumpRegisters();
HalAllocateHardwareCounters();
HalAssignSlotResources();
HalBeginSystemInterrupt();
HalBugCheckSystem();
HalBuildMdlFromScatterGatherListV2();
HalBuildMdlFromScatterGatherListV3();
HalBuildScatterGatherListEx();
HalBuildScatterGatherListV2();
HalBuildScatterGatherListV3();
HalCalculateScatterGatherListSizeV2();
HalCalculateScatterGatherListSizeV3();
HalCalibratePerformanceCounter();
HalCancelAdapterChannel();
HalCancelMappedTransfer();
HalClearSoftwareInterrupt();
HalConfigureAdapterChannel();
HalConvertDeviceIdtToIrql();
HalDisableInterrupt();
HalDisplayString();
HalDmaAllocateCrashDumpRegistersEx();
HalDmaFreeCrashDumpRegistersEx();
HalEfiGetEnvironmentVariable();
HalEfiGetTime();
HalEfiQueryCapsuleCapabilities();
HalEfiResetSystem();
HalEfiSetEnvironmentVariable();
HalEfiSetTime();
HalEfiUpdateCapsule();
HalEnableInterrupt();
HalEndSystemInterrupt();
HalEnumerateEnvironmentVariablesEx();
HalFlushAdapterBuffersEx();
HalFlushCommonBuffer();
HalFreeAdapterObject();
HalFreeCommonBuffer();
HalFreeHardwareCounters();
HalGetAdapter();
HalGetAdapterV2();
HalGetAdapterV3();
HalGetBusData();
HalGetBusDataByOffset();
HalGetDmaAdapterInfo();
HalGetDmaAlignment();
HalGetDmaTransferInfo();
HalGetEnvironmentVariable();
HalGetEnvironmentVariableEx();
HalGetInterruptTargetInformation();
HalGetInterruptVector();
HalGetMemoryCachingRequirements();
HalGetMessageRoutingInfo();
HalGetProcessorIdByNtNumber();
HalGetScatterGatherList();
HalGetScatterGatherListEx();
HalGetVectorInput();
HalHandleNMI();
HalInitSystem();
HalInitializeBios();
HalInitializeDmaTransferContext();
HalInitializeOnResume();
HalInitializeProcessor();
HalMakeBeep();
HalMapIoSpace();
HalMapTransferEx();
HalMatchAcpiCreatorRevision();
HalMatchAcpiFADTBootArch();
HalMatchAcpiOemId();
HalMatchAcpiOemRevision();
HalMatchAcpiOemTableId();
HalMatchAcpiRevision();
HalMcUpdateReadPCIConfig();
HalProcessorIdle();
HalPutDmaAdapter();
HalPutDmaAdapterV2();
HalPutDmaAdapterV3();
HalPutScatterGatherList();
HalPutScatterGatherListV2();
HalPutScatterGatherListV3();
HalQueryDisplayParameters();
HalQueryEnvironmentVariableInfoEx();
HalQueryMaximumProcessorCount();
HalQueryRealTimeClock();
HalReadBootRegister();
HalReadDmaCounter();
HalReadDmaCounterV3();
HalRealAllocateAdapterChannelV2();
HalRealAllocateAdapterChannelV3();
HalRegisterDynamicProcessor();
HalRegisterErrataCallbacks();
HalRegisterPermanentAddressUsage();
HalReportResourceUsage();
HalRequestClockInterrupt();
HalRequestIpi();
HalRequestIpiSpecifyVector();
HalRequestSoftwareInterrupt();
HalReturnToFirmware();
HalSendNMI();
HalSetBusData();
HalSetBusDataByOffset();
HalSetDisplayParameters();
HalSetEnvironmentVariable();
HalSetEnvironmentVariableEx();
HalSetProfileInterval();
HalSetRealTimeClock();
HalSetTimeIncrement();
HalSetTimerProblem();
HalSocGetAcpiTable();
HalSocRequestApi();
HalSocRequestConfigurationData();
HalStartDynamicProcessor();
HalStartNextProcessor();
HalStartProfileInterrupt();
HalStopProfileInterrupt();
HalSystemVectorDispatchEntry();
HalTranslateBusAddress();
HalUnmapIoSpace();
HalUpdateTimerCapabilities();
HalWriteBootRegister();
HalacpIrqTranslatorDereference();
HalacpiIrqTranslateResourceRequirementsIsa();
HalacpiIrqTranslateResourcesIsa();
HalacpiIrqTranslatorReference();
HaliAcpiMachineStateInit();
HaliAcpiQueryFlags();
HaliAcpiSleep();
HaliAcpiTimerCarry();
HaliAddInterruptRemapping();
HaliGetDmaAdapter();
HaliGetInterruptTranslator();
HaliHaltSystem();
HaliHandlePCIConfigSpaceAccess();
HaliInitPnpDriver();
HaliInitPowerManagement();
HaliLocateHiberRanges();
HaliPciInterfaceReadConfig();
HaliPciInterfaceWriteConfig();
HaliQuerySystemInformation();
HaliRemoveInterruptRemapping();
HaliSetMaxLegacyPciBusNumber();
HaliSetPciErrorHandlerCallback();
HaliSetSystemInformation();
HaliSetWakeAlarm();
HaliWheaInitProcessorGenericSection();
Halp8254TimerAcknowledgeInterrupt();
Halp8254TimerArm();
Halp8254TimerDiscover();
Halp8254TimerInitialize();
Halp8254TimerStop();
HalpAcpiAllocateMemory();
HalpAcpiAoacCapable();
HalpAcpiCacheOverrideTables();
HalpAcpiCacheTable();
HalpAcpiCalculateCacheSizeForOverrideTables();
HalpAcpiCheckAndMapTable();
HalpAcpiCopyBiosTable();
HalpAcpiDetectMachineSpecificActions();
HalpAcpiFallbackOnLegacyConfigMethod();
HalpAcpiFindRsdp();
HalpAcpiFlushCache();
HalpAcpiGetAllTablesWork();
HalpAcpiGetCachedTable();
HalpAcpiGetFacsMapping();
HalpAcpiGetRsdt();
HalpAcpiGetTable();
HalpAcpiGetTableFromBios();
HalpAcpiGetTableWork();
HalpAcpiIBMExaMatch();
HalpAcpiIBMVigilMatch();
HalpAcpiInitDiscard();
HalpAcpiInitSystem();
HalpAcpiInitializePmRegisters();
HalpAcpiIsCachedTableCompromised();
HalpAcpiPmRegisterAvailable();
HalpAcpiPmRegisterRead();
HalpAcpiPmRegisterReadPciConfigSpace();
HalpAcpiPmRegisterReadPort();
HalpAcpiPmRegisterReadRegister();
HalpAcpiPmRegisterWrite();
HalpAcpiPmRegisterWritePciConfigSpace();
HalpAcpiPmRegisterWritePort();
HalpAcpiPmRegisterWriteRegister();
HalpAcpiPostSleep();
HalpAcpiPreSleep();
HalpAcpiRealTimeToUtcTime();
HalpAcpiSetupPmRegister();
HalpAcpiSetupPmRegisterLegacy();
HalpAcpiTableCacheInit();
HalpAcpiUnisysHorizonMatch();
HalpAcpiValidateAcpiTable();
HalpAcquireCmosSpinLock();
HalpAcquireHighLevelLock();
HalpAcquirePccInterface();
HalpAcquireSecondaryIcEntryExclusive();
HalpAcquireSystemHardwareSpinLock();
HalpAddAdapterToList();
HalpAddAdapterToSystemList();
HalpAddDevice();
HalpAddMcaToMemoryErrorSection();
HalpAddMcaToProcessorGenericSection();
HalpAddMcaToProcessorSpecificSection();
HalpAdjustWakeSecondsDue();
HalpAllocPhysicalMemory();
HalpAllocateAdapterCallbackV2();
HalpAllocateAdapterCallbackV3();
HalpAllocateAdapterChannel();
HalpAllocateCR3Root();
HalpAllocateDmaChannels();
HalpAllocateDmaResources();
HalpAllocateEarlyPages();
HalpAllocateGsivForSecondaryInterrupt();
HalpAllocateHalCounters();
HalpAllocateMapRegisters();
HalpAllocateNumaConfigData();
HalpAllocatePmcCounterSet();
HalpApic1EndOfInterrupt();
HalpApic1ReadRegister();
HalpApic1WaitForIcr();
HalpApic1WriteIcr();
HalpApic1WriteRegister();
HalpApicClearLocalUnitError();
HalpApicConvertFromRte();
HalpApicConvertId();
HalpApicConvertToRte();
HalpApicDeinitializeLocalUnit();
HalpApicDescribeLines();
HalpApicDescribeLocalLines();
HalpApicDiscover();
HalpApicGenerateMessage();
HalpApicGetLocalUnitError();
HalpApicHvUpdateCallback();
HalpApicInitializeIoUnit();
HalpApicInitializeLocalUnit();
HalpApicQueryAndGetSource();
HalpApicRegisterIoUnit();
HalpApicReplayLocalInterrupts();
HalpApicReplaySendSelfIpi();
HalpApicRequestInterrupt();
HalpApicSaveLocalInterrupts();
HalpApicSetLineState();
HalpApicSetLogicalId();
HalpApicSetPriority();
HalpApicSetupRegisterAccess();
HalpApicStartProcessor();
HalpApicTimerAcknowledgeInterrupt();
HalpApicTimerArm();
HalpApicTimerDiscover();
HalpApicTimerInitialize();
HalpApicTimerIsInvariant();
HalpApicTimerQueryCounter();
HalpApicTimerSetInterruptVector();
HalpApicTimerStop();
HalpApicWriteEndOfInterrupt();
HalpArmAcpiWakeAlarm();
HalpAssignSlotResourcesStub();
HalpAuditAcpiTables();
HalpAuditAllocateRsdtArrayTable();
HalpAuditEnumerateRsdts();
HalpAuditEnumerateRsdtsInRange();
HalpAuditGetExtendedBiosDataArea();
HalpAuditQuerySlicAddresses();
HalpAuditSelectRsdtOrXsdt();
HalpAuditSlicTables();
HalpBiosDisplayReset();
HalpBuildResumeStructures();
HalpBuildScatterGatherList();
HalpCalculateDivisorRate();
HalpCalculateScatterGatherListSize();
HalpCalculateTickCount();
HalpCallWakeAlarmDriver();
HalpChannelAscendingSort();
HalpChannelAssignmentSort();
HalpChannelInitializeStaticConfiguration();
HalpChannelMpnIdSort();
HalpChannelPowerRequest();
HalpCheckFixedWakeSources();
HalpCheckInterruptType();
HalpCheckLowMemoryPostSleep();
HalpCheckLowMemoryPreSleep();
HalpCheckNumaConfiguration();
HalpCheckPowerButton();
HalpCheckSecondaryInterruptSupported();
HalpCheckWakeupTimeAndAdjust();
HalpClaimDebugResource();
HalpClearCr4MCEBit();
HalpClearSlpSmiStsInICH();
HalpCmcDeferredRoutine();
HalpCmcInitializeErrorPacketContents();
HalpCmcInitializePolling();
HalpCmcPollProcessor();
HalpCmcStartPolling();
HalpCmcWorkerRoutine();
HalpCmosNullReference();
HalpCmosRangeHandler();
HalpCollectPmcCounters();
HalpComplete440BXWorkaround();
HalpConsumeLowMemory();
HalpConvertEfiToNtStatus();
HalpCopyFirmwareAndRuntimeInformation();
HalpCorrectErrSrc();
HalpCorrectGenericErrSrc();
HalpCorrectNMIErrSrc();
HalpCpuID();
HalpCreateErrorRecord();
HalpCreateMachineCheckErrorRecord();
HalpCreateMcaMemoryErrorRecord();
HalpCreateMcaProcessorErrorRecord();
HalpCreateNMIErrorRecord();
HalpCreateSecondaryIcEntry();
HalpDbgInitSystem();
HalpDeleteSecondaryIcEntry();
HalpDiagInitDiscard();
HalpDiagInitSystem();
HalpDiagLogClockModeSwitch();
HalpDiagRegisterLogRoutine();
HalpDisableSecondaryInterrupt();
HalpDispatchPnp();
HalpDispatchPower();
HalpDispatchSoftwareInterrupt();
HalpDispatchSystemStateTransition();
HalpDispatchWmi();
HalpDmaAcquireBufferMappings();
HalpDmaAllocateChildAdapterV2();
HalpDmaAllocateChildAdapterV3();
HalpDmaAllocateContiguousMemory();
HalpDmaAllocateContiguousPagesFromContiguousPool();
HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevelV2();
HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevelV3();
HalpDmaAllocateContiguousPagesFromContiguousPoolV2();
HalpDmaAllocateContiguousPagesFromContiguousPoolV3();
HalpDmaAllocateEmergencyResources();
HalpDmaAllocateLocalContiguousPool();
HalpDmaAllocateLocalScatterPool();
HalpDmaAllocateMapRegisters();
HalpDmaAllocateMapRegistersAtHighLevel();
HalpDmaAllocateMappingResources();
HalpDmaAllocateNewTranslationBuffer();
HalpDmaAllocateReservedMapping();
HalpDmaAllocateReservedMappingArray();
HalpDmaAllocateScatterMemory();
HalpDmaAllocateScatterPagesFromContiguousPool();
HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV2();
HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV3();
HalpDmaAllocateScatterPagesFromContiguousPoolV2();
HalpDmaAllocateScatterPagesFromContiguousPoolV3();
HalpDmaAllocateScatterPagesFromScatterPool();
HalpDmaAllocateScatterPagesFromScatterPoolAtHighLevelV2();
HalpDmaAllocateScatterPagesFromScatterPoolAtHighLevelV3();
HalpDmaAllocateScatterPagesFromScatterPoolV2();
HalpDmaAllocateScatterPagesFromScatterPoolV3();
HalpDmaAllocateTranslationBuffer();
HalpDmaCheckMdlAccessibility();
HalpDmaCommitContiguousMapBuffers();
HalpDmaCommitScatterMapBuffers();
HalpDmaConfigureInterrupt();
HalpDmaControllerCancelTransfer();
HalpDmaControllerDpcRoutine();
HalpDmaControllerFlushChannel();
HalpDmaControllerInitializeController();
HalpDmaControllerInterruptRoutine();
HalpDmaControllerProgramChannel();
HalpDmaControllerQueryMaxFragments();
HalpDmaControllerReadDmaCounter();
HalpDmaControllerValidateRequestLineBinding();
HalpDmaDequeueAdapter();
HalpDmaFinalizeDoubleBufferingDisposition();
HalpDmaFlushBuffer();
HalpDmaFlushBufferWithEmergencyResources();
HalpDmaFlushContiguousTransferV2();
HalpDmaFlushContiguousTransferV3();
HalpDmaFlushScatterTransferV2();
HalpDmaFlushScatterTransferV3();
HalpDmaForceAllocation();
HalpDmaFreeChildAdapter();
HalpDmaFreeChildAdapterWorker();
HalpDmaFreeCrashDumpRegisters();
HalpDmaFreeMapRegisters();
HalpDmaGetAdapterVersion();
HalpDmaGetTranslationEntries();
HalpDmaGrowContiguousMapBuffers();
HalpDmaGrowScatterMapBuffers();
HalpDmaInit();
HalpDmaInitDiscard();
HalpDmaInitDmaInterrupts();
HalpDmaInitMemory();
HalpDmaInitPowerManagement();
HalpDmaInitSystem();
HalpDmaInitializeControllers();
HalpDmaInitializeMasterAdapter();
HalpDmaLinkContiguousTranslations();
HalpDmaMapContiguousTransferV2();
HalpDmaMapContiguousTransferV3();
HalpDmaMapScatterTransferV2();
HalpDmaMapScatterTransferV3();
HalpDmaMarkHiberAdapter();
HalpDmaNextContiguousPiece();
HalpDmaNextContiguousPieceV2();
HalpDmaNextContiguousPieceV3();
HalpDmaPowerCriticalTransitionCallback();
HalpDmaPrependTranslations();
HalpDmaProcessMapRegisterQueueV2();
HalpDmaProcessMapRegisterQueueV3();
HalpDmaQueueAdapter();
HalpDmaReleaseBufferMappings();
HalpDmaRemoveAdapterFromChannelQueue();
HalpDmaRemoveAdapterFromMasterQueue();
HalpDmaReturnPageToOwner();
HalpDmaReturnPageToSource();
HalpDmaReturnToContiguousPool();
HalpDmaReturnToScatterPool();
HalpDmaStartWcb();
HalpDmaSyncMapBuffers();
HalpDmaSyncMapBuffersWithEmergencyResources();
HalpDmaTranslationEntryToIndex();
HalpDmaZeroMapBuffers();
HalpDpGetInterruptReplayState();
HalpDpInitDiscard();
HalpDpInitSystem();
HalpDpOfflineProcessorForReplace();
HalpDpPostReplace();
HalpDpPostReplaceInitialization();
HalpDpPreReplace();
HalpDpQueryMaxHotPlugMemoryAddress();
HalpDpReplaceBegin();
HalpDpReplaceControl();
HalpDpReplaceEnd();
HalpDpReplaceTarget();
HalpDpReplayInterrupts();
HalpDpSortApicList();
HalpDpStartProcessor();
HalpDriverEntry();
HalpDynamicDeviceInterfaceNotification();
HalpEfiGetSystemResourceTableEntries();
HalpEfiInitialization();
HalpEfiInitializeOnResume();
HalpEnableSecondaryInterrupt();
HalpEndOfBoot();
HalpEnlightenmentInitialize();
HalpErrataInitDiscard();
HalpErrataInitSystem();
HalpExtBuildResourceIdString();
HalpExtGetAcpiTable();
HalpExtGetNextResourceDescriptor();
HalpExtInitExtensions();
HalpExtRegisterResourceDescriptor();
HalpFindAdapterByRequestLine();
HalpFindBusAddressTranslation();
HalpFindDmaControllerByRequestLine();
HalpFindInterruptController();
HalpFindSecondaryIcEntry();
HalpFindTimer();
HalpFirmwareInitDiscard();
HalpFirmwareInitSystem();
HalpFlushAndWait();
HalpFlushMapBuffers();
HalpFlushTLB();
HalpFreeDmaChannels();
HalpFreeNvsBuffers();
HalpFreePmcCounterSet();
HalpFreeResumeStructures();
HalpGenericPolledDpcRoutine();
HalpGenericPolledWorkerRoutine();
HalpGetAcpiStaticNumaTopology();
HalpGetChipHacks();
HalpGetCmosCenturyByte();
HalpGetCmosData();
HalpGetCpuInfo();
HalpGetDisplayBiosInformation();
HalpGetDynamicDevicePointer();
HalpGetHotPlugMemoryInfo();
HalpGetMcaPcrContext();
HalpGetNumaProcMemoryCount();
HalpGetPCIData();
HalpGetPlatformTimerInformation();
HalpGetProcessorBrandString();
HalpGetResourceSortValue();
HalpGrowMapBufferWorker();
HalpHalExtInitSystem();
HalpHandleMaskUnmaskSecondaryInterrupt();
HalpHandlePreviousMcaErrors();
HalpHandlePreviousMcaErrorsOnProcessor();
HalpHpetAcknowledgeInterrupt();
HalpHpetArmTimer();
HalpHpetDiscover();
HalpHpetInitialize();
HalpHpetLosslessRateChange();
HalpHpetQueryCounter();
HalpHpetSetMessageInterruptRouting();
HalpHpetStop();
HalpHvCounterInitialize();
HalpHvCounterQueryCounter();
HalpHvCounterUpdateCallback();
HalpHvCpuid();
HalpHvDiscover();
HalpHvEpCpuid();
HalpHvEpReadMsr();
HalpHvEpWriteMsr();
HalpHvEpWritebackInvalidate();
HalpHvGetApicFrequency();
HalpHvGetTscFrequency();
HalpHvInitDiscard();
HalpHvInitMcaStatusMsrCache();
HalpHvInitSystem();
HalpHvIsFrequencyAvailable();
HalpHvIsReferenceTscConfigured();
HalpHvMapDeviceMsiRange();
HalpHvMapIoApicDeviceInterrupt();
HalpHvTimerAcknowledgeInterrupt();
HalpHvTimerArm();
HalpHvTimerInitialize();
HalpHvTimerSetInterruptVector();
HalpHvTimerStop();
HalpHwPerfCntInitSystem();
HalpInitBootTable();
HalpInitChipHacks();
HalpInitGenericErrorSourceEntry();
HalpInitGenericErrorSourcePollingRoutine();
HalpInitMemoryCachingRequirementsTable();
HalpInitNonBusHandler();
HalpInitSystemHelper();
HalpInitSystemPhase0();
HalpInitSystemPhase1();
HalpInitializeCmos();
HalpInitializeConfigurationFromMadt();
HalpInitializeErrSrc();
HalpInitializeGenericErrorSource();
HalpInitializeInterruptRemappingBspEarly();
HalpInitializeInterrupts();
HalpInitializeInterruptsBspLate();
HalpInitializeInterruptsPn();
HalpInitializeLegacyMcaException();
HalpInitializeMce();
HalpInitializeNMI();
HalpInitializePciBus();
HalpInitializePnTimers();
HalpInitializeProfiling();
HalpInitializeSecondaryInterruptServices();
HalpInitializeTimers();
HalpInitializeWheaPhysicalMappings();
HalpInsertSecondarySignalList();
HalpInterruptAddTarget();
HalpInterruptApplyOverrides();
HalpInterruptBuildGlobalStartupStub();
HalpInterruptBuildStartupStub();
HalpInterruptCheckForSoftwareInterrupt();
HalpInterruptControllerInUse();
HalpInterruptDeinitializeLocalUnit();
HalpInterruptDestinationToTarget();
HalpInterruptDpReplaceBegin();
HalpInterruptEnableNmi();
HalpInterruptEnablePerformanceEvents();
HalpInterruptEnumerateUnmaskedInterrupts();
HalpInterruptEnumerateUnmaskedSecondaryInterrupts();
HalpInterruptFindBestRouting();
HalpInterruptFindLines();
HalpInterruptFindLinesForGsiRange();
HalpInterruptGenerateMessage();
HalpInterruptGetApicVersion();
HalpInterruptGetHighestPriorityInterrupt();
HalpInterruptGetLocalIdentifier();
HalpInterruptGetNextProcessorLocalId();
HalpInterruptGetParkingPageInformation();
HalpInterruptGetPriority();
HalpInterruptGsiToLine();
HalpInterruptInitDiscard();
HalpInterruptInitPowerManagement();
HalpInterruptInitSystem();
HalpInterruptInitializeController();
HalpInterruptInitializeGlobals();
HalpInterruptInitializeIpis();
HalpInterruptInitializeLocalUnit();
HalpInterruptIsGsiValid();
HalpInterruptIsMsiSupported();
HalpInterruptIsPicStateIntact();
HalpInterruptJumpToVector();
HalpInterruptLineToGsi();
HalpInterruptLocalErrorService();
HalpInterruptLookupController();
HalpInterruptLowerHardwareIrql();
HalpInterruptMarkProcessorStarted();
HalpInterruptMaskAcpi();
HalpInterruptMaskLevelTriggeredLines();
HalpInterruptModel();
HalpInterruptOfflineProcessor();
HalpInterruptParseAcpiTables();
HalpInterruptParseMadt();
HalpInterruptPicLine();
HalpInterruptPowerChange();
HalpInterruptPowerComponentActiveCallback();
HalpInterruptPowerComponentIdleCallback();
HalpInterruptPowerCriticalTransitionCallback();
HalpInterruptQueryProcessorRestartEntryPoint();
HalpInterruptRebootService();
HalpInterruptRegisterController();
HalpInterruptRegisterDynamicProcessor();
HalpInterruptRegisterLine();
HalpInterruptReinitialize();
HalpInterruptReinitializeThisProcessor();
HalpInterruptRemap();
HalpInterruptRemapFixedLines();
HalpInterruptRemappingEnabled();
HalpInterruptRequestInterrupt();
HalpInterruptRequestSecondaryInterrupt();
HalpInterruptResetAllProcessors();
HalpInterruptResetThisProcessor();
HalpInterruptRestoreAllControllerState();
HalpInterruptRestoreClock();
HalpInterruptRestoreController();
HalpInterruptSelectController();
HalpInterruptSendIpi();
HalpInterruptSetIdtEntry();
HalpInterruptSetLineState();
HalpInterruptSetLineStateInternal();
HalpInterruptSetMsiOverride();
HalpInterruptSetProblemEx();
HalpInterruptSetProcessorStartContext();
HalpInterruptSetRemappedLineStateInternal();
HalpInterruptStandardEndOfInterrupt();
HalpInterruptStartProcessor();
HalpInterruptStubService();
HalpInterruptSwapProcessorIdentifiers();
HalpInterruptUnmap();
HalpInterruptUnmaskLevelTriggeredLines();
HalpInterruptUpdateLinesPostSwap();
HalpInvalidateIRTCacheEntry();
HalpInvokeIsrForGsiv();
HalpIoDelay();
HalpIrtAllocateIndex();
HalpIrtFreeIndex();
HalpIsHardwareWatchdogTimerPresent();
HalpIsInterruptTypeSecondary();
HalpIsMicrosoftCompatibleHvLoaded();
HalpIsPartitionCpuManager();
HalpIsPteFree();
HalpKdAllocateAddressRange();
HalpKdConfigureCardBusSocket();
HalpKdConfigureDebuggingDevice();
HalpKdConfigureIntegratedDevice();
HalpKdDefaultCallback();
HalpKdDeregisterDebuggingDevice();
HalpKdDeviceEquals();
HalpKdEnumerateDebuggingDevices();
HalpKdExtendAddressRange();
HalpKdFindFreeResourceLimits();
HalpKdFindPciDebuggingDevice();
HalpKdGetBarRange();
HalpKdGetCardBusBridgeResources();
HalpKdGetLengthFromBar();
HalpKdGetPciBridgeResources();
HalpKdMatchDevice();
HalpKdMatchRequestedPciDevice();
HalpKdParseDebugTable();
HalpKdPowerUpDevice();
HalpKdQueryDebuggerInformation();
HalpKdReadPCIConfig();
HalpKdRegisterDebuggingDevice();
HalpKdReleaseDebuggingDevice();
HalpKdReleaseIntegratedDevice();
HalpKdReleasePciDevice();
HalpKdSearchBehindCardBusBridge();
HalpKdSearchBehindPciBridge();
HalpKdSearchForPciDebuggingDevice();
HalpKdSearchForTopOfMMIO();
HalpKdSetupDebuggingDevice();
HalpKdSetupIntegratedDevice();
HalpKdSetupPciDevice();
HalpKdSupersetRange();
HalpKdTranslateIntegratedDevice();
HalpKdUnconfigureCardBusBridge();
HalpKdUnconfigurePciBridge();
HalpKdUnmapConfiguredDevice();
HalpKdUpdateAddressRange();
HalpKdWidenCardBusBridgeBusRange();
HalpKdWidenCardBusBridgeIoRange();
HalpKdWidenCardBusBridgeMemoryRange();
HalpKdWidenPciBridgeBusRange();
HalpKdWidenPciBridgeIoRange();
HalpKdWidenPciBridgeMemoryRange();
HalpKdWritePCIConfig();
HalpLegacyShutdown();
HalpLoadMicrocode();
HalpLockPagableCodeSection();
HalpMap();
HalpMapCR3Ex();
HalpMapEarlyPages();
HalpMapNvsArea();
HalpMapPhysicalMemory64();
HalpMapPhysicalMemoryWriteThrough64();
HalpMapTransferV2();
HalpMapTransferV3();
HalpMaskInterrupt();
HalpMcUpdateFindDataTableEntry();
HalpMcUpdateInitialize();
HalpMcUpdateLock();
HalpMcUpdateMicrocode();
HalpMcUpdatePostUpdate();
HalpMcUpdateUnlock();
HalpMcaClearError();
HalpMcaCurrentProcessorSetTSS();
HalpMcaExceptionHandler();
HalpMcaExceptionHandlerWrapper();
HalpMcaInitializePcrContext();
HalpMcaReadError();
HalpMcaReadErrorPresence();
HalpMcaReportError();
HalpMcaResumeProcessorConfig();
HalpMcaSetFeatureFlags();
HalpMcaSetProcessorConfig();
HalpMceBarrierWait();
HalpMceHandler();
HalpMceHandlerCore();
HalpMceHandlerWithRendezvous();
HalpMceInit();
HalpMceInitProcessor();
HalpMceInitializeErrorPacket();
HalpMceInitializeErrorPacketContents();
HalpMiscBugCheckCallback();
HalpMiscGetParameters();
HalpMiscInitDiscard();
HalpMiscInitSystem();
HalpMiscIsLegacyPcType();
HalpMmAllocCtxAlloc();
HalpMmAllocCtxAllocBuffer();
HalpMmAllocCtxBufferCleanup();
HalpMmAllocCtxFree();
HalpMmAllocCtxInit();
HalpMmAllocCtxMarkHiberPhase();
HalpMmAllocateMemory();
HalpMmBuildTiledMemoryMap();
HalpMmFreeTiledMemoryMap();
HalpMmInitSystem();
HalpMovntiCopyBuffer();
HalpMpsValueAscendingSort();
HalpNodeCostSort();
HalpNumaAddRangeProximity();
HalpNumaInitializeStaticConfiguration();
HalpNumaQueryNodeCapacity();
HalpNumaQueryNodeDistance();
HalpNumaQueryProcessorNode();
HalpNumaQueryProximityId();
HalpNumaQueryProximityNode();
HalpNumaSortMemoryRanges();
HalpNumaSwapP0NodeToFront();
HalpOpenDeviceClassRegistryKey();
HalpPCIAcquireConfigSpaceLock();
HalpPCIConfig();
HalpPCIConfigHoldingConfigLock();
HalpPCIEndConfigAccess();
HalpPCIISALine2Pin();
HalpPCIPerformConfigAccess();
HalpPCIPin2ISALine();
HalpPCIReadUcharType1();
HalpPCIReadUcharType2();
HalpPCIReadUlongType1();
HalpPCIReadUlongType2();
HalpPCIReadUshortType1();
HalpPCIReadUshortType2();
HalpPCIReleaseConfigSpaceLock();
HalpPCIStartConfigAccess();
HalpPCIWriteUcharType1();
HalpPCIWriteUcharType2();
HalpPCIWriteUlongType1();
HalpPCIWriteUlongType2();
HalpPCIWriteUshortType1();
HalpPCIWriteUshortType2();
HalpPMStub();
HalpParseChannelCount();
HalpPassIrpFromFdoToPdo();
HalpPciAccessMmConfigSpace();
HalpPciAddMmConfigEntry();
HalpPciFindMmConfigBaseAddress();
HalpPciGetBusMasterDescriptor();
HalpPciGetSegmentCount();
HalpPciInitSystem();
HalpPciInitializeMmConfigAccess();
HalpPciLookupSpecialRid();
HalpPciMarkHiberPhase();
HalpPciReadMmConfigUchar();
HalpPciReadMmConfigUlong();
HalpPciReadMmConfigUshort();
HalpPciReportMmConfigAddressRange();
HalpPciWriteMmConfigUchar();
HalpPciWriteMmConfigUlong();
HalpPciWriteMmConfigUshort();
HalpPerfInterrupt();
HalpPerfInterruptInternal();
HalpPhase0GetPciDataByOffset();
HalpPhase0SetPciDataByOffset();
HalpPicDiscover();
HalpPicInitializeIoUnit();
HalpPicRequestInterrupt();
HalpPicSetLineState();
HalpPicWriteEndOfInterrupt();
HalpPiix4Detect();
HalpPmTimerConfigure();
HalpPmTimerDiscover();
HalpPmTimerInitialize();
HalpPmTimerQueryCounterIoPort();
HalpPmTimerQueryCounterMemory();
HalpPnpInitSystem();
HalpPostPnpInitialize();
HalpPostSleepMP();
HalpPowerEarlyRestore();
HalpPowerInitDiscard();
HalpPowerInitFwPerformanceTableMappings();
HalpPowerInitNvsRegionData();
HalpPowerInitSystem();
HalpPowerStateCallback();
HalpPrepareForBugcheck();
HalpPreserveNvsArea();
HalpProcGetFeatureBits();
HalpProcInitDiscard();
HalpProcInitSystem();
HalpProcessAcpiStartDevice();
HalpProcessEsrtStartDevice();
HalpProcessSecondarySignalList();
HalpProcessUefiStartDevice();
HalpProgramDrhd();
HalpPteReserveResources();
HalpPutAcpiHacksInRegistry();
HalpQueryAcpiRealTimeClock();
HalpQueryAcpiResourceRequirements();
HalpQueryCapabilities();
HalpQueryCapsuleCapabilities();
HalpQueryChannelTopologyInformation();
HalpQueryDeviceRelations();
HalpQueryIdFdo();
HalpQueryIdPdo();
HalpQueryInterface();
HalpQueryMaximumGsiv();
HalpQueryMaximumRegisteredProcessorCount();
HalpQueryNumaRangeTableInformation();
HalpQueryPccInterface();
HalpQueryPciRegistryInfo();
HalpQueryProfileSourceList();
HalpQueryResources();
HalpQuerySecondaryInterruptInformation();
HalpQueryVirtualRtc();
HalpQueueMapBufferWorker();
HalpRMStub();
HalpRMStubJumpCs();
HalpRMStubJumpEip();
HalpRMStubSize();
HalpReadCmosTime();
HalpReadGenericErrorInfo();
HalpReadPCIConfig();
HalpReadPartitionTable();
HalpReadRtcStdPCAT();
HalpReadStdCmosData();
HalpReadWheaPhysicalMemory();
HalpReadWriteWheaPhysicalMemory();
HalpReboot();
HalpRecordSecondaryGsivRange();
HalpReenableAcpi();
HalpRegisterDmaChannel();
HalpRegisterDmaController();
HalpRegisterKdSupportFunctions();
HalpRegisterSecondaryIcInterface();
HalpRegisterUsbController();
HalpReleaseCmosSpinLock();
HalpReleaseSecondaryIcEntryShared();
HalpReleaseSystemHardwareSpinLock();
HalpRemapVirtualAddress64();
HalpReportResourceUsage();
HalpReserveHalPtes();
HalpResetSBF();
HalpRestartProfiling();
HalpRestoreHvEnlightenment();
HalpRestoreInterruptRemappingUnits();
HalpRestoreLegacyDmaControllerState();
HalpRestoreNvsArea();
HalpRtcAcknowledgeInterrupt();
HalpRtcArmTimer();
HalpRtcDiscover();
HalpRtcFixedStall();
HalpRtcInitialize();
HalpRtcSetDivisor();
HalpRtcStop();
HalpSaveAndDisableEnlightenment();
HalpSaveContextTargetProcessor();
HalpSaveDmaControllerState();
HalpSaveProcessorState();
HalpSecondaryInterruptQueryPrimaryInformation();
HalpSelectFeasibleLowPowerState();
HalpSendPccCommand();
HalpSerialize();
HalpSetAcpiIrqHack();
HalpSetAcpiRealTimeClock();
HalpSetClockAfterSleep();
HalpSetClockBeforeSleep();
HalpSetCmosCenturyByte();
HalpSetCmosData();
HalpSetCr4MCEBit();
HalpSetIrtEntry();
HalpSetPCIData();
HalpSetPageFrameNumber();
HalpSetPartitionInformation();
HalpSetPlatformFlags();
HalpSetProfileSourceInterval();
HalpSetResumeTime();
HalpSetSystemInformation();
HalpSetTimer();
HalpSetTimerAnyMode();
HalpSetVirtualRtc();
HalpSetWakeAlarm();
HalpSetup440BXWorkaround();
HalpSetupAcpiPhase0();
HalpSetupRealModeResume();
HalpSfiTimerAcknowledgeInterrupt();
HalpSfiTimerArm();
HalpSfiTimerDiscover();
HalpSfiTimerInitialize();
HalpSfiTimerQueryCounter();
HalpSfiTimerStop();
HalpShutdown();
HalpSocApiAllocatePhysicalMemory();
HalpStopLegacyUsbInterrupts();
HalpStopLegacyUsbInterruptsInternal();
HalpStopOhciInterrupt();
HalpStopUhciInterrupt();
HalpStopXhciInterrupt();
HalpStoreFreeCr3();
HalpTimerActivateClock();
HalpTimerBuildKnownResourceIdString();
HalpTimerCalculateMaximumAllowableDrift();
HalpTimerCalibratePerformanceCounter();
HalpTimerClearProblem();
HalpTimerClockInterrupt();
HalpTimerClockInterruptCommon();
HalpTimerClockInterruptStub();
HalpTimerClockInterruptStubCommon();
HalpTimerClockInterruptWork();
HalpTimerClockPowerChange();
HalpTimerConfigureInterrupt();
HalpTimerDelayedQueryCounter();
HalpTimerDetermineValidTimerPairReadLatency();
HalpTimerDisableDynamicTick();
HalpTimerDpcRoutine();
HalpTimerFindBestAlwaysOnTimer();
HalpTimerFindIdealClockSource();
HalpTimerFindIdealPerformanceCounterSource();
HalpTimerFindIdealScalingSource();
HalpTimerGetClockConfiguration();
HalpTimerGetClockOwner();
HalpTimerGetNextTickDuration();
HalpTimerGetProfilingHandler();
HalpTimerGetProfilingTarget();
HalpTimerInitPowerManagement();
HalpTimerInitSystem();
HalpTimerInitialize();
HalpTimerInitializeClock();
HalpTimerInitializeEarlyStallSource();
HalpTimerInitializeProfiling();
HalpTimerLogDynamicTickStatus();
HalpTimerMarkSleep();
HalpTimerMarkWake();
HalpTimerMeasureFrequencies();
HalpTimerMeasureProcessorsWorker();
HalpTimerNoteHpetMaskingBehavior();
HalpTimerNotifyProcessorFreeze();
HalpTimerPerformanceCounterPowerChange();
HalpTimerPowerChange();
HalpTimerPowerComponentActiveCallback();
HalpTimerPowerComponentIdleCallback();
HalpTimerPowerCriticalTransitionCallback();
HalpTimerPrepareProcessorForIdle();
HalpTimerProfileInterrupt();
HalpTimerProfileInterruptCommon();
HalpTimerProfileInterruptWork();
HalpTimerQueryCycleCounter();
HalpTimerQueryWakeTime();
HalpTimerReadTimerPairWithLatencyLimit();
HalpTimerRegister();
HalpTimerRegisterBuiltinPlugins();
HalpTimerReportClockRates();
HalpTimerReportIdleStateUsage();
HalpTimerResetProfileAdjustment();
HalpTimerRestartProfileInterrupt();
HalpTimerRestorePerformanceCounter();
HalpTimerRestoreProcessorCounter();
HalpTimerResumeClock();
HalpTimerResumeClockPn();
HalpTimerResumePeriodicTick();
HalpTimerResumeProcessorFromIdle();
HalpTimerSavePerformanceCounter();
HalpTimerSaveProcessorCounter();
HalpTimerSaveProcessorFrequency();
HalpTimerScaleCounter();
HalpTimerSchedulePeriodicQueries();
HalpTimerSelectFallbackPerformanceCounter();
HalpTimerSelectRoles();
HalpTimerSetProblemEx();
HalpTimerSetProfilingHandler();
HalpTimerSetProfilingTarget();
HalpTimerSetTimerBackedProfileInterval();
HalpTimerSetupMessageInterruptRouting();
HalpTimerSpecificConstraintsMet();
HalpTimerStallCounterPowerChange();
HalpTimerStallExecutionProcessor();
HalpTimerStartProfileInterrupt();
HalpTimerStopProfileInterrupt();
HalpTimerSuspendClock();
HalpTimerSwitchStallSource();
HalpTimerSwitchToNormalClock();
HalpTimerUnmapInterrupt();
HalpTimerUpdateApiConsumers();
HalpTimerX86InterruptSetup();
HalpTranslateBusAddress();
HalpTranslateToLegacyMcaException();
HalpTscAdvSynchCalculateRemoteDelta();
HalpTscAdvSynchCalculateRemoteDeltas();
HalpTscAdvSynchComputeMinimumDelta();
HalpTscAdvSynchComputeMinimumDeltaAlternate();
HalpTscAdvSynchLeader();
HalpTscAdvSynchReadTimeStamp();
HalpTscAdvSynchSkewCounter();
HalpTscAdvSynchToLeader();
HalpTscAdvSynchToTarget();
HalpTscCompatibilitySynchronization();
HalpTscDiscover();
HalpTscFallback();
HalpTscFallbackToPlatformSource();
HalpTscFinalizeDisposition();
HalpTscGetAttributes();
HalpTscInitialize();
HalpTscInitializeSynchronizationContext();
HalpTscQueryCounter();
HalpTscReserveResources();
HalpTscSynchronization();
HalpTscSynchronizationWorker();
HalpTscTraceProcessorDelta();
HalpTscTraceProcessorSynchronization();
HalpTscTraceStatus();
HalpTscTraceSynchronizationSummary();
HalpUnloadMicrocode();
HalpUnmapVirtualAddress();
HalpUnmaskInterrupt();
HalpUnregisterSecondaryIcInterface();
HalpUpdateCapsule();
HalpUpdateConfigurationFromMsct();
HalpUpdateCoolingPacket();
HalpUpdateIrtDestinationId();
HalpUpdateNumaConfiguration();
HalpUpdateSingleTargetExtendedDestination();
HalpUtcTimeToAcpiRealTime();
HalpValidPCISlot();
HalpValidateInterface();
HalpValidateMpns();
HalpVerifySratEntryLengthAndFlag();
HalpWhackICHUsbSmi();
HalpWheaInitDiscard();
HalpWheaInitProcessorGenericSection();
HalpWheaInitSystem();
HalpWheaNativeCpuid();
HalpWheaNativeReadMsr();
HalpWheaNativeWriteMsr();
HalpWheaNativeWritebackInvalidate();
HalpWriteCmosTime();
HalpWritePCIConfig();
HalpWritePartitionTable();
HalpWriteResetCommand();
HalpWriteRtcStdPCAT();
HalpWriteStdCmosData();
HalpWriteWheaPhysicalMemory();
HalpX86DmaControllerInterruptRoutine();
HalpX86InterruptIpiService();
HalpX86InterruptLocalErrorService();
HalpX86InterruptRebootService();
HalpX86InterruptSpuriousService();
HalpX86InterruptStubService();
HalpcGetCmosDataByType();
HalpcSetCmosDataByType();
IoFlushAdapterBuffers();
IoFlushAdapterBuffersV2();
IoFlushAdapterBuffersV3();
IoFreeAdapterChannel();
IoFreeAdapterChannelV2();
IoFreeAdapterChannelV3();
IoFreeMapRegisters();
IoFreeMapRegistersV2();
IoFreeMapRegistersV3();
IoMapTransfer();
IoMapTransferInternal();
KeFlushWriteBuffer();
KeGetCurrentIrql();
KeLowerIrql();
KeQueryPerformanceCounter();
KeRaiseIrql();
KeRaiseIrqlToDpcLevel();
KeRaiseIrqlToSynchLevel();
KeSaveStateForHibernate();
KeStallExecutionProcessor();
KeWriteProtectPAT();
KfLowerIrql();
KfRaiseIrql();
MiGetPteAddress();
PcAllocateChannelAdapter();
PcFlushChannel();
PcGetChannelAdapter();
PcInitializeDmaHW();
PcMapTransfer();
PcReadCounter();
PcValidateDmaAdapterRequest();
PcValidateDmaScatterTransfer();
RDMSR();
READ_PORT_BUFFER_UCHAR();
READ_PORT_BUFFER_ULONG();
READ_PORT_BUFFER_USHORT();
READ_PORT_UCHAR();
READ_PORT_ULONG();
READ_PORT_USHORT();
RtlInitUnicodeString();
RtlMoveMemory();
RtlRaiseException();
RtlStringCbPrintfExW();
RtlStringExHandleOtherFlagsW();
RtlULongLongAdd();
RtlULongLongMult();
RtlUnwind();
StartPx_PMStub();
TranslateGlobalVectorToIsaVector();
V86_Dmai_a();
V86_HPrI_a();
V86_Hipi_a();
V86_Hpf_a();
V86_LocalError_a();
V86_Reboot_a();
V86_StubInt_a();
V86_Timerci_a();
V86_Timerstub_a();
WRITE_PORT_BUFFER_UCHAR();
WRITE_PORT_BUFFER_ULONG();
WRITE_PORT_BUFFER_USHORT();
WRITE_PORT_UCHAR();
WRITE_PORT_ULONG();
WRITE_PORT_USHORT();
WRMSR();
XmAaaOp();
XmAadOp();
XmAamOp();
XmAasOp();
XmAccumImmediate();
XmAccumRegister();
XmAdcOp();
XmAddOp();
XmAddOperands();
XmAndOp();
XmBitScanGeneral();
XmBoundOp();
XmBsfOp();
XmBsrOp();
XmBswapOp();
XmBtOp();
XmBtcOp();
XmBtrOp();
XmBtsOp();
XmByteImmediate();
XmCallOp();
XmCbwOp();
XmClcOp();
XmCldOp();
XmCliOp();
XmCmcOp();
XmCmpOp();
XmCmpsOp();
XmCmpxchgOp();
XmCompareOperands();
XmComputeParity();
XmCwdOp();
XmDaaOp();
XmDasOp();
XmDecOp();
XmDivOp();
XmEffectiveOffset();
XmEmulateInterrupt();
XmEmulateStream();
XmEnterOp();
XmEvaluateAddressSpecifier();
XmEvaluateIndexSpecifier();
XmExecuteInt1a();
XmFlagsRegister();
XmGeneralBitOffset();
XmGeneralRegister();
XmGetCodeByte();
XmGetImmediateSourceValue();
XmGetLongImmediate();
XmGetOffsetAddress();
XmGetRegisterAddress();
XmGetStringAddress();
XmGetStringAddressRange();
XmGetWordImmediate();
XmGroup1General();
XmGroup1Immediate();
XmGroup2By1();
XmGroup2ByByte();
XmGroup2ByCL();
XmGroup3General();
XmGroup45General();
XmGroup7General();
XmGroup8BitOffset();
XmHltOp();
XmIdivOp();
XmIllOp();
XmImmediateEnter();
XmImmediateJump();
XmImulImmediate();
XmImulOp();
XmImulxOp();
XmInOp();
XmIncOp();
XmInitializeEmulator();
XmInsOp();
XmInt1aFindPciClassCode();
XmInt1aFindPciDevice();
XmInt1aReadConfigRegister();
XmInt1aWriteConfigRegister();
XmIntOp();
XmIretOp();
XmJcxzOp();
XmJmpOp();
XmJxxOp();
XmLahfOp();
XmLeaveOp();
XmLoadSegment();
XmLodsOp();
XmLongJump();
XmLoopOp();
XmMovOp();
XmMoveGeneral();
XmMoveImmediate();
XmMoveRegImmediate();
XmMoveSegment();
XmMoveXxGeneral();
XmMovsOp();
XmMulOp();
XmNegOp();
XmNoOperands();
XmNopOp();
XmNotOp();
XmOpcodeEscape();
XmOpcodeRegister();
XmOrOp();
XmOutOp();
XmOutsOp();
XmPopGeneral();
XmPopOp();
XmPopStack();
XmPopaOp();
XmPortDX();
XmPortImmediate();
XmPrefixOpcode();
XmPushImmediate();
XmPushOp();
XmPushPopSegment();
XmPushStack();
XmPushaOp();
XmRclOp();
XmRcrOp();
XmRdtscOp();
XmRetOp();
XmRolOp();
XmRorOp();
XmSahfOp();
XmSarOp();
XmSbbOp();
XmScasOp();
XmSegmentOffset();
XmSetDataType();
XmSetDestinationValue();
XmSetLogicalResult();
XmSetSourceValue();
XmSetccByte();
XmShiftDouble();
XmShlOp();
XmShldOp();
XmShortJump();
XmShrOp();
XmShrdOp();
XmSmswOp();
XmStcOp();
XmStdOp();
XmStiOp();
XmStoreResult();
XmStosOp();
XmStringOperands();
XmSubOp();
XmSubOperands();
XmSxxOp();
XmTestOp();
XmXaddOp();
XmXchgOp();
XmXlatOpcode();
XmXorOp();
ZwClose();
ZwCreateKey();
ZwDeleteValueKey();
ZwOpenKey();
ZwQueryValueKey();
ZwSetValueKey();
_EH4_CallFilterFunc();
_EH4_GlobalUnwind();
_EH4_LocalUnwind();
_EH4_TransferToHandler();
_NLG_Call();
_NLG_Dispatch();
_NLG_Dispatch2();
_NLG_Notify();
_NLG_Notify1();
_NLG_Return2();
_SEH_epilog4();
_SEH_prolog4();
__report_gsfailure();
__security_check_cookie();
__security_init_cookie();
__unwind_handler();
_abnormal_termination();
_alldiv();
_alldvrm();
_allmul();
_alloca_probe();
_alloca_probe_16();
_alloca_probe_8();
_allshl();
_aulldiv();
_aulldvrm();
_aullshr();
_except_handler4();
_global_unwind2();
_local_unwind2();
_local_unwind4();
_rt_probe_read4();
_seh_longjmp_unwind4();
_setjmp3();
_unwind_handler4();
longjmp();
memcmp();
memcpy();
memset();
x86BiosAllocateBuffer();
x86BiosCall();
x86BiosExecuteInterruptShadowed();
x86BiosFreeBuffer();
x86BiosGetPciBusData();
x86BiosInitializeBiosEx();
x86BiosInitializeBiosShadowed();
x86BiosReadCmosPort();
x86BiosReadCmosPortByte();
x86BiosReadIoSpace();
x86BiosReadMemory();
x86BiosReadPciAddressPort();
x86BiosReadPciDataPort();
x86BiosSetPciBusData();
x86BiosTranslateAddress();
x86BiosWriteCmosPort();
x86BiosWriteCmosPortByte();
x86BiosWriteIoSpace();
x86BiosWriteMemory();
x86BiosWritePciAddressPort();
x86BiosWritePciDataPort();
