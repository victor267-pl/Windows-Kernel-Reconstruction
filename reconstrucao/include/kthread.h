#ifndef WRK_RECON_KTHREAD_H
#define WRK_RECON_KTHREAD_H

#include <stdint.h>

/* Layout x64 extraido do inventario Ghidra: _KTHREAD.
 * Tamanho total confirmado: 1216 bytes; campos inventariados: 124.
 * O armazenamento e opaco nesta etapa: tipos aninhados, unioes e bitfields
 * nao sao reinterpretados como C ate serem validados individualmente.
 */
typedef struct _KTHREAD {
    uint8_t _storage[1216];
} KTHREAD, *PKTHREAD;

#define KTHREAD_SIZE 1216u
/* Campo 0: Header | tipo Ghidra: _DISPATCHER_HEADER | tamanho: 24 */
#define KTHREAD_OFFSET_HEADER 0u
#define KTHREAD_FIELD_SIZE_HEADER 24u
/* Campo 1: SListFaultAddress | tipo Ghidra: void * | tamanho: 8 */
#define KTHREAD_OFFSET_SLISTFAULTADDRESS 24u
#define KTHREAD_FIELD_SIZE_SLISTFAULTADDRESS 8u
/* Campo 2: QuantumTarget | tipo Ghidra: ulong64 | tamanho: 8 */
#define KTHREAD_OFFSET_QUANTUMTARGET 32u
#define KTHREAD_FIELD_SIZE_QUANTUMTARGET 8u
/* Campo 3: InitialStack | tipo Ghidra: void * | tamanho: 8 */
#define KTHREAD_OFFSET_INITIALSTACK 40u
#define KTHREAD_FIELD_SIZE_INITIALSTACK 8u
/* Campo 4: StackLimit | tipo Ghidra: void * | tamanho: 8 */
#define KTHREAD_OFFSET_STACKLIMIT 48u
#define KTHREAD_FIELD_SIZE_STACKLIMIT 8u
/* Campo 5: StackBase | tipo Ghidra: void * | tamanho: 8 */
#define KTHREAD_OFFSET_STACKBASE 56u
#define KTHREAD_FIELD_SIZE_STACKBASE 8u
/* Campo 6: ThreadLock | tipo Ghidra: ulong64 | tamanho: 8 */
#define KTHREAD_OFFSET_THREADLOCK 64u
#define KTHREAD_FIELD_SIZE_THREADLOCK 8u
/* Campo 7: CycleTime | tipo Ghidra: ulong64 | tamanho: 8 */
#define KTHREAD_OFFSET_CYCLETIME 72u
#define KTHREAD_FIELD_SIZE_CYCLETIME 8u
/* Campo 8: CurrentRunTime | tipo Ghidra: ulong | tamanho: 4 */
#define KTHREAD_OFFSET_CURRENTRUNTIME 80u
#define KTHREAD_FIELD_SIZE_CURRENTRUNTIME 4u
/* Campo 9: ExpectedRunTime | tipo Ghidra: ulong | tamanho: 4 */
#define KTHREAD_OFFSET_EXPECTEDRUNTIME 84u
#define KTHREAD_FIELD_SIZE_EXPECTEDRUNTIME 4u
/* Campo 10: KernelStack | tipo Ghidra: void * | tamanho: 8 */
#define KTHREAD_OFFSET_KERNELSTACK 88u
#define KTHREAD_FIELD_SIZE_KERNELSTACK 8u
/* Campo 11: StateSaveArea | tipo Ghidra: _XSAVE_FORMAT * | tamanho: 8 */
#define KTHREAD_OFFSET_STATESAVEAREA 96u
#define KTHREAD_FIELD_SIZE_STATESAVEAREA 8u
/* Campo 12: SchedulingGroup | tipo Ghidra: _KSCHEDULING_GROUP * | tamanho: 8 */
#define KTHREAD_OFFSET_SCHEDULINGGROUP 104u
#define KTHREAD_FIELD_SIZE_SCHEDULINGGROUP 8u
/* Campo 13: WaitRegister | tipo Ghidra: _KWAIT_STATUS_REGISTER | tamanho: 1 */
#define KTHREAD_OFFSET_WAITREGISTER 112u
#define KTHREAD_FIELD_SIZE_WAITREGISTER 1u
/* Campo 14: Running | tipo Ghidra: uchar | tamanho: 1 */
#define KTHREAD_OFFSET_RUNNING 113u
#define KTHREAD_FIELD_SIZE_RUNNING 1u
/* Campo 15: Alerted | tipo Ghidra: uchar[2] | tamanho: 2 */
#define KTHREAD_OFFSET_ALERTED 114u
#define KTHREAD_FIELD_SIZE_ALERTED 2u
/* Campo 18: Tag | tipo Ghidra: uchar | tamanho: 1 */
#define KTHREAD_OFFSET_TAG 124u
#define KTHREAD_FIELD_SIZE_TAG 1u
/* Campo 21: SystemCallNumber | tipo Ghidra: ulong | tamanho: 4 */
#define KTHREAD_OFFSET_SYSTEMCALLNUMBER 128u
#define KTHREAD_FIELD_SIZE_SYSTEMCALLNUMBER 4u
/* Campo 22: ReadyTime | tipo Ghidra: ulong | tamanho: 4 */
#define KTHREAD_OFFSET_READYTIME 132u
#define KTHREAD_FIELD_SIZE_READYTIME 4u
/* Campo 23: FirstArgument | tipo Ghidra: void * | tamanho: 8 */
#define KTHREAD_OFFSET_FIRSTARGUMENT 136u
#define KTHREAD_FIELD_SIZE_FIRSTARGUMENT 8u
/* Campo 24: TrapFrame | tipo Ghidra: _KTRAP_FRAME * | tamanho: 8 */
#define KTHREAD_OFFSET_TRAPFRAME 144u
#define KTHREAD_FIELD_SIZE_TRAPFRAME 8u
/* Campo 26: WaitStatus | tipo Ghidra: long64 | tamanho: 8 */
#define KTHREAD_OFFSET_WAITSTATUS 200u
#define KTHREAD_FIELD_SIZE_WAITSTATUS 8u
/* Campo 27: WaitBlockList | tipo Ghidra: _KWAIT_BLOCK * | tamanho: 8 */
#define KTHREAD_OFFSET_WAITBLOCKLIST 208u
#define KTHREAD_FIELD_SIZE_WAITBLOCKLIST 8u
/* Campo 29: Queue | tipo Ghidra: _DISPATCHER_HEADER * | tamanho: 8 */
#define KTHREAD_OFFSET_QUEUE 232u
#define KTHREAD_FIELD_SIZE_QUEUE 8u
/* Campo 30: Teb | tipo Ghidra: void * | tamanho: 8 */
#define KTHREAD_OFFSET_TEB 240u
#define KTHREAD_FIELD_SIZE_TEB 8u
/* Campo 31: RelativeTimerBias | tipo Ghidra: ulong64 | tamanho: 8 */
#define KTHREAD_OFFSET_RELATIVETIMERBIAS 248u
#define KTHREAD_FIELD_SIZE_RELATIVETIMERBIAS 8u
/* Campo 32: Timer | tipo Ghidra: _KTIMER | tamanho: 64 */
#define KTHREAD_OFFSET_TIMER 256u
#define KTHREAD_FIELD_SIZE_TIMER 64u
/* Campo 35: BamQosLevel | tipo Ghidra: uchar | tamanho: 1 */
#define KTHREAD_OFFSET_BAMQOSLEVEL 516u
#define KTHREAD_FIELD_SIZE_BAMQOSLEVEL 1u
/* Campo 36: HardwareFeedbackClass | tipo Ghidra: uchar | tamanho: 1 */
#define KTHREAD_OFFSET_HARDWAREFEEDBACKCLASS 517u
#define KTHREAD_FIELD_SIZE_HARDWAREFEEDBACKCLASS 1u
/* Campo 38: QueueListEntry | tipo Ghidra: _LIST_ENTRY | tamanho: 16 */
#define KTHREAD_OFFSET_QUEUELISTENTRY 520u
#define KTHREAD_FIELD_SIZE_QUEUELISTENTRY 16u
/* Campo 40: QueuePriority | tipo Ghidra: long | tamanho: 4 */
#define KTHREAD_OFFSET_QUEUEPRIORITY 540u
#define KTHREAD_FIELD_SIZE_QUEUEPRIORITY 4u
/* Campo 41: Process | tipo Ghidra: _KPROCESS * | tamanho: 8 */
#define KTHREAD_OFFSET_PROCESS 544u
#define KTHREAD_FIELD_SIZE_PROCESS 8u
/* Campo 42: UserAffinity | tipo Ghidra: _KAFFINITY_EX * | tamanho: 8 */
#define KTHREAD_OFFSET_USERAFFINITY 552u
#define KTHREAD_FIELD_SIZE_USERAFFINITY 8u
/* Campo 43: UserAffinityPrimaryGroup | tipo Ghidra: ushort | tamanho: 2 */
#define KTHREAD_OFFSET_USERAFFINITYPRIMARYGROUP 560u
#define KTHREAD_FIELD_SIZE_USERAFFINITYPRIMARYGROUP 2u
/* Campo 44: PreviousMode | tipo Ghidra: char | tamanho: 1 */
#define KTHREAD_OFFSET_PREVIOUSMODE 562u
#define KTHREAD_FIELD_SIZE_PREVIOUSMODE 1u
/* Campo 45: BasePriority | tipo Ghidra: char | tamanho: 1 */
#define KTHREAD_OFFSET_BASEPRIORITY 563u
#define KTHREAD_FIELD_SIZE_BASEPRIORITY 1u
/* Campo 46: Spare24 | tipo Ghidra: uchar | tamanho: 1 */
#define KTHREAD_OFFSET_SPARE24 564u
#define KTHREAD_FIELD_SIZE_SPARE24 1u
/* Campo 47: Preempted | tipo Ghidra: uchar | tamanho: 1 */
#define KTHREAD_OFFSET_PREEMPTED 565u
#define KTHREAD_FIELD_SIZE_PREEMPTED 1u
/* Campo 48: AdjustReason | tipo Ghidra: uchar | tamanho: 1 */
#define KTHREAD_OFFSET_ADJUSTREASON 566u
#define KTHREAD_FIELD_SIZE_ADJUSTREASON 1u
/* Campo 49: AdjustIncrement | tipo Ghidra: char | tamanho: 1 */
#define KTHREAD_OFFSET_ADJUSTINCREMENT 567u
#define KTHREAD_FIELD_SIZE_ADJUSTINCREMENT 1u
/* Campo 50: AffinityVersion | tipo Ghidra: ulong64 | tamanho: 8 */
#define KTHREAD_OFFSET_AFFINITYVERSION 568u
#define KTHREAD_FIELD_SIZE_AFFINITYVERSION 8u
/* Campo 51: Affinity | tipo Ghidra: _KAFFINITY_EX * | tamanho: 8 */
#define KTHREAD_OFFSET_AFFINITY 576u
#define KTHREAD_FIELD_SIZE_AFFINITY 8u
/* Campo 52: AffinityPrimaryGroup | tipo Ghidra: ushort | tamanho: 2 */
#define KTHREAD_OFFSET_AFFINITYPRIMARYGROUP 584u
#define KTHREAD_FIELD_SIZE_AFFINITYPRIMARYGROUP 2u
/* Campo 53: ApcStateIndex | tipo Ghidra: uchar | tamanho: 1 */
#define KTHREAD_OFFSET_APCSTATEINDEX 586u
#define KTHREAD_FIELD_SIZE_APCSTATEINDEX 1u
/* Campo 54: WaitBlockCount | tipo Ghidra: uchar | tamanho: 1 */
#define KTHREAD_OFFSET_WAITBLOCKCOUNT 587u
#define KTHREAD_FIELD_SIZE_WAITBLOCKCOUNT 1u
/* Campo 55: IdealProcessor | tipo Ghidra: ulong | tamanho: 4 */
#define KTHREAD_OFFSET_IDEALPROCESSOR 588u
#define KTHREAD_FIELD_SIZE_IDEALPROCESSOR 4u
/* Campo 56: NpxState | tipo Ghidra: ulong64 | tamanho: 8 */
#define KTHREAD_OFFSET_NPXSTATE 592u
#define KTHREAD_FIELD_SIZE_NPXSTATE 8u
/* Campo 59: SuspendEvent | tipo Ghidra: _KEVENT | tamanho: 24 */
#define KTHREAD_OFFSET_SUSPENDEVENT 736u
#define KTHREAD_FIELD_SIZE_SUSPENDEVENT 24u
/* Campo 60: ThreadListEntry | tipo Ghidra: _LIST_ENTRY | tamanho: 16 */
#define KTHREAD_OFFSET_THREADLISTENTRY 760u
#define KTHREAD_FIELD_SIZE_THREADLISTENTRY 16u
/* Campo 61: MutantListHead | tipo Ghidra: _LIST_ENTRY | tamanho: 16 */
#define KTHREAD_OFFSET_MUTANTLISTHEAD 776u
#define KTHREAD_FIELD_SIZE_MUTANTLISTHEAD 16u
/* Campo 64: WobPriority | tipo Ghidra: char | tamanho: 1 */
#define KTHREAD_OFFSET_WOBPRIORITY 795u
#define KTHREAD_FIELD_SIZE_WOBPRIORITY 1u
/* Campo 65: SecureThreadCookie | tipo Ghidra: ulong | tamanho: 4 */
#define KTHREAD_OFFSET_SECURETHREADCOOKIE 796u
#define KTHREAD_FIELD_SIZE_SECURETHREADCOOKIE 4u
/* Campo 66: SchedulerSharedSystemSlot | tipo Ghidra: void * | tamanho: 8 */
#define KTHREAD_OFFSET_SCHEDULERSHAREDSYSTEMSLOT 800u
#define KTHREAD_FIELD_SIZE_SCHEDULERSHAREDSYSTEMSLOT 8u
/* Campo 67: PropagateBoostsEntry | tipo Ghidra: _SINGLE_LIST_ENTRY | tamanho: 8 */
#define KTHREAD_OFFSET_PROPAGATEBOOSTSENTRY 808u
#define KTHREAD_FIELD_SIZE_PROPAGATEBOOSTSENTRY 8u
/* Campo 68: IoSelfBoostsEntry | tipo Ghidra: _SINGLE_LIST_ENTRY | tamanho: 8 */
#define KTHREAD_OFFSET_IOSELFBOOSTSENTRY 816u
#define KTHREAD_FIELD_SIZE_IOSELFBOOSTSENTRY 8u
/* Campo 69: PriorityFloorCounts | tipo Ghidra: uchar[32] | tamanho: 32 */
#define KTHREAD_OFFSET_PRIORITYFLOORCOUNTS 824u
#define KTHREAD_FIELD_SIZE_PRIORITYFLOORCOUNTS 32u
/* Campo 70: PriorityFloorSummary | tipo Ghidra: ulong | tamanho: 4 */
#define KTHREAD_OFFSET_PRIORITYFLOORSUMMARY 856u
#define KTHREAD_FIELD_SIZE_PRIORITYFLOORSUMMARY 4u
/* Campo 71: AbCompletedIoBoostCount | tipo Ghidra: long | tamanho: 4 */
#define KTHREAD_OFFSET_ABCOMPLETEDIOBOOSTCOUNT 860u
#define KTHREAD_FIELD_SIZE_ABCOMPLETEDIOBOOSTCOUNT 4u
/* Campo 72: AbCompletedIoQoSBoostCount | tipo Ghidra: long | tamanho: 4 */
#define KTHREAD_OFFSET_ABCOMPLETEDIOQOSBOOSTCOUNT 864u
#define KTHREAD_FIELD_SIZE_ABCOMPLETEDIOQOSBOOSTCOUNT 4u
/* Campo 73: KeReferenceCount | tipo Ghidra: short | tamanho: 2 */
#define KTHREAD_OFFSET_KEREFERENCECOUNT 868u
#define KTHREAD_FIELD_SIZE_KEREFERENCECOUNT 2u
/* Campo 74: DecayBoost | tipo Ghidra: char | tamanho: 1 */
#define KTHREAD_OFFSET_DECAYBOOST 870u
#define KTHREAD_FIELD_SIZE_DECAYBOOST 1u
/* Campo 75: Spare6 | tipo Ghidra: uchar | tamanho: 1 */
#define KTHREAD_OFFSET_SPARE6 871u
#define KTHREAD_FIELD_SIZE_SPARE6 1u
/* Campo 76: ForegroundLossTime | tipo Ghidra: ulong | tamanho: 4 */
#define KTHREAD_OFFSET_FOREGROUNDLOSSTIME 872u
#define KTHREAD_FIELD_SIZE_FOREGROUNDLOSSTIME 4u
/* Campo 78: ReadOperationCount | tipo Ghidra: long64 | tamanho: 8 */
#define KTHREAD_OFFSET_READOPERATIONCOUNT 896u
#define KTHREAD_FIELD_SIZE_READOPERATIONCOUNT 8u
/* Campo 79: WriteOperationCount | tipo Ghidra: long64 | tamanho: 8 */
#define KTHREAD_OFFSET_WRITEOPERATIONCOUNT 904u
#define KTHREAD_FIELD_SIZE_WRITEOPERATIONCOUNT 8u
/* Campo 80: OtherOperationCount | tipo Ghidra: long64 | tamanho: 8 */
#define KTHREAD_OFFSET_OTHEROPERATIONCOUNT 912u
#define KTHREAD_FIELD_SIZE_OTHEROPERATIONCOUNT 8u
/* Campo 81: ReadTransferCount | tipo Ghidra: long64 | tamanho: 8 */
#define KTHREAD_OFFSET_READTRANSFERCOUNT 920u
#define KTHREAD_FIELD_SIZE_READTRANSFERCOUNT 8u
/* Campo 82: WriteTransferCount | tipo Ghidra: long64 | tamanho: 8 */
#define KTHREAD_OFFSET_WRITETRANSFERCOUNT 928u
#define KTHREAD_FIELD_SIZE_WRITETRANSFERCOUNT 8u
/* Campo 83: OtherTransferCount | tipo Ghidra: long64 | tamanho: 8 */
#define KTHREAD_OFFSET_OTHERTRANSFERCOUNT 936u
#define KTHREAD_FIELD_SIZE_OTHERTRANSFERCOUNT 8u
/* Campo 84: QueuedScb | tipo Ghidra: _KSCB * | tamanho: 8 */
#define KTHREAD_OFFSET_QUEUEDSCB 944u
#define KTHREAD_FIELD_SIZE_QUEUEDSCB 8u
/* Campo 85: ThreadTimerDelay | tipo Ghidra: ulong | tamanho: 4 */
#define KTHREAD_OFFSET_THREADTIMERDELAY 952u
#define KTHREAD_FIELD_SIZE_THREADTIMERDELAY 4u
/* Campo 86: Spare26 | tipo Ghidra: ushort | tamanho: 2 */
#define KTHREAD_OFFSET_SPARE26 956u
#define KTHREAD_FIELD_SIZE_SPARE26 2u
/* Campo 87: PpmPolicy | tipo Ghidra: uchar | tamanho: 1 */
#define KTHREAD_OFFSET_PPMPOLICY 958u
#define KTHREAD_FIELD_SIZE_PPMPOLICY 1u
/* Campo 88: Spare27 | tipo Ghidra: uchar | tamanho: 1 */
#define KTHREAD_OFFSET_SPARE27 959u
#define KTHREAD_FIELD_SIZE_SPARE27 1u
/* Campo 89: TracingPrivate | tipo Ghidra: ulong64[1] | tamanho: 8 */
#define KTHREAD_OFFSET_TRACINGPRIVATE 960u
#define KTHREAD_FIELD_SIZE_TRACINGPRIVATE 8u
/* Campo 90: SchedulerAssist | tipo Ghidra: void * | tamanho: 8 */
#define KTHREAD_OFFSET_SCHEDULERASSIST 968u
#define KTHREAD_FIELD_SIZE_SCHEDULERASSIST 8u
/* Campo 91: AbWaitObject | tipo Ghidra: void * | tamanho: 8 */
#define KTHREAD_OFFSET_ABWAITOBJECT 976u
#define KTHREAD_FIELD_SIZE_ABWAITOBJECT 8u
/* Campo 92: ReservedPreviousReadyTimeValue | tipo Ghidra: ulong | tamanho: 4 */
#define KTHREAD_OFFSET_RESERVEDPREVIOUSREADYTIMEVALUE 984u
#define KTHREAD_FIELD_SIZE_RESERVEDPREVIOUSREADYTIMEVALUE 4u
/* Campo 93: KernelWaitTime | tipo Ghidra: ulong64 | tamanho: 8 */
#define KTHREAD_OFFSET_KERNELWAITTIME 992u
#define KTHREAD_FIELD_SIZE_KERNELWAITTIME 8u
/* Campo 94: UserWaitTime | tipo Ghidra: ulong64 | tamanho: 8 */
#define KTHREAD_OFFSET_USERWAITTIME 1000u
#define KTHREAD_FIELD_SIZE_USERWAITTIME 8u
/* Campo 96: SchedulerAssistPriorityFloor | tipo Ghidra: long | tamanho: 4 */
#define KTHREAD_OFFSET_SCHEDULERASSISTPRIORITYFLOOR 1024u
#define KTHREAD_FIELD_SIZE_SCHEDULERASSISTPRIORITYFLOOR 4u
/* Campo 97: RealtimePriorityFloor | tipo Ghidra: long | tamanho: 4 */
#define KTHREAD_OFFSET_REALTIMEPRIORITYFLOOR 1028u
#define KTHREAD_FIELD_SIZE_REALTIMEPRIORITYFLOOR 4u
/* Campo 98: KernelShadowStack | tipo Ghidra: void * | tamanho: 8 */
#define KTHREAD_OFFSET_KERNELSHADOWSTACK 1032u
#define KTHREAD_FIELD_SIZE_KERNELSHADOWSTACK 8u
/* Campo 99: KernelShadowStackInitial | tipo Ghidra: void * | tamanho: 8 */
#define KTHREAD_OFFSET_KERNELSHADOWSTACKINITIAL 1040u
#define KTHREAD_FIELD_SIZE_KERNELSHADOWSTACKINITIAL 8u
/* Campo 100: KernelShadowStackBase | tipo Ghidra: void * | tamanho: 8 */
#define KTHREAD_OFFSET_KERNELSHADOWSTACKBASE 1048u
#define KTHREAD_FIELD_SIZE_KERNELSHADOWSTACKBASE 8u
/* Campo 101: KernelShadowStackLimit | tipo Ghidra: _KERNEL_SHADOW_STACK_LIMIT | tamanho: 8 */
#define KTHREAD_OFFSET_KERNELSHADOWSTACKLIMIT 1056u
#define KTHREAD_FIELD_SIZE_KERNELSHADOWSTACKLIMIT 8u
/* Campo 102: ExtendedFeatureDisableMask | tipo Ghidra: ulong64 | tamanho: 8 */
#define KTHREAD_OFFSET_EXTENDEDFEATUREDISABLEMASK 1064u
#define KTHREAD_FIELD_SIZE_EXTENDEDFEATUREDISABLEMASK 8u
/* Campo 103: HgsFeedbackStartTime | tipo Ghidra: ulong64 | tamanho: 8 */
#define KTHREAD_OFFSET_HGSFEEDBACKSTARTTIME 1072u
#define KTHREAD_FIELD_SIZE_HGSFEEDBACKSTARTTIME 8u
/* Campo 104: HgsFeedbackCycles | tipo Ghidra: ulong64 | tamanho: 8 */
#define KTHREAD_OFFSET_HGSFEEDBACKCYCLES 1080u
#define KTHREAD_FIELD_SIZE_HGSFEEDBACKCYCLES 8u
/* Campo 105: HgsInvalidFeedbackCount | tipo Ghidra: ulong | tamanho: 4 */
#define KTHREAD_OFFSET_HGSINVALIDFEEDBACKCOUNT 1088u
#define KTHREAD_FIELD_SIZE_HGSINVALIDFEEDBACKCOUNT 4u
/* Campo 106: HgsLowerPerfClassFeedbackCount | tipo Ghidra: ulong | tamanho: 4 */
#define KTHREAD_OFFSET_HGSLOWERPERFCLASSFEEDBACKCOUNT 1092u
#define KTHREAD_FIELD_SIZE_HGSLOWERPERFCLASSFEEDBACKCOUNT 4u
/* Campo 107: HgsHigherPerfClassFeedbackCount | tipo Ghidra: ulong | tamanho: 4 */
#define KTHREAD_OFFSET_HGSHIGHERPERFCLASSFEEDBACKCOUNT 1096u
#define KTHREAD_FIELD_SIZE_HGSHIGHERPERFCLASSFEEDBACKCOUNT 4u
/* Campo 108: ModeHistory | tipo Ghidra: ulong | tamanho: 4 */
#define KTHREAD_OFFSET_MODEHISTORY 1100u
#define KTHREAD_FIELD_SIZE_MODEHISTORY 4u
/* Campo 109: SystemAffinityTokenListHead | tipo Ghidra: _SINGLE_LIST_ENTRY | tamanho: 8 */
#define KTHREAD_OFFSET_SYSTEMAFFINITYTOKENLISTHEAD 1104u
#define KTHREAD_FIELD_SIZE_SYSTEMAFFINITYTOKENLISTHEAD 8u
/* Campo 110: IptSaveArea | tipo Ghidra: void * | tamanho: 8 */
#define KTHREAD_OFFSET_IPTSAVEAREA 1112u
#define KTHREAD_FIELD_SIZE_IPTSAVEAREA 8u
/* Campo 111: ResourceIndex | tipo Ghidra: uchar | tamanho: 1 */
#define KTHREAD_OFFSET_RESOURCEINDEX 1120u
#define KTHREAD_FIELD_SIZE_RESOURCEINDEX 1u
/* Campo 112: CoreIsolationReasons | tipo Ghidra: uchar | tamanho: 1 */
#define KTHREAD_OFFSET_COREISOLATIONREASONS 1121u
#define KTHREAD_FIELD_SIZE_COREISOLATIONREASONS 1u
/* Campo 113: BamQosLevelFromAssistPage | tipo Ghidra: uchar | tamanho: 1 */
#define KTHREAD_OFFSET_BAMQOSLEVELFROMASSISTPAGE 1122u
#define KTHREAD_FIELD_SIZE_BAMQOSLEVELFROMASSISTPAGE 1u
/* Campo 114: SecureCallCoreIsolationCount | tipo Ghidra: uchar | tamanho: 1 */
#define KTHREAD_OFFSET_SECURECALLCOREISOLATIONCOUNT 1123u
#define KTHREAD_FIELD_SIZE_SECURECALLCOREISOLATIONCOUNT 1u
/* Campo 115: SchedulerSharedOffset | tipo Ghidra: ulong | tamanho: 4 */
#define KTHREAD_OFFSET_SCHEDULERSHAREDOFFSET 1124u
#define KTHREAD_FIELD_SIZE_SCHEDULERSHAREDOFFSET 4u
/* Campo 116: SchedulerSharedSwappablePage | tipo Ghidra: _KSWAPPABLE_PAGE * | tamanho: 8 */
#define KTHREAD_OFFSET_SCHEDULERSHAREDSWAPPABLEPAGE 1128u
#define KTHREAD_FIELD_SIZE_SCHEDULERSHAREDSWAPPABLEPAGE 8u
/* Campo 117: KernelAbEntries | tipo Ghidra: _KLOCK_ENTRIES * | tamanho: 8 */
#define KTHREAD_OFFSET_KERNELABENTRIES 1136u
#define KTHREAD_FIELD_SIZE_KERNELABENTRIES 8u
/* Campo 118: UserAbEntries | tipo Ghidra: _KLOCK_ENTRIES * | tamanho: 8 */
#define KTHREAD_OFFSET_USERABENTRIES 1144u
#define KTHREAD_FIELD_SIZE_USERABENTRIES 8u
/* Campo 119: KcsanThread | tipo Ghidra: ulong64 | tamanho: 8 */
#define KTHREAD_OFFSET_KCSANTHREAD 1152u
#define KTHREAD_FIELD_SIZE_KCSANTHREAD 8u
/* Campo 120: SchedulerAssistYieldCounter | tipo Ghidra: ulong | tamanho: 4 */
#define KTHREAD_OFFSET_SCHEDULERASSISTYIELDCOUNTER 1160u
#define KTHREAD_FIELD_SIZE_SCHEDULERASSISTYIELDCOUNTER 4u
/* Campo 121: SchedulerAssistYieldBoostCount | tipo Ghidra: ulong | tamanho: 4 */
#define KTHREAD_OFFSET_SCHEDULERASSISTYIELDBOOSTCOUNT 1164u
#define KTHREAD_FIELD_SIZE_SCHEDULERASSISTYIELDBOOSTCOUNT 4u
/* Campo 122: SchedulerAssistLastYieldBoostTime | tipo Ghidra: long64 | tamanho: 8 */
#define KTHREAD_OFFSET_SCHEDULERASSISTLASTYIELDBOOSTTIME 1168u
#define KTHREAD_FIELD_SIZE_SCHEDULERASSISTLASTYIELDBOOSTTIME 8u
/* Campo 123: Padding | tipo Ghidra: ulong64[5] | tamanho: 40 */
#define KTHREAD_OFFSET_PADDING 1176u
#define KTHREAD_FIELD_SIZE_PADDING 40u

#if defined(__cplusplus)
static_assert(sizeof(KTHREAD) == 1216, "KTHREAD size mismatch");
#else
_Static_assert(sizeof(KTHREAD) == 1216, "KTHREAD size mismatch");
#endif

#endif /* WRK_RECON_KTHREAD_H */
