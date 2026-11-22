#ifndef WRK_RECON_ETHREAD_H
#define WRK_RECON_ETHREAD_H

#include <stdint.h>

/* Layout x64 extraido do inventario Ghidra: _ETHREAD.
 * Tamanho total confirmado: 1944 bytes; campos inventariados: 76.
 * O armazenamento e opaco nesta etapa: tipos aninhados, unioes e bitfields
 * nao sao reinterpretados como C ate serem validados individualmente.
 */
typedef struct _ETHREAD {
    uint8_t _storage[1944];
} ETHREAD, *PETHREAD;

#define ETHREAD_SIZE 1944u
/* Campo 0: Tcb | tipo Ghidra: _KTHREAD | tamanho: 1216 */
#define ETHREAD_OFFSET_TCB 0u
#define ETHREAD_FIELD_SIZE_TCB 1216u
/* Campo 1: CreateTime | tipo Ghidra: _LARGE_INTEGER | tamanho: 8 */
#define ETHREAD_OFFSET_CREATETIME 1216u
#define ETHREAD_FIELD_SIZE_CREATETIME 8u
/* Campo 5: ActiveTimerListLock | tipo Ghidra: ulong64 | tamanho: 8 */
#define ETHREAD_OFFSET_ACTIVETIMERLISTLOCK 1264u
#define ETHREAD_FIELD_SIZE_ACTIVETIMERLISTLOCK 8u
/* Campo 6: ActiveTimerListHead | tipo Ghidra: _LIST_ENTRY | tamanho: 16 */
#define ETHREAD_OFFSET_ACTIVETIMERLISTHEAD 1272u
#define ETHREAD_FIELD_SIZE_ACTIVETIMERLISTHEAD 16u
/* Campo 7: Cid | tipo Ghidra: _CLIENT_ID | tamanho: 16 */
#define ETHREAD_OFFSET_CID 1288u
#define ETHREAD_FIELD_SIZE_CID 16u
/* Campo 9: ClientSecurity | tipo Ghidra: _PS_CLIENT_SECURITY_CONTEXT | tamanho: 8 */
#define ETHREAD_OFFSET_CLIENTSECURITY 1336u
#define ETHREAD_FIELD_SIZE_CLIENTSECURITY 8u
/* Campo 10: IrpList | tipo Ghidra: _LIST_ENTRY | tamanho: 16 */
#define ETHREAD_OFFSET_IRPLIST 1344u
#define ETHREAD_FIELD_SIZE_IRPLIST 16u
/* Campo 11: TopLevelIrp | tipo Ghidra: ulong64 | tamanho: 8 */
#define ETHREAD_OFFSET_TOPLEVELIRP 1360u
#define ETHREAD_FIELD_SIZE_TOPLEVELIRP 8u
/* Campo 12: DeviceToVerify | tipo Ghidra: _DEVICE_OBJECT * | tamanho: 8 */
#define ETHREAD_OFFSET_DEVICETOVERIFY 1368u
#define ETHREAD_FIELD_SIZE_DEVICETOVERIFY 8u
/* Campo 13: Win32StartAddress | tipo Ghidra: void * | tamanho: 8 */
#define ETHREAD_OFFSET_WIN32STARTADDRESS 1376u
#define ETHREAD_FIELD_SIZE_WIN32STARTADDRESS 8u
/* Campo 14: ChargeOnlySession | tipo Ghidra: void * | tamanho: 8 */
#define ETHREAD_OFFSET_CHARGEONLYSESSION 1384u
#define ETHREAD_FIELD_SIZE_CHARGEONLYSESSION 8u
/* Campo 15: LegacyPowerObject | tipo Ghidra: void * | tamanho: 8 */
#define ETHREAD_OFFSET_LEGACYPOWEROBJECT 1392u
#define ETHREAD_FIELD_SIZE_LEGACYPOWEROBJECT 8u
/* Campo 16: ThreadListEntry | tipo Ghidra: _LIST_ENTRY | tamanho: 16 */
#define ETHREAD_OFFSET_THREADLISTENTRY 1400u
#define ETHREAD_FIELD_SIZE_THREADLISTENTRY 16u
/* Campo 17: RundownProtect | tipo Ghidra: _EX_RUNDOWN_REF | tamanho: 8 */
#define ETHREAD_OFFSET_RUNDOWNPROTECT 1416u
#define ETHREAD_FIELD_SIZE_RUNDOWNPROTECT 8u
/* Campo 18: ThreadLock | tipo Ghidra: _EX_PUSH_LOCK | tamanho: 8 */
#define ETHREAD_OFFSET_THREADLOCK 1424u
#define ETHREAD_FIELD_SIZE_THREADLOCK 8u
/* Campo 19: ReadClusterSize | tipo Ghidra: ulong | tamanho: 4 */
#define ETHREAD_OFFSET_READCLUSTERSIZE 1432u
#define ETHREAD_FIELD_SIZE_READCLUSTERSIZE 4u
/* Campo 20: MmLockOrdering | tipo Ghidra: ulong | tamanho: 4 */
#define ETHREAD_OFFSET_MMLOCKORDERING 1436u
#define ETHREAD_FIELD_SIZE_MMLOCKORDERING 4u
/* Campo 24: CacheManagerActive | tipo Ghidra: uchar | tamanho: 1 */
#define ETHREAD_OFFSET_CACHEMANAGERACTIVE 1452u
#define ETHREAD_FIELD_SIZE_CACHEMANAGERACTIVE 1u
/* Campo 25: DisablePageFaultClustering | tipo Ghidra: uchar | tamanho: 1 */
#define ETHREAD_OFFSET_DISABLEPAGEFAULTCLUSTERING 1453u
#define ETHREAD_FIELD_SIZE_DISABLEPAGEFAULTCLUSTERING 1u
/* Campo 26: ActiveFaultCount | tipo Ghidra: uchar | tamanho: 1 */
#define ETHREAD_OFFSET_ACTIVEFAULTCOUNT 1454u
#define ETHREAD_FIELD_SIZE_ACTIVEFAULTCOUNT 1u
/* Campo 27: LockOrderState | tipo Ghidra: uchar | tamanho: 1 */
#define ETHREAD_OFFSET_LOCKORDERSTATE 1455u
#define ETHREAD_FIELD_SIZE_LOCKORDERSTATE 1u
/* Campo 28: SharedPsModuleLockAcquires | tipo Ghidra: ulong | tamanho: 4 */
#define ETHREAD_OFFSET_SHAREDPSMODULELOCKACQUIRES 1456u
#define ETHREAD_FIELD_SIZE_SHAREDPSMODULELOCKACQUIRES 4u
/* Campo 29: MmReserved | tipo Ghidra: ulong | tamanho: 4 */
#define ETHREAD_OFFSET_MMRESERVED 1460u
#define ETHREAD_FIELD_SIZE_MMRESERVED 4u
/* Campo 30: AlpcMessageId | tipo Ghidra: ulong64 | tamanho: 8 */
#define ETHREAD_OFFSET_ALPCMESSAGEID 1464u
#define ETHREAD_FIELD_SIZE_ALPCMESSAGEID 8u
/* Campo 32: AlpcWaitListEntry | tipo Ghidra: _LIST_ENTRY | tamanho: 16 */
#define ETHREAD_OFFSET_ALPCWAITLISTENTRY 1480u
#define ETHREAD_FIELD_SIZE_ALPCWAITLISTENTRY 16u
/* Campo 33: ExitStatus | tipo Ghidra: long | tamanho: 4 */
#define ETHREAD_OFFSET_EXITSTATUS 1496u
#define ETHREAD_FIELD_SIZE_EXITSTATUS 4u
/* Campo 34: CacheManagerCount | tipo Ghidra: ulong | tamanho: 4 */
#define ETHREAD_OFFSET_CACHEMANAGERCOUNT 1500u
#define ETHREAD_FIELD_SIZE_CACHEMANAGERCOUNT 4u
/* Campo 35: IoBoostCount | tipo Ghidra: ulong | tamanho: 4 */
#define ETHREAD_OFFSET_IOBOOSTCOUNT 1504u
#define ETHREAD_FIELD_SIZE_IOBOOSTCOUNT 4u
/* Campo 36: IoQoSBoostCount | tipo Ghidra: ulong | tamanho: 4 */
#define ETHREAD_OFFSET_IOQOSBOOSTCOUNT 1508u
#define ETHREAD_FIELD_SIZE_IOQOSBOOSTCOUNT 4u
/* Campo 37: IoQoSThrottleCount | tipo Ghidra: ulong | tamanho: 4 */
#define ETHREAD_OFFSET_IOQOSTHROTTLECOUNT 1512u
#define ETHREAD_FIELD_SIZE_IOQOSTHROTTLECOUNT 4u
/* Campo 38: KernelStackReference | tipo Ghidra: ulong | tamanho: 4 */
#define ETHREAD_OFFSET_KERNELSTACKREFERENCE 1516u
#define ETHREAD_FIELD_SIZE_KERNELSTACKREFERENCE 4u
/* Campo 39: BoostList | tipo Ghidra: _LIST_ENTRY | tamanho: 16 */
#define ETHREAD_OFFSET_BOOSTLIST 1520u
#define ETHREAD_FIELD_SIZE_BOOSTLIST 16u
/* Campo 40: DeboostList | tipo Ghidra: _LIST_ENTRY | tamanho: 16 */
#define ETHREAD_OFFSET_DEBOOSTLIST 1536u
#define ETHREAD_FIELD_SIZE_DEBOOSTLIST 16u
/* Campo 41: BoostListLock | tipo Ghidra: ulong64 | tamanho: 8 */
#define ETHREAD_OFFSET_BOOSTLISTLOCK 1552u
#define ETHREAD_FIELD_SIZE_BOOSTLISTLOCK 8u
/* Campo 42: IrpListLock | tipo Ghidra: ulong64 | tamanho: 8 */
#define ETHREAD_OFFSET_IRPLISTLOCK 1560u
#define ETHREAD_FIELD_SIZE_IRPLISTLOCK 8u
/* Campo 43: ReservedForSynchTracking | tipo Ghidra: void * | tamanho: 8 */
#define ETHREAD_OFFSET_RESERVEDFORSYNCHTRACKING 1568u
#define ETHREAD_FIELD_SIZE_RESERVEDFORSYNCHTRACKING 8u
/* Campo 44: CmCallbackListHead | tipo Ghidra: _SINGLE_LIST_ENTRY | tamanho: 8 */
#define ETHREAD_OFFSET_CMCALLBACKLISTHEAD 1576u
#define ETHREAD_FIELD_SIZE_CMCALLBACKLISTHEAD 8u
/* Campo 45: ActivityId | tipo Ghidra: _GUID * | tamanho: 8 */
#define ETHREAD_OFFSET_ACTIVITYID 1584u
#define ETHREAD_FIELD_SIZE_ACTIVITYID 8u
/* Campo 46: SeLearningModeListHead | tipo Ghidra: _SINGLE_LIST_ENTRY | tamanho: 8 */
#define ETHREAD_OFFSET_SELEARNINGMODELISTHEAD 1592u
#define ETHREAD_FIELD_SIZE_SELEARNINGMODELISTHEAD 8u
/* Campo 47: VerifierContext | tipo Ghidra: void * | tamanho: 8 */
#define ETHREAD_OFFSET_VERIFIERCONTEXT 1600u
#define ETHREAD_FIELD_SIZE_VERIFIERCONTEXT 8u
/* Campo 48: AdjustedClientToken | tipo Ghidra: void * | tamanho: 8 */
#define ETHREAD_OFFSET_ADJUSTEDCLIENTTOKEN 1608u
#define ETHREAD_FIELD_SIZE_ADJUSTEDCLIENTTOKEN 8u
/* Campo 49: WorkOnBehalfThread | tipo Ghidra: void * | tamanho: 8 */
#define ETHREAD_OFFSET_WORKONBEHALFTHREAD 1616u
#define ETHREAD_FIELD_SIZE_WORKONBEHALFTHREAD 8u
/* Campo 50: PropertySet | tipo Ghidra: _PS_PROPERTY_SET | tamanho: 24 */
#define ETHREAD_OFFSET_PROPERTYSET 1624u
#define ETHREAD_FIELD_SIZE_PROPERTYSET 24u
/* Campo 51: PicoContext | tipo Ghidra: void * | tamanho: 8 */
#define ETHREAD_OFFSET_PICOCONTEXT 1648u
#define ETHREAD_FIELD_SIZE_PICOCONTEXT 8u
/* Campo 52: UserFsBase | tipo Ghidra: ulong64 | tamanho: 8 */
#define ETHREAD_OFFSET_USERFSBASE 1656u
#define ETHREAD_FIELD_SIZE_USERFSBASE 8u
/* Campo 53: UserGsBase | tipo Ghidra: ulong64 | tamanho: 8 */
#define ETHREAD_OFFSET_USERGSBASE 1664u
#define ETHREAD_FIELD_SIZE_USERGSBASE 8u
/* Campo 54: EnergyValues | tipo Ghidra: _THREAD_ENERGY_VALUES * | tamanho: 8 */
#define ETHREAD_OFFSET_ENERGYVALUES 1672u
#define ETHREAD_FIELD_SIZE_ENERGYVALUES 8u
/* Campo 56: Silo | tipo Ghidra: _EJOB * | tamanho: 8 */
#define ETHREAD_OFFSET_SILO 1688u
#define ETHREAD_FIELD_SIZE_SILO 8u
/* Campo 57: ThreadName | tipo Ghidra: _UNICODE_STRING * | tamanho: 8 */
#define ETHREAD_OFFSET_THREADNAME 1696u
#define ETHREAD_FIELD_SIZE_THREADNAME 8u
/* Campo 58: SetContextState | tipo Ghidra: _CONTEXT * | tamanho: 8 */
#define ETHREAD_OFFSET_SETCONTEXTSTATE 1704u
#define ETHREAD_FIELD_SIZE_SETCONTEXTSTATE 8u
/* Campo 59: EtwSupport | tipo Ghidra: void * | tamanho: 8 */
#define ETHREAD_OFFSET_ETWSUPPORT 1712u
#define ETHREAD_FIELD_SIZE_ETWSUPPORT 8u
/* Campo 60: OwnerEntryListHead | tipo Ghidra: _LIST_ENTRY | tamanho: 16 */
#define ETHREAD_OFFSET_OWNERENTRYLISTHEAD 1720u
#define ETHREAD_FIELD_SIZE_OWNERENTRYLISTHEAD 16u
/* Campo 61: DisownedOwnerEntryListLock | tipo Ghidra: ulong64 | tamanho: 8 */
#define ETHREAD_OFFSET_DISOWNEDOWNERENTRYLISTLOCK 1736u
#define ETHREAD_FIELD_SIZE_DISOWNEDOWNERENTRYLISTLOCK 8u
/* Campo 62: DisownedOwnerEntryListHead | tipo Ghidra: _LIST_ENTRY | tamanho: 16 */
#define ETHREAD_OFFSET_DISOWNEDOWNERENTRYLISTHEAD 1744u
#define ETHREAD_FIELD_SIZE_DISOWNEDOWNERENTRYLISTHEAD 16u
/* Campo 63: SchedulerSharedDataObject | tipo Ghidra: void * | tamanho: 8 */
#define ETHREAD_OFFSET_SCHEDULERSHAREDDATAOBJECT 1760u
#define ETHREAD_FIELD_SIZE_SCHEDULERSHAREDDATAOBJECT 8u
/* Campo 64: CmThreadInfo | tipo Ghidra: void * | tamanho: 8 */
#define ETHREAD_OFFSET_CMTHREADINFO 1768u
#define ETHREAD_FIELD_SIZE_CMTHREADINFO 8u
/* Campo 65: FlsData | tipo Ghidra: void * | tamanho: 8 */
#define ETHREAD_OFFSET_FLSDATA 1776u
#define ETHREAD_FIELD_SIZE_FLSDATA 8u
/* Campo 66: LastExpectedRunTime | tipo Ghidra: ulong | tamanho: 4 */
#define ETHREAD_OFFSET_LASTEXPECTEDRUNTIME 1784u
#define ETHREAD_FIELD_SIZE_LASTEXPECTEDRUNTIME 4u
/* Campo 67: LastSoftParkElectionRunTime | tipo Ghidra: ulong | tamanho: 4 */
#define ETHREAD_OFFSET_LASTSOFTPARKELECTIONRUNTIME 1788u
#define ETHREAD_FIELD_SIZE_LASTSOFTPARKELECTIONRUNTIME 4u
/* Campo 68: LastSoftParkElectionGeneration | tipo Ghidra: ulong64 | tamanho: 8 */
#define ETHREAD_OFFSET_LASTSOFTPARKELECTIONGENERATION 1792u
#define ETHREAD_FIELD_SIZE_LASTSOFTPARKELECTIONGENERATION 8u
/* Campo 69: LastSoftParkElectionGroupAffinity | tipo Ghidra: _GROUP_AFFINITY | tamanho: 16 */
#define ETHREAD_OFFSET_LASTSOFTPARKELECTIONGROUPAFFINITY 1800u
#define ETHREAD_FIELD_SIZE_LASTSOFTPARKELECTIONGROUPAFFINITY 16u
/* Campo 70: UserIsolationDomain | tipo Ghidra: ulong64 | tamanho: 8 */
#define ETHREAD_OFFSET_USERISOLATIONDOMAIN 1816u
#define ETHREAD_FIELD_SIZE_USERISOLATIONDOMAIN 8u
/* Campo 72: Win32kThreadLock | tipo Ghidra: ulong64 | tamanho: 8 */
#define ETHREAD_OFFSET_WIN32KTHREADLOCK 1912u
#define ETHREAD_FIELD_SIZE_WIN32KTHREADLOCK 8u
/* Campo 73: ThreadIndex | tipo Ghidra: void * | tamanho: 8 */
#define ETHREAD_OFFSET_THREADINDEX 1920u
#define ETHREAD_FIELD_SIZE_THREADINDEX 8u
/* Campo 74: MmFaultClusterContext | tipo Ghidra: void * | tamanho: 8 */
#define ETHREAD_OFFSET_MMFAULTCLUSTERCONTEXT 1928u
#define ETHREAD_FIELD_SIZE_MMFAULTCLUSTERCONTEXT 8u
/* Campo 75: ProcessFastRef | tipo Ghidra: _EX_FAST_REF | tamanho: 8 */
#define ETHREAD_OFFSET_PROCESSFASTREF 1936u
#define ETHREAD_FIELD_SIZE_PROCESSFASTREF 8u

#if defined(__cplusplus)
static_assert(sizeof(ETHREAD) == 1944, "ETHREAD size mismatch");
#else
_Static_assert(sizeof(ETHREAD) == 1944, "ETHREAD size mismatch");
#endif

#endif /* WRK_RECON_ETHREAD_H */
