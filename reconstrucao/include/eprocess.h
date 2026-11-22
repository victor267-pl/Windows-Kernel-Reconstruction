#ifndef WRK_RECON_EPROCESS_H
#define WRK_RECON_EPROCESS_H

#include <stdint.h>

/* Layout x64 extraido do inventario Ghidra: _EPROCESS.
 * Tamanho total confirmado: 2112 bytes; campos inventariados: 226.
 * O armazenamento e opaco nesta etapa: tipos aninhados, unioes e bitfields
 * nao sao reinterpretados como C ate serem validados individualmente.
 */
typedef struct _EPROCESS {
    uint8_t _storage[2112];
} EPROCESS, *PEPROCESS;

#define EPROCESS_SIZE 2112u
/* Campo 0: Pcb | tipo Ghidra: _KPROCESS | tamanho: 456 */
#define EPROCESS_OFFSET_PCB 0u
#define EPROCESS_FIELD_SIZE_PCB 456u
/* Campo 1: ProcessLock | tipo Ghidra: _EX_PUSH_LOCK | tamanho: 8 */
#define EPROCESS_OFFSET_PROCESSLOCK 456u
#define EPROCESS_FIELD_SIZE_PROCESSLOCK 8u
/* Campo 2: UniqueProcessId | tipo Ghidra: void * | tamanho: 8 */
#define EPROCESS_OFFSET_UNIQUEPROCESSID 464u
#define EPROCESS_FIELD_SIZE_UNIQUEPROCESSID 8u
/* Campo 3: ActiveProcessLinks | tipo Ghidra: _LIST_ENTRY | tamanho: 16 */
#define EPROCESS_OFFSET_ACTIVEPROCESSLINKS 472u
#define EPROCESS_FIELD_SIZE_ACTIVEPROCESSLINKS 16u
/* Campo 4: RundownProtect | tipo Ghidra: _EX_RUNDOWN_REF | tamanho: 8 */
#define EPROCESS_OFFSET_RUNDOWNPROTECT 488u
#define EPROCESS_FIELD_SIZE_RUNDOWNPROTECT 8u
/* Campo 7: CreateTime | tipo Ghidra: _LARGE_INTEGER | tamanho: 8 */
#define EPROCESS_OFFSET_CREATETIME 504u
#define EPROCESS_FIELD_SIZE_CREATETIME 8u
/* Campo 8: ProcessQuotaUsage | tipo Ghidra: ulong64[2] | tamanho: 16 */
#define EPROCESS_OFFSET_PROCESSQUOTAUSAGE 512u
#define EPROCESS_FIELD_SIZE_PROCESSQUOTAUSAGE 16u
/* Campo 9: ProcessQuotaPeak | tipo Ghidra: ulong64[2] | tamanho: 16 */
#define EPROCESS_OFFSET_PROCESSQUOTAPEAK 528u
#define EPROCESS_FIELD_SIZE_PROCESSQUOTAPEAK 16u
/* Campo 10: PeakVirtualSize | tipo Ghidra: ulong64 | tamanho: 8 */
#define EPROCESS_OFFSET_PEAKVIRTUALSIZE 544u
#define EPROCESS_FIELD_SIZE_PEAKVIRTUALSIZE 8u
/* Campo 11: VirtualSize | tipo Ghidra: ulong64 | tamanho: 8 */
#define EPROCESS_OFFSET_VIRTUALSIZE 552u
#define EPROCESS_FIELD_SIZE_VIRTUALSIZE 8u
/* Campo 12: SessionProcessLinks | tipo Ghidra: _LIST_ENTRY | tamanho: 16 */
#define EPROCESS_OFFSET_SESSIONPROCESSLINKS 560u
#define EPROCESS_FIELD_SIZE_SESSIONPROCESSLINKS 16u
/* Campo 14: Token | tipo Ghidra: _EX_FAST_REF | tamanho: 8 */
#define EPROCESS_OFFSET_TOKEN 584u
#define EPROCESS_FIELD_SIZE_TOKEN 8u
/* Campo 15: MmReserved | tipo Ghidra: ulong64 | tamanho: 8 */
#define EPROCESS_OFFSET_MMRESERVED 592u
#define EPROCESS_FIELD_SIZE_MMRESERVED 8u
/* Campo 16: AddressCreationLock | tipo Ghidra: _EX_PUSH_LOCK | tamanho: 8 */
#define EPROCESS_OFFSET_ADDRESSCREATIONLOCK 600u
#define EPROCESS_FIELD_SIZE_ADDRESSCREATIONLOCK 8u
/* Campo 17: PageTableCommitmentLock | tipo Ghidra: _EX_PUSH_LOCK | tamanho: 8 */
#define EPROCESS_OFFSET_PAGETABLECOMMITMENTLOCK 608u
#define EPROCESS_FIELD_SIZE_PAGETABLECOMMITMENTLOCK 8u
/* Campo 18: RotateInProgress | tipo Ghidra: _ETHREAD * | tamanho: 8 */
#define EPROCESS_OFFSET_ROTATEINPROGRESS 616u
#define EPROCESS_FIELD_SIZE_ROTATEINPROGRESS 8u
/* Campo 19: ForkInProgress | tipo Ghidra: _ETHREAD * | tamanho: 8 */
#define EPROCESS_OFFSET_FORKINPROGRESS 624u
#define EPROCESS_FIELD_SIZE_FORKINPROGRESS 8u
/* Campo 20: CommitChargeJob | tipo Ghidra: _EJOB * | tamanho: 8 */
#define EPROCESS_OFFSET_COMMITCHARGEJOB 632u
#define EPROCESS_FIELD_SIZE_COMMITCHARGEJOB 8u
/* Campo 21: CloneRoot | tipo Ghidra: _RTL_AVL_TREE | tamanho: 8 */
#define EPROCESS_OFFSET_CLONEROOT 640u
#define EPROCESS_FIELD_SIZE_CLONEROOT 8u
/* Campo 22: NumberOfPrivatePages | tipo Ghidra: ulong64 | tamanho: 8 */
#define EPROCESS_OFFSET_NUMBEROFPRIVATEPAGES 648u
#define EPROCESS_FIELD_SIZE_NUMBEROFPRIVATEPAGES 8u
/* Campo 23: MmReserved2 | tipo Ghidra: ulong64 | tamanho: 8 */
#define EPROCESS_OFFSET_MMRESERVED2 656u
#define EPROCESS_FIELD_SIZE_MMRESERVED2 8u
/* Campo 24: Win32Process | tipo Ghidra: void * | tamanho: 8 */
#define EPROCESS_OFFSET_WIN32PROCESS 664u
#define EPROCESS_FIELD_SIZE_WIN32PROCESS 8u
/* Campo 25: Job | tipo Ghidra: _EJOB * | tamanho: 8 */
#define EPROCESS_OFFSET_JOB 672u
#define EPROCESS_FIELD_SIZE_JOB 8u
/* Campo 26: SectionObject | tipo Ghidra: void * | tamanho: 8 */
#define EPROCESS_OFFSET_SECTIONOBJECT 680u
#define EPROCESS_FIELD_SIZE_SECTIONOBJECT 8u
/* Campo 27: SectionBaseAddress | tipo Ghidra: void * | tamanho: 8 */
#define EPROCESS_OFFSET_SECTIONBASEADDRESS 688u
#define EPROCESS_FIELD_SIZE_SECTIONBASEADDRESS 8u
/* Campo 28: Cookie | tipo Ghidra: ulong | tamanho: 4 */
#define EPROCESS_OFFSET_COOKIE 696u
#define EPROCESS_FIELD_SIZE_COOKIE 4u
/* Campo 33: WorkingSetWatch | tipo Ghidra: _PAGEFAULT_HISTORY * | tamanho: 8 */
#define EPROCESS_OFFSET_WORKINGSETWATCH 704u
#define EPROCESS_FIELD_SIZE_WORKINGSETWATCH 8u
/* Campo 34: Win32WindowStation | tipo Ghidra: void * | tamanho: 8 */
#define EPROCESS_OFFSET_WIN32WINDOWSTATION 712u
#define EPROCESS_FIELD_SIZE_WIN32WINDOWSTATION 8u
/* Campo 35: InheritedFromUniqueProcessId | tipo Ghidra: void * | tamanho: 8 */
#define EPROCESS_OFFSET_INHERITEDFROMUNIQUEPROCESSID 720u
#define EPROCESS_FIELD_SIZE_INHERITEDFROMUNIQUEPROCESSID 8u
/* Campo 36: OwnerProcessId | tipo Ghidra: ulong64 | tamanho: 8 */
#define EPROCESS_OFFSET_OWNERPROCESSID 728u
#define EPROCESS_FIELD_SIZE_OWNERPROCESSID 8u
/* Campo 37: Peb | tipo Ghidra: _PEB * | tamanho: 8 */
#define EPROCESS_OFFSET_PEB 736u
#define EPROCESS_FIELD_SIZE_PEB 8u
/* Campo 38: Session | tipo Ghidra: _PSP_SESSION_SPACE * | tamanho: 8 */
#define EPROCESS_OFFSET_SESSION 744u
#define EPROCESS_FIELD_SIZE_SESSION 8u
/* Campo 39: Spare1 | tipo Ghidra: void * | tamanho: 8 */
#define EPROCESS_OFFSET_SPARE1 752u
#define EPROCESS_FIELD_SIZE_SPARE1 8u
/* Campo 40: QuotaBlock | tipo Ghidra: _EPROCESS_QUOTA_BLOCK * | tamanho: 8 */
#define EPROCESS_OFFSET_QUOTABLOCK 760u
#define EPROCESS_FIELD_SIZE_QUOTABLOCK 8u
/* Campo 41: ObjectTable | tipo Ghidra: _HANDLE_TABLE * | tamanho: 8 */
#define EPROCESS_OFFSET_OBJECTTABLE 768u
#define EPROCESS_FIELD_SIZE_OBJECTTABLE 8u
/* Campo 42: DebugPort | tipo Ghidra: void * | tamanho: 8 */
#define EPROCESS_OFFSET_DEBUGPORT 776u
#define EPROCESS_FIELD_SIZE_DEBUGPORT 8u
/* Campo 43: WoW64Process | tipo Ghidra: _EWOW64PROCESS * | tamanho: 8 */
#define EPROCESS_OFFSET_WOW64PROCESS 784u
#define EPROCESS_FIELD_SIZE_WOW64PROCESS 8u
/* Campo 44: DeviceMap | tipo Ghidra: _EX_FAST_REF | tamanho: 8 */
#define EPROCESS_OFFSET_DEVICEMAP 792u
#define EPROCESS_FIELD_SIZE_DEVICEMAP 8u
/* Campo 45: EtwDataSource | tipo Ghidra: void * | tamanho: 8 */
#define EPROCESS_OFFSET_ETWDATASOURCE 800u
#define EPROCESS_FIELD_SIZE_ETWDATASOURCE 8u
/* Campo 46: PageDirectoryPte | tipo Ghidra: ulong64 | tamanho: 8 */
#define EPROCESS_OFFSET_PAGEDIRECTORYPTE 808u
#define EPROCESS_FIELD_SIZE_PAGEDIRECTORYPTE 8u
/* Campo 47: ImageFilePointer | tipo Ghidra: _FILE_OBJECT * | tamanho: 8 */
#define EPROCESS_OFFSET_IMAGEFILEPOINTER 816u
#define EPROCESS_FIELD_SIZE_IMAGEFILEPOINTER 8u
/* Campo 48: ImageFileName | tipo Ghidra: uchar[15] | tamanho: 15 */
#define EPROCESS_OFFSET_IMAGEFILENAME 824u
#define EPROCESS_FIELD_SIZE_IMAGEFILENAME 15u
/* Campo 49: PriorityClass | tipo Ghidra: uchar | tamanho: 1 */
#define EPROCESS_OFFSET_PRIORITYCLASS 839u
#define EPROCESS_FIELD_SIZE_PRIORITYCLASS 1u
/* Campo 50: SecurityPort | tipo Ghidra: void * | tamanho: 8 */
#define EPROCESS_OFFSET_SECURITYPORT 840u
#define EPROCESS_FIELD_SIZE_SECURITYPORT 8u
/* Campo 51: SeAuditProcessCreationInfo | tipo Ghidra: _SE_AUDIT_PROCESS_CREATION_INFO | tamanho: 8 */
#define EPROCESS_OFFSET_SEAUDITPROCESSCREATIONINFO 848u
#define EPROCESS_FIELD_SIZE_SEAUDITPROCESSCREATIONINFO 8u
/* Campo 52: JobLinks | tipo Ghidra: _LIST_ENTRY | tamanho: 16 */
#define EPROCESS_OFFSET_JOBLINKS 856u
#define EPROCESS_FIELD_SIZE_JOBLINKS 16u
/* Campo 53: HighestUserAddress | tipo Ghidra: void * | tamanho: 8 */
#define EPROCESS_OFFSET_HIGHESTUSERADDRESS 872u
#define EPROCESS_FIELD_SIZE_HIGHESTUSERADDRESS 8u
/* Campo 54: ThreadListHead | tipo Ghidra: _LIST_ENTRY | tamanho: 16 */
#define EPROCESS_OFFSET_THREADLISTHEAD 880u
#define EPROCESS_FIELD_SIZE_THREADLISTHEAD 16u
/* Campo 55: ActiveThreads | tipo Ghidra: ulong | tamanho: 4 */
#define EPROCESS_OFFSET_ACTIVETHREADS 896u
#define EPROCESS_FIELD_SIZE_ACTIVETHREADS 4u
/* Campo 56: ImagePathHash | tipo Ghidra: ulong | tamanho: 4 */
#define EPROCESS_OFFSET_IMAGEPATHHASH 900u
#define EPROCESS_FIELD_SIZE_IMAGEPATHHASH 4u
/* Campo 57: DefaultHardErrorProcessing | tipo Ghidra: ulong | tamanho: 4 */
#define EPROCESS_OFFSET_DEFAULTHARDERRORPROCESSING 904u
#define EPROCESS_FIELD_SIZE_DEFAULTHARDERRORPROCESSING 4u
/* Campo 58: LastThreadExitStatus | tipo Ghidra: long | tamanho: 4 */
#define EPROCESS_OFFSET_LASTTHREADEXITSTATUS 908u
#define EPROCESS_FIELD_SIZE_LASTTHREADEXITSTATUS 4u
/* Campo 59: PrefetchTrace | tipo Ghidra: _EX_FAST_REF | tamanho: 8 */
#define EPROCESS_OFFSET_PREFETCHTRACE 912u
#define EPROCESS_FIELD_SIZE_PREFETCHTRACE 8u
/* Campo 60: LockedPagesList | tipo Ghidra: void * | tamanho: 8 */
#define EPROCESS_OFFSET_LOCKEDPAGESLIST 920u
#define EPROCESS_FIELD_SIZE_LOCKEDPAGESLIST 8u
/* Campo 61: ReadOperationCount | tipo Ghidra: _LARGE_INTEGER | tamanho: 8 */
#define EPROCESS_OFFSET_READOPERATIONCOUNT 928u
#define EPROCESS_FIELD_SIZE_READOPERATIONCOUNT 8u
/* Campo 62: WriteOperationCount | tipo Ghidra: _LARGE_INTEGER | tamanho: 8 */
#define EPROCESS_OFFSET_WRITEOPERATIONCOUNT 936u
#define EPROCESS_FIELD_SIZE_WRITEOPERATIONCOUNT 8u
/* Campo 63: OtherOperationCount | tipo Ghidra: _LARGE_INTEGER | tamanho: 8 */
#define EPROCESS_OFFSET_OTHEROPERATIONCOUNT 944u
#define EPROCESS_FIELD_SIZE_OTHEROPERATIONCOUNT 8u
/* Campo 64: ReadTransferCount | tipo Ghidra: _LARGE_INTEGER | tamanho: 8 */
#define EPROCESS_OFFSET_READTRANSFERCOUNT 952u
#define EPROCESS_FIELD_SIZE_READTRANSFERCOUNT 8u
/* Campo 65: WriteTransferCount | tipo Ghidra: _LARGE_INTEGER | tamanho: 8 */
#define EPROCESS_OFFSET_WRITETRANSFERCOUNT 960u
#define EPROCESS_FIELD_SIZE_WRITETRANSFERCOUNT 8u
/* Campo 66: OtherTransferCount | tipo Ghidra: _LARGE_INTEGER | tamanho: 8 */
#define EPROCESS_OFFSET_OTHERTRANSFERCOUNT 968u
#define EPROCESS_FIELD_SIZE_OTHERTRANSFERCOUNT 8u
/* Campo 67: CommitChargeLimit | tipo Ghidra: ulong64 | tamanho: 8 */
#define EPROCESS_OFFSET_COMMITCHARGELIMIT 976u
#define EPROCESS_FIELD_SIZE_COMMITCHARGELIMIT 8u
/* Campo 68: CommitCharge | tipo Ghidra: ulong64 | tamanho: 8 */
#define EPROCESS_OFFSET_COMMITCHARGE 984u
#define EPROCESS_FIELD_SIZE_COMMITCHARGE 8u
/* Campo 69: CommitChargePeak | tipo Ghidra: ulong64 | tamanho: 8 */
#define EPROCESS_OFFSET_COMMITCHARGEPEAK 992u
#define EPROCESS_FIELD_SIZE_COMMITCHARGEPEAK 8u
/* Campo 94: Vm | tipo Ghidra: _MMSUPPORT_FULL | tamanho: 320 */
#define EPROCESS_OFFSET_VM 1024u
#define EPROCESS_FIELD_SIZE_VM 320u
/* Campo 95: MmProcessLinks | tipo Ghidra: _LIST_ENTRY | tamanho: 16 */
#define EPROCESS_OFFSET_MMPROCESSLINKS 1344u
#define EPROCESS_FIELD_SIZE_MMPROCESSLINKS 16u
/* Campo 96: ModifiedPageCount | tipo Ghidra: ulong | tamanho: 4 */
#define EPROCESS_OFFSET_MODIFIEDPAGECOUNT 1360u
#define EPROCESS_FIELD_SIZE_MODIFIEDPAGECOUNT 4u
/* Campo 97: ExitStatus | tipo Ghidra: long | tamanho: 4 */
#define EPROCESS_OFFSET_EXITSTATUS 1364u
#define EPROCESS_FIELD_SIZE_EXITSTATUS 4u
/* Campo 98: VadRoot | tipo Ghidra: _RTL_AVL_TREE | tamanho: 8 */
#define EPROCESS_OFFSET_VADROOT 1368u
#define EPROCESS_FIELD_SIZE_VADROOT 8u
/* Campo 99: VadHint | tipo Ghidra: void * | tamanho: 8 */
#define EPROCESS_OFFSET_VADHINT 1376u
#define EPROCESS_FIELD_SIZE_VADHINT 8u
/* Campo 100: VadCount | tipo Ghidra: ulong64 | tamanho: 8 */
#define EPROCESS_OFFSET_VADCOUNT 1384u
#define EPROCESS_FIELD_SIZE_VADCOUNT 8u
/* Campo 101: VadPhysicalPages | tipo Ghidra: ulong64 | tamanho: 8 */
#define EPROCESS_OFFSET_VADPHYSICALPAGES 1392u
#define EPROCESS_FIELD_SIZE_VADPHYSICALPAGES 8u
/* Campo 102: VadPhysicalPagesLimit | tipo Ghidra: ulong64 | tamanho: 8 */
#define EPROCESS_OFFSET_VADPHYSICALPAGESLIMIT 1400u
#define EPROCESS_FIELD_SIZE_VADPHYSICALPAGESLIMIT 8u
/* Campo 103: AlpcContext | tipo Ghidra: _ALPC_PROCESS_CONTEXT | tamanho: 32 */
#define EPROCESS_OFFSET_ALPCCONTEXT 1408u
#define EPROCESS_FIELD_SIZE_ALPCCONTEXT 32u
/* Campo 104: TimerResolutionLink | tipo Ghidra: _LIST_ENTRY | tamanho: 16 */
#define EPROCESS_OFFSET_TIMERRESOLUTIONLINK 1440u
#define EPROCESS_FIELD_SIZE_TIMERRESOLUTIONLINK 16u
/* Campo 105: TimerResolutionStackRecord | tipo Ghidra: _PO_DIAG_STACK_RECORD * | tamanho: 8 */
#define EPROCESS_OFFSET_TIMERRESOLUTIONSTACKRECORD 1456u
#define EPROCESS_FIELD_SIZE_TIMERRESOLUTIONSTACKRECORD 8u
/* Campo 106: RequestedTimerResolution | tipo Ghidra: ulong | tamanho: 4 */
#define EPROCESS_OFFSET_REQUESTEDTIMERRESOLUTION 1464u
#define EPROCESS_FIELD_SIZE_REQUESTEDTIMERRESOLUTION 4u
/* Campo 107: SmallestTimerResolution | tipo Ghidra: ulong | tamanho: 4 */
#define EPROCESS_OFFSET_SMALLESTTIMERRESOLUTION 1468u
#define EPROCESS_FIELD_SIZE_SMALLESTTIMERRESOLUTION 4u
/* Campo 108: ExitTime | tipo Ghidra: _LARGE_INTEGER | tamanho: 8 */
#define EPROCESS_OFFSET_EXITTIME 1472u
#define EPROCESS_FIELD_SIZE_EXITTIME 8u
/* Campo 109: InvertedFunctionTable | tipo Ghidra: _INVERTED_FUNCTION_TABLE_KERNEL_MODE * | tamanho: 8 */
#define EPROCESS_OFFSET_INVERTEDFUNCTIONTABLE 1480u
#define EPROCESS_FIELD_SIZE_INVERTEDFUNCTIONTABLE 8u
/* Campo 110: InvertedFunctionTableLock | tipo Ghidra: _EX_PUSH_LOCK | tamanho: 8 */
#define EPROCESS_OFFSET_INVERTEDFUNCTIONTABLELOCK 1488u
#define EPROCESS_FIELD_SIZE_INVERTEDFUNCTIONTABLELOCK 8u
/* Campo 111: ActiveThreadsHighWatermark | tipo Ghidra: ulong | tamanho: 4 */
#define EPROCESS_OFFSET_ACTIVETHREADSHIGHWATERMARK 1496u
#define EPROCESS_FIELD_SIZE_ACTIVETHREADSHIGHWATERMARK 4u
/* Campo 112: LargePrivateVadCount | tipo Ghidra: ulong | tamanho: 4 */
#define EPROCESS_OFFSET_LARGEPRIVATEVADCOUNT 1500u
#define EPROCESS_FIELD_SIZE_LARGEPRIVATEVADCOUNT 4u
/* Campo 113: ThreadListLock | tipo Ghidra: _EX_PUSH_LOCK | tamanho: 8 */
#define EPROCESS_OFFSET_THREADLISTLOCK 1504u
#define EPROCESS_FIELD_SIZE_THREADLISTLOCK 8u
/* Campo 114: WnfContext | tipo Ghidra: void * | tamanho: 8 */
#define EPROCESS_OFFSET_WNFCONTEXT 1512u
#define EPROCESS_FIELD_SIZE_WNFCONTEXT 8u
/* Campo 115: ServerSilo | tipo Ghidra: _EJOB * | tamanho: 8 */
#define EPROCESS_OFFSET_SERVERSILO 1520u
#define EPROCESS_FIELD_SIZE_SERVERSILO 8u
/* Campo 116: SignatureLevel | tipo Ghidra: uchar | tamanho: 1 */
#define EPROCESS_OFFSET_SIGNATURELEVEL 1528u
#define EPROCESS_FIELD_SIZE_SIGNATURELEVEL 1u
/* Campo 117: SectionSignatureLevel | tipo Ghidra: uchar | tamanho: 1 */
#define EPROCESS_OFFSET_SECTIONSIGNATURELEVEL 1529u
#define EPROCESS_FIELD_SIZE_SECTIONSIGNATURELEVEL 1u
/* Campo 118: Protection | tipo Ghidra: _PS_PROTECTION | tamanho: 1 */
#define EPROCESS_OFFSET_PROTECTION 1530u
#define EPROCESS_FIELD_SIZE_PROTECTION 1u
/* Campo 119: HangCount | tipo Ghidra: uchar:3 | tamanho: 1 */
#define EPROCESS_OFFSET_HANGCOUNT 1531u
#define EPROCESS_FIELD_SIZE_HANGCOUNT 1u
/* Campo 120: GhostCount | tipo Ghidra: uchar:3 | tamanho: 1 */
#define EPROCESS_OFFSET_GHOSTCOUNT 1531u
#define EPROCESS_FIELD_SIZE_GHOSTCOUNT 1u
/* Campo 121: PrefilterException | tipo Ghidra: uchar:1 | tamanho: 1 */
#define EPROCESS_OFFSET_PREFILTEREXCEPTION 1531u
#define EPROCESS_FIELD_SIZE_PREFILTEREXCEPTION 1u
/* Campo 123: DeviceAsid | tipo Ghidra: long | tamanho: 4 */
#define EPROCESS_OFFSET_DEVICEASID 1536u
#define EPROCESS_FIELD_SIZE_DEVICEASID 4u
/* Campo 128: SvmData | tipo Ghidra: void * | tamanho: 8 */
#define EPROCESS_OFFSET_SVMDATA 1544u
#define EPROCESS_FIELD_SIZE_SVMDATA 8u
/* Campo 129: SvmProcessLock | tipo Ghidra: _EX_PUSH_LOCK | tamanho: 8 */
#define EPROCESS_OFFSET_SVMPROCESSLOCK 1552u
#define EPROCESS_FIELD_SIZE_SVMPROCESSLOCK 8u
/* Campo 130: SvmLock | tipo Ghidra: ulong64 | tamanho: 8 */
#define EPROCESS_OFFSET_SVMLOCK 1560u
#define EPROCESS_FIELD_SIZE_SVMLOCK 8u
/* Campo 131: SvmProcessDeviceListHead | tipo Ghidra: _LIST_ENTRY | tamanho: 16 */
#define EPROCESS_OFFSET_SVMPROCESSDEVICELISTHEAD 1568u
#define EPROCESS_FIELD_SIZE_SVMPROCESSDEVICELISTHEAD 16u
/* Campo 132: LastFreezeInterruptTime | tipo Ghidra: ulong64 | tamanho: 8 */
#define EPROCESS_OFFSET_LASTFREEZEINTERRUPTTIME 1584u
#define EPROCESS_FIELD_SIZE_LASTFREEZEINTERRUPTTIME 8u
/* Campo 133: DiskCounters | tipo Ghidra: _PROCESS_DISK_COUNTERS * | tamanho: 8 */
#define EPROCESS_OFFSET_DISKCOUNTERS 1592u
#define EPROCESS_FIELD_SIZE_DISKCOUNTERS 8u
/* Campo 134: PicoContext | tipo Ghidra: void * | tamanho: 8 */
#define EPROCESS_OFFSET_PICOCONTEXT 1600u
#define EPROCESS_FIELD_SIZE_PICOCONTEXT 8u
/* Campo 135: EnclaveTable | tipo Ghidra: void * | tamanho: 8 */
#define EPROCESS_OFFSET_ENCLAVETABLE 1608u
#define EPROCESS_FIELD_SIZE_ENCLAVETABLE 8u
/* Campo 136: EnclaveNumber | tipo Ghidra: ulong64 | tamanho: 8 */
#define EPROCESS_OFFSET_ENCLAVENUMBER 1616u
#define EPROCESS_FIELD_SIZE_ENCLAVENUMBER 8u
/* Campo 137: EnclaveLock | tipo Ghidra: _EX_PUSH_LOCK | tamanho: 8 */
#define EPROCESS_OFFSET_ENCLAVELOCK 1624u
#define EPROCESS_FIELD_SIZE_ENCLAVELOCK 8u
/* Campo 138: HighPriorityFaultsAllowed | tipo Ghidra: ulong | tamanho: 4 */
#define EPROCESS_OFFSET_HIGHPRIORITYFAULTSALLOWED 1632u
#define EPROCESS_FIELD_SIZE_HIGHPRIORITYFAULTSALLOWED 4u
/* Campo 143: EnergyContext | tipo Ghidra: _PO_PROCESS_ENERGY_CONTEXT * | tamanho: 8 */
#define EPROCESS_OFFSET_ENERGYCONTEXT 1640u
#define EPROCESS_FIELD_SIZE_ENERGYCONTEXT 8u
/* Campo 144: VmContext | tipo Ghidra: void * | tamanho: 8 */
#define EPROCESS_OFFSET_VMCONTEXT 1648u
#define EPROCESS_FIELD_SIZE_VMCONTEXT 8u
/* Campo 145: SequenceNumber | tipo Ghidra: ulong64 | tamanho: 8 */
#define EPROCESS_OFFSET_SEQUENCENUMBER 1656u
#define EPROCESS_FIELD_SIZE_SEQUENCENUMBER 8u
/* Campo 146: CreateInterruptTime | tipo Ghidra: ulong64 | tamanho: 8 */
#define EPROCESS_OFFSET_CREATEINTERRUPTTIME 1664u
#define EPROCESS_FIELD_SIZE_CREATEINTERRUPTTIME 8u
/* Campo 147: CreateUnbiasedInterruptTime | tipo Ghidra: ulong64 | tamanho: 8 */
#define EPROCESS_OFFSET_CREATEUNBIASEDINTERRUPTTIME 1672u
#define EPROCESS_FIELD_SIZE_CREATEUNBIASEDINTERRUPTTIME 8u
/* Campo 148: TotalUnbiasedFrozenTime | tipo Ghidra: ulong64 | tamanho: 8 */
#define EPROCESS_OFFSET_TOTALUNBIASEDFROZENTIME 1680u
#define EPROCESS_FIELD_SIZE_TOTALUNBIASEDFROZENTIME 8u
/* Campo 149: LastAppStateUpdateTime | tipo Ghidra: ulong64 | tamanho: 8 */
#define EPROCESS_OFFSET_LASTAPPSTATEUPDATETIME 1688u
#define EPROCESS_FIELD_SIZE_LASTAPPSTATEUPDATETIME 8u
/* Campo 150: LastAppStateUptime | tipo Ghidra: ulong64:61 | tamanho: 8 */
#define EPROCESS_OFFSET_LASTAPPSTATEUPTIME 1696u
#define EPROCESS_FIELD_SIZE_LASTAPPSTATEUPTIME 8u
/* Campo 151: LastAppState | tipo Ghidra: ulong64:3 | tamanho: 1 */
#define EPROCESS_OFFSET_LASTAPPSTATE 1703u
#define EPROCESS_FIELD_SIZE_LASTAPPSTATE 1u
/* Campo 152: SharedCommitCharge | tipo Ghidra: ulong64 | tamanho: 8 */
#define EPROCESS_OFFSET_SHAREDCOMMITCHARGE 1704u
#define EPROCESS_FIELD_SIZE_SHAREDCOMMITCHARGE 8u
/* Campo 153: SharedCommitLock | tipo Ghidra: _EX_PUSH_LOCK | tamanho: 8 */
#define EPROCESS_OFFSET_SHAREDCOMMITLOCK 1712u
#define EPROCESS_FIELD_SIZE_SHAREDCOMMITLOCK 8u
/* Campo 154: SharedCommitLinks | tipo Ghidra: _LIST_ENTRY | tamanho: 16 */
#define EPROCESS_OFFSET_SHAREDCOMMITLINKS 1720u
#define EPROCESS_FIELD_SIZE_SHAREDCOMMITLINKS 16u
/* Campo 156: DiskIoAttribution | tipo Ghidra: void * | tamanho: 8 */
#define EPROCESS_OFFSET_DISKIOATTRIBUTION 1752u
#define EPROCESS_FIELD_SIZE_DISKIOATTRIBUTION 8u
/* Campo 157: DxgProcess | tipo Ghidra: void * | tamanho: 8 */
#define EPROCESS_OFFSET_DXGPROCESS 1760u
#define EPROCESS_FIELD_SIZE_DXGPROCESS 8u
/* Campo 158: Win32KFilterSet | tipo Ghidra: ulong | tamanho: 4 */
#define EPROCESS_OFFSET_WIN32KFILTERSET 1768u
#define EPROCESS_FIELD_SIZE_WIN32KFILTERSET 4u
/* Campo 159: Machine | tipo Ghidra: ushort | tamanho: 2 */
#define EPROCESS_OFFSET_MACHINE 1772u
#define EPROCESS_FIELD_SIZE_MACHINE 2u
/* Campo 160: MmSlabIdentity | tipo Ghidra: uchar | tamanho: 1 */
#define EPROCESS_OFFSET_MMSLABIDENTITY 1774u
#define EPROCESS_FIELD_SIZE_MMSLABIDENTITY 1u
/* Campo 161: Spare0 | tipo Ghidra: uchar | tamanho: 1 */
#define EPROCESS_OFFSET_SPARE0 1775u
#define EPROCESS_FIELD_SIZE_SPARE0 1u
/* Campo 162: ProcessTimerDelay | tipo Ghidra: _PS_INTERLOCKED_TIMER_DELAY_VALUES | tamanho: 8 */
#define EPROCESS_OFFSET_PROCESSTIMERDELAY 1776u
#define EPROCESS_FIELD_SIZE_PROCESSTIMERDELAY 8u
/* Campo 163: KTimerSets | tipo Ghidra: ulong | tamanho: 4 */
#define EPROCESS_OFFSET_KTIMERSETS 1784u
#define EPROCESS_FIELD_SIZE_KTIMERSETS 4u
/* Campo 164: KTimer2Sets | tipo Ghidra: ulong | tamanho: 4 */
#define EPROCESS_OFFSET_KTIMER2SETS 1788u
#define EPROCESS_FIELD_SIZE_KTIMER2SETS 4u
/* Campo 165: ThreadTimerSets | tipo Ghidra: ulong | tamanho: 4 */
#define EPROCESS_OFFSET_THREADTIMERSETS 1792u
#define EPROCESS_FIELD_SIZE_THREADTIMERSETS 4u
/* Campo 170: VirtualTimerListLock | tipo Ghidra: ulong64 | tamanho: 8 */
#define EPROCESS_OFFSET_VIRTUALTIMERLISTLOCK 1800u
#define EPROCESS_FIELD_SIZE_VIRTUALTIMERLISTLOCK 8u
/* Campo 171: VirtualTimerListHead | tipo Ghidra: _LIST_ENTRY | tamanho: 16 */
#define EPROCESS_OFFSET_VIRTUALTIMERLISTHEAD 1808u
#define EPROCESS_FIELD_SIZE_VIRTUALTIMERLISTHEAD 16u
/* Campo 175: PartitionObject | tipo Ghidra: void * | tamanho: 8 */
#define EPROCESS_OFFSET_PARTITIONOBJECT 1880u
#define EPROCESS_FIELD_SIZE_PARTITIONOBJECT 8u
/* Campo 176: SecurityDomain | tipo Ghidra: ulong64 | tamanho: 8 */
#define EPROCESS_OFFSET_SECURITYDOMAIN 1888u
#define EPROCESS_FIELD_SIZE_SECURITYDOMAIN 8u
/* Campo 177: ParentSecurityDomain | tipo Ghidra: ulong64 | tamanho: 8 */
#define EPROCESS_OFFSET_PARENTSECURITYDOMAIN 1896u
#define EPROCESS_FIELD_SIZE_PARENTSECURITYDOMAIN 8u
/* Campo 178: CoverageSamplerContext | tipo Ghidra: void * | tamanho: 8 */
#define EPROCESS_OFFSET_COVERAGESAMPLERCONTEXT 1904u
#define EPROCESS_FIELD_SIZE_COVERAGESAMPLERCONTEXT 8u
/* Campo 179: MmHotPatchContext | tipo Ghidra: void * | tamanho: 8 */
#define EPROCESS_OFFSET_MMHOTPATCHCONTEXT 1912u
#define EPROCESS_FIELD_SIZE_MMHOTPATCHCONTEXT 8u
/* Campo 180: DynamicEHContinuationTargetsTree | tipo Ghidra: _RTL_AVL_TREE | tamanho: 8 */
#define EPROCESS_OFFSET_DYNAMICEHCONTINUATIONTARGETSTREE 1920u
#define EPROCESS_FIELD_SIZE_DYNAMICEHCONTINUATIONTARGETSTREE 8u
/* Campo 181: DynamicEHContinuationTargetsLock | tipo Ghidra: _EX_PUSH_LOCK | tamanho: 8 */
#define EPROCESS_OFFSET_DYNAMICEHCONTINUATIONTARGETSLOCK 1928u
#define EPROCESS_FIELD_SIZE_DYNAMICEHCONTINUATIONTARGETSLOCK 8u
/* Campo 182: DynamicEnforcedCetCompatibleRanges | tipo Ghidra: _PS_DYNAMIC_ENFORCED_ADDRESS_RANGES | tamanho: 16 */
#define EPROCESS_OFFSET_DYNAMICENFORCEDCETCOMPATIBLERANGES 1936u
#define EPROCESS_FIELD_SIZE_DYNAMICENFORCEDCETCOMPATIBLERANGES 16u
/* Campo 183: DisabledComponentFlags | tipo Ghidra: ulong | tamanho: 4 */
#define EPROCESS_OFFSET_DISABLEDCOMPONENTFLAGS 1952u
#define EPROCESS_FIELD_SIZE_DISABLEDCOMPONENTFLAGS 4u
/* Campo 184: PageCombineSequence | tipo Ghidra: long | tamanho: 4 */
#define EPROCESS_OFFSET_PAGECOMBINESEQUENCE 1956u
#define EPROCESS_FIELD_SIZE_PAGECOMBINESEQUENCE 4u
/* Campo 185: EnableOptionalXStateFeaturesLock | tipo Ghidra: _EX_PUSH_LOCK | tamanho: 8 */
#define EPROCESS_OFFSET_ENABLEOPTIONALXSTATEFEATURESLOCK 1960u
#define EPROCESS_FIELD_SIZE_ENABLEOPTIONALXSTATEFEATURESLOCK 8u
/* Campo 186: PathRedirectionHashes | tipo Ghidra: ulong * | tamanho: 8 */
#define EPROCESS_OFFSET_PATHREDIRECTIONHASHES 1968u
#define EPROCESS_FIELD_SIZE_PATHREDIRECTIONHASHES 8u
/* Campo 187: SyscallProvider | tipo Ghidra: _PS_SYSCALL_PROVIDER * | tamanho: 8 */
#define EPROCESS_OFFSET_SYSCALLPROVIDER 1976u
#define EPROCESS_FIELD_SIZE_SYSCALLPROVIDER 8u
/* Campo 188: SyscallProviderProcessLinks | tipo Ghidra: _LIST_ENTRY | tamanho: 16 */
#define EPROCESS_OFFSET_SYSCALLPROVIDERPROCESSLINKS 1984u
#define EPROCESS_FIELD_SIZE_SYSCALLPROVIDERPROCESSLINKS 16u
/* Campo 189: SyscallProviderDispatchContext | tipo Ghidra: _PSP_SYSCALL_PROVIDER_DISPATCH_CONTEXT | tamanho: 8 */
#define EPROCESS_OFFSET_SYSCALLPROVIDERDISPATCHCONTEXT 2000u
#define EPROCESS_FIELD_SIZE_SYSCALLPROVIDERDISPATCHCONTEXT 8u
/* Campo 193: SupervisorDeviceAsid | tipo Ghidra: long | tamanho: 4 */
#define EPROCESS_OFFSET_SUPERVISORDEVICEASID 2020u
#define EPROCESS_FIELD_SIZE_SUPERVISORDEVICEASID 4u
/* Campo 194: SupervisorSvmData | tipo Ghidra: void * | tamanho: 8 */
#define EPROCESS_OFFSET_SUPERVISORSVMDATA 2024u
#define EPROCESS_FIELD_SIZE_SUPERVISORSVMDATA 8u
/* Campo 195: NetworkCounters | tipo Ghidra: _PROCESS_NETWORK_COUNTERS * | tamanho: 8 */
#define EPROCESS_OFFSET_NETWORKCOUNTERS 2032u
#define EPROCESS_FIELD_SIZE_NETWORKCOUNTERS 8u
/* Campo 196: Execution | tipo Ghidra: _PROCESS_EXECUTION | tamanho: 4 */
#define EPROCESS_OFFSET_EXECUTION 2040u
#define EPROCESS_FIELD_SIZE_EXECUTION 4u
/* Campo 201: ThreadIndexTable | tipo Ghidra: void * | tamanho: 8 */
#define EPROCESS_OFFSET_THREADINDEXTABLE 2048u
#define EPROCESS_FIELD_SIZE_THREADINDEXTABLE 8u
/* Campo 202: FreezeWorkLinks | tipo Ghidra: _LIST_ENTRY | tamanho: 16 */
#define EPROCESS_OFFSET_FREEZEWORKLINKS 2056u
#define EPROCESS_FIELD_SIZE_FREEZEWORKLINKS 16u
/* Campo 203: PpmPolicyLock | tipo Ghidra: _EX_PUSH_LOCK | tamanho: 8 */
#define EPROCESS_OFFSET_PPMPOLICYLOCK 2072u
#define EPROCESS_FIELD_SIZE_PPMPOLICYLOCK 8u
/* Campo 204: BamPpmPolicy | tipo Ghidra: ulong | tamanho: 4 */
#define EPROCESS_OFFSET_BAMPPMPOLICY 2080u
#define EPROCESS_FIELD_SIZE_BAMPPMPOLICY 4u
/* Campo 209: ProcessQosCallbackListEntry | tipo Ghidra: _SINGLE_LIST_ENTRY | tamanho: 8 */
#define EPROCESS_OFFSET_PROCESSQOSCALLBACKLISTENTRY 2088u
#define EPROCESS_FIELD_SIZE_PROCESSQOSCALLBACKLISTENTRY 8u

#if defined(__cplusplus)
static_assert(sizeof(EPROCESS) == 2112, "EPROCESS size mismatch");
#else
_Static_assert(sizeof(EPROCESS) == 2112, "EPROCESS size mismatch");
#endif

#endif /* WRK_RECON_EPROCESS_H */
