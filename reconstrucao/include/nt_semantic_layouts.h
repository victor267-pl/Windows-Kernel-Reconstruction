#ifndef NT_SEMANTIC_LAYOUTS_H
#define NT_SEMANTIC_LAYOUTS_H

#include <stddef.h>
#include <stdint.h>

/* Gerado exclusivamente do inventario Ghidra /ntkrnlmp.pdb.
 * Campos primitivos e ponteiros sao tipados quando largura e representacao batem.
 * Tipos compostos sem definicao validada permanecem como bytes nomeados.
 * Isto e uma vista ABI reconstruida, nao o fonte original da Microsoft.
 */
#pragma pack(push, 1)

typedef struct KPROCESS {
    uint8_t Header[24]; /* +0x0000; Ghidra=_DISPATCHER_HEADER; opaque_unresolved_type */
    uint8_t ProfileListHead[16]; /* +0x0018; Ghidra=_LIST_ENTRY; opaque_unresolved_type */
    uint64_t DirectoryTableBase; /* +0x0028; Ghidra=ulong64; primitive */
    uint8_t ThreadListHead[16]; /* +0x0030; Ghidra=_LIST_ENTRY; opaque_unresolved_type */
    uint32_t ProcessLock; /* +0x0040; Ghidra=ulong; primitive */
    uint32_t ProcessTimerDelay; /* +0x0044; Ghidra=ulong; primitive */
    uint64_t DeepFreezeStartTime; /* +0x0048; Ghidra=ulong64; primitive */
    uintptr_t Affinity; /* +0x0050; Ghidra=_KAFFINITY_EX *; pointer_as_64bit_address */
    uint8_t AutoBoostState[16]; /* +0x0058; Ghidra=_KAB_UM_PROCESS_CONTEXT; opaque_unresolved_type */
    uint8_t ReadyListHead[16]; /* +0x0068; Ghidra=_LIST_ENTRY; opaque_unresolved_type */
    uint8_t SwapListEntry[8]; /* +0x0078; Ghidra=_SINGLE_LIST_ENTRY; opaque_unresolved_type */
    uintptr_t ActiveProcessors; /* +0x0080; Ghidra=_KAFFINITY_EX *; pointer_as_64bit_address */
    uint8_t _ghidra_field_12[4]; /* +0x0088; Ghidra=_KPROCESS_u_136; opaque_unresolved_type */
    uint32_t Spare0c; /* +0x008C; Ghidra=ulong; primitive */
    int8_t BasePriority; /* +0x0090; Ghidra=char; primitive */
    int8_t QuantumReset; /* +0x0091; Ghidra=char; primitive */
    int8_t Visited; /* +0x0092; Ghidra=char; primitive */
    uint8_t Flags[1]; /* +0x0093; Ghidra=_KEXECUTE_OPTIONS; opaque_unresolved_type */
    uint8_t _padding_0094[4];
    uint8_t ActiveGroupsMask[16]; /* +0x0098; Ghidra=_KGROUP_MASK; opaque_unresolved_type */
    uint64_t ActiveGroupPadding[2]; /* +0x00A8; Ghidra=ulong64[2]; primitive_array */
    uintptr_t IdealProcessorAssignmentBlock; /* +0x00B8; Ghidra=_KI_IDEAL_PROCESSOR_ASSIGNMENT_BLOCK *; pointer_as_64bit_address */
    uint64_t Padding[6]; /* +0x00C0; Ghidra=ulong64[6]; primitive_array */
    uint32_t Padding2; /* +0x00F0; Ghidra=ulong; primitive */
    uint32_t SchedulerAssistYieldBoostCount; /* +0x00F4; Ghidra=ulong; primitive */
    uint8_t SchedulerAssistYieldBoostAllowedTime[8]; /* +0x00F8; Ghidra=long64; opaque_unresolved_type */
    uint32_t Spare0d; /* +0x0100; Ghidra=ulong; primitive */
    uint16_t IdealGlobalNode; /* +0x0104; Ghidra=ushort; primitive */
    uint16_t Spare1; /* +0x0106; Ghidra=ushort; primitive */
    uint8_t StackCount[4]; /* +0x0108; Ghidra=_KSTACK_COUNT; opaque_unresolved_type */
    uint8_t _padding_010C[4];
    uint8_t ProcessListEntry[16]; /* +0x0110; Ghidra=_LIST_ENTRY; opaque_unresolved_type */
    uint64_t CycleTime; /* +0x0120; Ghidra=ulong64; primitive */
    uint64_t ContextSwitches; /* +0x0128; Ghidra=ulong64; primitive */
    uintptr_t SchedulingGroup; /* +0x0130; Ghidra=_KSCHEDULING_GROUP *; pointer_as_64bit_address */
    uint64_t KernelTime; /* +0x0138; Ghidra=ulong64; primitive */
    uint64_t UserTime; /* +0x0140; Ghidra=ulong64; primitive */
    uint64_t ReadyTime; /* +0x0148; Ghidra=ulong64; primitive */
    uint32_t FreezeCount; /* +0x0150; Ghidra=ulong; primitive */
    uint32_t Spare4; /* +0x0154; Ghidra=ulong; primitive */
    uint64_t UserDirectoryTableBase; /* +0x0158; Ghidra=ulong64; primitive */
    uint8_t AddressPolicy; /* +0x0160; Ghidra=uchar; primitive */
    uint8_t Spare2[7]; /* +0x0161; Ghidra=uchar[7]; primitive_array */
    uintptr_t InstrumentationCallback; /* +0x0168; Ghidra=void *; pointer_as_64bit_address */
    uint8_t SecureState[8]; /* +0x0170; Ghidra=<unnamed-tag_00001B45>; opaque_unresolved_type */
    uint64_t KernelWaitTime; /* +0x0178; Ghidra=ulong64; primitive */
    uint64_t UserWaitTime; /* +0x0180; Ghidra=ulong64; primitive */
    uint64_t LastRebalanceQpc; /* +0x0188; Ghidra=ulong64; primitive */
    uintptr_t PerProcessorCycleTimes; /* +0x0190; Ghidra=void *; pointer_as_64bit_address */
    uint64_t ExtendedFeatureDisableMask; /* +0x0198; Ghidra=ulong64; primitive */
    uint16_t PrimaryGroup; /* +0x01A0; Ghidra=ushort; primitive */
    uint16_t Spare3[3]; /* +0x01A2; Ghidra=ushort[3]; primitive_array */
    uintptr_t UserCetLogging; /* +0x01A8; Ghidra=void *; pointer_as_64bit_address */
    uint8_t CpuPartitionList[16]; /* +0x01B0; Ghidra=_LIST_ENTRY; opaque_unresolved_type */
    uintptr_t AvailableCpuState; /* +0x01C0; Ghidra=_KPROCESS_AVAILABLE_CPU_STATE *; pointer_as_64bit_address */
} KPROCESS;
_Static_assert(sizeof(KPROCESS) == 456, "KPROCESS size");
_Static_assert(offsetof(KPROCESS, Header) == 0, "KPROCESS.Header offset");
_Static_assert(offsetof(KPROCESS, ProfileListHead) == 24, "KPROCESS.ProfileListHead offset");
_Static_assert(offsetof(KPROCESS, DirectoryTableBase) == 40, "KPROCESS.DirectoryTableBase offset");
_Static_assert(offsetof(KPROCESS, ThreadListHead) == 48, "KPROCESS.ThreadListHead offset");
_Static_assert(offsetof(KPROCESS, ProcessLock) == 64, "KPROCESS.ProcessLock offset");
_Static_assert(offsetof(KPROCESS, ProcessTimerDelay) == 68, "KPROCESS.ProcessTimerDelay offset");
_Static_assert(offsetof(KPROCESS, DeepFreezeStartTime) == 72, "KPROCESS.DeepFreezeStartTime offset");
_Static_assert(offsetof(KPROCESS, Affinity) == 80, "KPROCESS.Affinity offset");
_Static_assert(offsetof(KPROCESS, AutoBoostState) == 88, "KPROCESS.AutoBoostState offset");
_Static_assert(offsetof(KPROCESS, ReadyListHead) == 104, "KPROCESS.ReadyListHead offset");
_Static_assert(offsetof(KPROCESS, SwapListEntry) == 120, "KPROCESS.SwapListEntry offset");
_Static_assert(offsetof(KPROCESS, ActiveProcessors) == 128, "KPROCESS.ActiveProcessors offset");
_Static_assert(offsetof(KPROCESS, _ghidra_field_12) == 136, "KPROCESS._ghidra_field_12 offset");
_Static_assert(offsetof(KPROCESS, Spare0c) == 140, "KPROCESS.Spare0c offset");
_Static_assert(offsetof(KPROCESS, BasePriority) == 144, "KPROCESS.BasePriority offset");
_Static_assert(offsetof(KPROCESS, QuantumReset) == 145, "KPROCESS.QuantumReset offset");
_Static_assert(offsetof(KPROCESS, Visited) == 146, "KPROCESS.Visited offset");
_Static_assert(offsetof(KPROCESS, Flags) == 147, "KPROCESS.Flags offset");
_Static_assert(offsetof(KPROCESS, ActiveGroupsMask) == 152, "KPROCESS.ActiveGroupsMask offset");
_Static_assert(offsetof(KPROCESS, ActiveGroupPadding) == 168, "KPROCESS.ActiveGroupPadding offset");
_Static_assert(offsetof(KPROCESS, IdealProcessorAssignmentBlock) == 184, "KPROCESS.IdealProcessorAssignmentBlock offset");
_Static_assert(offsetof(KPROCESS, Padding) == 192, "KPROCESS.Padding offset");
_Static_assert(offsetof(KPROCESS, Padding2) == 240, "KPROCESS.Padding2 offset");
_Static_assert(offsetof(KPROCESS, SchedulerAssistYieldBoostCount) == 244, "KPROCESS.SchedulerAssistYieldBoostCount offset");
_Static_assert(offsetof(KPROCESS, SchedulerAssistYieldBoostAllowedTime) == 248, "KPROCESS.SchedulerAssistYieldBoostAllowedTime offset");
_Static_assert(offsetof(KPROCESS, Spare0d) == 256, "KPROCESS.Spare0d offset");
_Static_assert(offsetof(KPROCESS, IdealGlobalNode) == 260, "KPROCESS.IdealGlobalNode offset");
_Static_assert(offsetof(KPROCESS, Spare1) == 262, "KPROCESS.Spare1 offset");
_Static_assert(offsetof(KPROCESS, StackCount) == 264, "KPROCESS.StackCount offset");
_Static_assert(offsetof(KPROCESS, ProcessListEntry) == 272, "KPROCESS.ProcessListEntry offset");
_Static_assert(offsetof(KPROCESS, CycleTime) == 288, "KPROCESS.CycleTime offset");
_Static_assert(offsetof(KPROCESS, ContextSwitches) == 296, "KPROCESS.ContextSwitches offset");
_Static_assert(offsetof(KPROCESS, SchedulingGroup) == 304, "KPROCESS.SchedulingGroup offset");
_Static_assert(offsetof(KPROCESS, KernelTime) == 312, "KPROCESS.KernelTime offset");
_Static_assert(offsetof(KPROCESS, UserTime) == 320, "KPROCESS.UserTime offset");
_Static_assert(offsetof(KPROCESS, ReadyTime) == 328, "KPROCESS.ReadyTime offset");
_Static_assert(offsetof(KPROCESS, FreezeCount) == 336, "KPROCESS.FreezeCount offset");
_Static_assert(offsetof(KPROCESS, Spare4) == 340, "KPROCESS.Spare4 offset");
_Static_assert(offsetof(KPROCESS, UserDirectoryTableBase) == 344, "KPROCESS.UserDirectoryTableBase offset");
_Static_assert(offsetof(KPROCESS, AddressPolicy) == 352, "KPROCESS.AddressPolicy offset");
_Static_assert(offsetof(KPROCESS, Spare2) == 353, "KPROCESS.Spare2 offset");
_Static_assert(offsetof(KPROCESS, InstrumentationCallback) == 360, "KPROCESS.InstrumentationCallback offset");
_Static_assert(offsetof(KPROCESS, SecureState) == 368, "KPROCESS.SecureState offset");
_Static_assert(offsetof(KPROCESS, KernelWaitTime) == 376, "KPROCESS.KernelWaitTime offset");
_Static_assert(offsetof(KPROCESS, UserWaitTime) == 384, "KPROCESS.UserWaitTime offset");
_Static_assert(offsetof(KPROCESS, LastRebalanceQpc) == 392, "KPROCESS.LastRebalanceQpc offset");
_Static_assert(offsetof(KPROCESS, PerProcessorCycleTimes) == 400, "KPROCESS.PerProcessorCycleTimes offset");
_Static_assert(offsetof(KPROCESS, ExtendedFeatureDisableMask) == 408, "KPROCESS.ExtendedFeatureDisableMask offset");
_Static_assert(offsetof(KPROCESS, PrimaryGroup) == 416, "KPROCESS.PrimaryGroup offset");
_Static_assert(offsetof(KPROCESS, Spare3) == 418, "KPROCESS.Spare3 offset");
_Static_assert(offsetof(KPROCESS, UserCetLogging) == 424, "KPROCESS.UserCetLogging offset");
_Static_assert(offsetof(KPROCESS, CpuPartitionList) == 432, "KPROCESS.CpuPartitionList offset");
_Static_assert(offsetof(KPROCESS, AvailableCpuState) == 448, "KPROCESS.AvailableCpuState offset");

typedef struct KTHREAD {
    uint8_t Header[24]; /* +0x0000; Ghidra=_DISPATCHER_HEADER; opaque_unresolved_type */
    uintptr_t SListFaultAddress; /* +0x0018; Ghidra=void *; pointer_as_64bit_address */
    uint64_t QuantumTarget; /* +0x0020; Ghidra=ulong64; primitive */
    uintptr_t InitialStack; /* +0x0028; Ghidra=void *; pointer_as_64bit_address */
    uintptr_t StackLimit; /* +0x0030; Ghidra=void *; pointer_as_64bit_address */
    uintptr_t StackBase; /* +0x0038; Ghidra=void *; pointer_as_64bit_address */
    uint64_t ThreadLock; /* +0x0040; Ghidra=ulong64; primitive */
    uint64_t CycleTime; /* +0x0048; Ghidra=ulong64; primitive */
    uint32_t CurrentRunTime; /* +0x0050; Ghidra=ulong; primitive */
    uint32_t ExpectedRunTime; /* +0x0054; Ghidra=ulong; primitive */
    uintptr_t KernelStack; /* +0x0058; Ghidra=void *; pointer_as_64bit_address */
    uintptr_t StateSaveArea; /* +0x0060; Ghidra=_XSAVE_FORMAT *; pointer_as_64bit_address */
    uintptr_t SchedulingGroup; /* +0x0068; Ghidra=_KSCHEDULING_GROUP *; pointer_as_64bit_address */
    uint8_t WaitRegister[1]; /* +0x0070; Ghidra=_KWAIT_STATUS_REGISTER; opaque_unresolved_type */
    uint8_t Running; /* +0x0071; Ghidra=uchar; primitive */
    uint8_t Alerted[2]; /* +0x0072; Ghidra=uchar[2]; primitive_array */
    uint8_t _ghidra_field_16[4]; /* +0x0074; Ghidra=_KTHREAD_u_116; opaque_unresolved_type */
    uint8_t _ghidra_field_17[4]; /* +0x0078; Ghidra=_KTHREAD_u_120; opaque_unresolved_type */
    uint8_t Tag; /* +0x007C; Ghidra=uchar; primitive */
    uint8_t _ghidra_field_19[1]; /* +0x007D; Ghidra=_KTHREAD_u_125; opaque_unresolved_type */
    uint8_t _ghidra_field_20[1]; /* +0x007E; Ghidra=_KTHREAD_u_126; opaque_unresolved_type */
    uint8_t _padding_007F[1];
    uint32_t SystemCallNumber; /* +0x0080; Ghidra=ulong; primitive */
    uint32_t ReadyTime; /* +0x0084; Ghidra=ulong; primitive */
    uintptr_t FirstArgument; /* +0x0088; Ghidra=void *; pointer_as_64bit_address */
    uintptr_t TrapFrame; /* +0x0090; Ghidra=_KTRAP_FRAME *; pointer_as_64bit_address */
    uint8_t _ghidra_field_25[48]; /* +0x0098; Ghidra=_KTHREAD_u_152; opaque_unresolved_type */
    uint8_t WaitStatus[8]; /* +0x00C8; Ghidra=long64; opaque_unresolved_type */
    uintptr_t WaitBlockList; /* +0x00D0; Ghidra=_KWAIT_BLOCK *; pointer_as_64bit_address */
    uint8_t _ghidra_field_28[16]; /* +0x00D8; Ghidra=_KTHREAD_u_216; opaque_unresolved_type */
    uintptr_t Queue; /* +0x00E8; Ghidra=_DISPATCHER_HEADER *; pointer_as_64bit_address */
    uintptr_t Teb; /* +0x00F0; Ghidra=void *; pointer_as_64bit_address */
    uint64_t RelativeTimerBias; /* +0x00F8; Ghidra=ulong64; primitive */
    uint8_t Timer[64]; /* +0x0100; Ghidra=_KTIMER; opaque_unresolved_type */
    uint8_t _ghidra_field_33[192]; /* +0x0140; Ghidra=_KTHREAD_u_320; opaque_unresolved_type */
    uint8_t _ghidra_field_34[4]; /* +0x0200; Ghidra=_KTHREAD_u_512; opaque_unresolved_type */
    uint8_t BamQosLevel; /* +0x0204; Ghidra=uchar; primitive */
    uint8_t HardwareFeedbackClass; /* +0x0205; Ghidra=uchar; primitive */
    uint8_t _ghidra_field_37[2]; /* +0x0206; Ghidra=_KTHREAD_u_518; opaque_unresolved_type */
    uint8_t QueueListEntry[16]; /* +0x0208; Ghidra=_LIST_ENTRY; opaque_unresolved_type */
    uint8_t _ghidra_field_39[4]; /* +0x0218; Ghidra=_KTHREAD_u_536; opaque_unresolved_type */
    int32_t QueuePriority; /* +0x021C; Ghidra=long; primitive */
    uintptr_t Process; /* +0x0220; Ghidra=_KPROCESS *; pointer_as_64bit_address */
    uintptr_t UserAffinity; /* +0x0228; Ghidra=_KAFFINITY_EX *; pointer_as_64bit_address */
    uint16_t UserAffinityPrimaryGroup; /* +0x0230; Ghidra=ushort; primitive */
    int8_t PreviousMode; /* +0x0232; Ghidra=char; primitive */
    int8_t BasePriority; /* +0x0233; Ghidra=char; primitive */
    uint8_t Spare24; /* +0x0234; Ghidra=uchar; primitive */
    uint8_t Preempted; /* +0x0235; Ghidra=uchar; primitive */
    uint8_t AdjustReason; /* +0x0236; Ghidra=uchar; primitive */
    int8_t AdjustIncrement; /* +0x0237; Ghidra=char; primitive */
    uint64_t AffinityVersion; /* +0x0238; Ghidra=ulong64; primitive */
    uintptr_t Affinity; /* +0x0240; Ghidra=_KAFFINITY_EX *; pointer_as_64bit_address */
    uint16_t AffinityPrimaryGroup; /* +0x0248; Ghidra=ushort; primitive */
    uint8_t ApcStateIndex; /* +0x024A; Ghidra=uchar; primitive */
    uint8_t WaitBlockCount; /* +0x024B; Ghidra=uchar; primitive */
    uint32_t IdealProcessor; /* +0x024C; Ghidra=ulong; primitive */
    uint64_t NpxState; /* +0x0250; Ghidra=ulong64; primitive */
    uint8_t _ghidra_field_57[48]; /* +0x0258; Ghidra=_KTHREAD_u_600; opaque_unresolved_type */
    uint8_t _ghidra_field_58[88]; /* +0x0288; Ghidra=_KTHREAD_u_648; opaque_unresolved_type */
    uint8_t SuspendEvent[24]; /* +0x02E0; Ghidra=_KEVENT; opaque_unresolved_type */
    uint8_t ThreadListEntry[16]; /* +0x02F8; Ghidra=_LIST_ENTRY; opaque_unresolved_type */
    uint8_t MutantListHead[16]; /* +0x0308; Ghidra=_LIST_ENTRY; opaque_unresolved_type */
    uint8_t _ghidra_field_62[2]; /* +0x0318; Ghidra=_KTHREAD_u_792; opaque_unresolved_type */
    uint8_t _ghidra_field_63[1]; /* +0x031A; Ghidra=_KTHREAD_u_794; opaque_unresolved_type */
    int8_t WobPriority; /* +0x031B; Ghidra=char; primitive */
    uint32_t SecureThreadCookie; /* +0x031C; Ghidra=ulong; primitive */
    uintptr_t SchedulerSharedSystemSlot; /* +0x0320; Ghidra=void *; pointer_as_64bit_address */
    uint8_t PropagateBoostsEntry[8]; /* +0x0328; Ghidra=_SINGLE_LIST_ENTRY; opaque_unresolved_type */
    uint8_t IoSelfBoostsEntry[8]; /* +0x0330; Ghidra=_SINGLE_LIST_ENTRY; opaque_unresolved_type */
    uint8_t PriorityFloorCounts[32]; /* +0x0338; Ghidra=uchar[32]; primitive_array */
    uint32_t PriorityFloorSummary; /* +0x0358; Ghidra=ulong; primitive */
    int32_t AbCompletedIoBoostCount; /* +0x035C; Ghidra=long; primitive */
    int32_t AbCompletedIoQoSBoostCount; /* +0x0360; Ghidra=long; primitive */
    int16_t KeReferenceCount; /* +0x0364; Ghidra=short; primitive */
    int8_t DecayBoost; /* +0x0366; Ghidra=char; primitive */
    uint8_t Spare6; /* +0x0367; Ghidra=uchar; primitive */
    uint32_t ForegroundLossTime; /* +0x0368; Ghidra=ulong; primitive */
    uint8_t _padding_036C[4];
    uint8_t _ghidra_field_77[16]; /* +0x0370; Ghidra=_KTHREAD_u_880; opaque_unresolved_type */
    uint8_t ReadOperationCount[8]; /* +0x0380; Ghidra=long64; opaque_unresolved_type */
    uint8_t WriteOperationCount[8]; /* +0x0388; Ghidra=long64; opaque_unresolved_type */
    uint8_t OtherOperationCount[8]; /* +0x0390; Ghidra=long64; opaque_unresolved_type */
    uint8_t ReadTransferCount[8]; /* +0x0398; Ghidra=long64; opaque_unresolved_type */
    uint8_t WriteTransferCount[8]; /* +0x03A0; Ghidra=long64; opaque_unresolved_type */
    uint8_t OtherTransferCount[8]; /* +0x03A8; Ghidra=long64; opaque_unresolved_type */
    uintptr_t QueuedScb; /* +0x03B0; Ghidra=_KSCB *; pointer_as_64bit_address */
    uint32_t ThreadTimerDelay; /* +0x03B8; Ghidra=ulong; primitive */
    uint16_t Spare26; /* +0x03BC; Ghidra=ushort; primitive */
    uint8_t PpmPolicy; /* +0x03BE; Ghidra=uchar; primitive */
    uint8_t Spare27; /* +0x03BF; Ghidra=uchar; primitive */
    uint64_t TracingPrivate[1]; /* +0x03C0; Ghidra=ulong64[1]; primitive_array */
    uintptr_t SchedulerAssist; /* +0x03C8; Ghidra=void *; pointer_as_64bit_address */
    uintptr_t AbWaitObject; /* +0x03D0; Ghidra=void *; pointer_as_64bit_address */
    uint32_t ReservedPreviousReadyTimeValue; /* +0x03D8; Ghidra=ulong; primitive */
    uint8_t _padding_03DC[4];
    uint64_t KernelWaitTime; /* +0x03E0; Ghidra=ulong64; primitive */
    uint64_t UserWaitTime; /* +0x03E8; Ghidra=ulong64; primitive */
    uint8_t _ghidra_field_95[16]; /* +0x03F0; Ghidra=_KTHREAD_u_1008; opaque_unresolved_type */
    int32_t SchedulerAssistPriorityFloor; /* +0x0400; Ghidra=long; primitive */
    int32_t RealtimePriorityFloor; /* +0x0404; Ghidra=long; primitive */
    uintptr_t KernelShadowStack; /* +0x0408; Ghidra=void *; pointer_as_64bit_address */
    uintptr_t KernelShadowStackInitial; /* +0x0410; Ghidra=void *; pointer_as_64bit_address */
    uintptr_t KernelShadowStackBase; /* +0x0418; Ghidra=void *; pointer_as_64bit_address */
    uint8_t KernelShadowStackLimit[8]; /* +0x0420; Ghidra=_KERNEL_SHADOW_STACK_LIMIT; opaque_unresolved_type */
    uint64_t ExtendedFeatureDisableMask; /* +0x0428; Ghidra=ulong64; primitive */
    uint64_t HgsFeedbackStartTime; /* +0x0430; Ghidra=ulong64; primitive */
    uint64_t HgsFeedbackCycles; /* +0x0438; Ghidra=ulong64; primitive */
    uint32_t HgsInvalidFeedbackCount; /* +0x0440; Ghidra=ulong; primitive */
    uint32_t HgsLowerPerfClassFeedbackCount; /* +0x0444; Ghidra=ulong; primitive */
    uint32_t HgsHigherPerfClassFeedbackCount; /* +0x0448; Ghidra=ulong; primitive */
    uint32_t ModeHistory; /* +0x044C; Ghidra=ulong; primitive */
    uint8_t SystemAffinityTokenListHead[8]; /* +0x0450; Ghidra=_SINGLE_LIST_ENTRY; opaque_unresolved_type */
    uintptr_t IptSaveArea; /* +0x0458; Ghidra=void *; pointer_as_64bit_address */
    uint8_t ResourceIndex; /* +0x0460; Ghidra=uchar; primitive */
    uint8_t CoreIsolationReasons; /* +0x0461; Ghidra=uchar; primitive */
    uint8_t BamQosLevelFromAssistPage; /* +0x0462; Ghidra=uchar; primitive */
    uint8_t SecureCallCoreIsolationCount; /* +0x0463; Ghidra=uchar; primitive */
    uint32_t SchedulerSharedOffset; /* +0x0464; Ghidra=ulong; primitive */
    uintptr_t SchedulerSharedSwappablePage; /* +0x0468; Ghidra=_KSWAPPABLE_PAGE *; pointer_as_64bit_address */
    uintptr_t KernelAbEntries; /* +0x0470; Ghidra=_KLOCK_ENTRIES *; pointer_as_64bit_address */
    uintptr_t UserAbEntries; /* +0x0478; Ghidra=_KLOCK_ENTRIES *; pointer_as_64bit_address */
    uint64_t KcsanThread; /* +0x0480; Ghidra=ulong64; primitive */
    uint32_t SchedulerAssistYieldCounter; /* +0x0488; Ghidra=ulong; primitive */
    uint32_t SchedulerAssistYieldBoostCount; /* +0x048C; Ghidra=ulong; primitive */
    uint8_t SchedulerAssistLastYieldBoostTime[8]; /* +0x0490; Ghidra=long64; opaque_unresolved_type */
    uint64_t Padding[5]; /* +0x0498; Ghidra=ulong64[5]; primitive_array */
} KTHREAD;
_Static_assert(sizeof(KTHREAD) == 1216, "KTHREAD size");
_Static_assert(offsetof(KTHREAD, Header) == 0, "KTHREAD.Header offset");
_Static_assert(offsetof(KTHREAD, SListFaultAddress) == 24, "KTHREAD.SListFaultAddress offset");
_Static_assert(offsetof(KTHREAD, QuantumTarget) == 32, "KTHREAD.QuantumTarget offset");
_Static_assert(offsetof(KTHREAD, InitialStack) == 40, "KTHREAD.InitialStack offset");
_Static_assert(offsetof(KTHREAD, StackLimit) == 48, "KTHREAD.StackLimit offset");
_Static_assert(offsetof(KTHREAD, StackBase) == 56, "KTHREAD.StackBase offset");
_Static_assert(offsetof(KTHREAD, ThreadLock) == 64, "KTHREAD.ThreadLock offset");
_Static_assert(offsetof(KTHREAD, CycleTime) == 72, "KTHREAD.CycleTime offset");
_Static_assert(offsetof(KTHREAD, CurrentRunTime) == 80, "KTHREAD.CurrentRunTime offset");
_Static_assert(offsetof(KTHREAD, ExpectedRunTime) == 84, "KTHREAD.ExpectedRunTime offset");
_Static_assert(offsetof(KTHREAD, KernelStack) == 88, "KTHREAD.KernelStack offset");
_Static_assert(offsetof(KTHREAD, StateSaveArea) == 96, "KTHREAD.StateSaveArea offset");
_Static_assert(offsetof(KTHREAD, SchedulingGroup) == 104, "KTHREAD.SchedulingGroup offset");
_Static_assert(offsetof(KTHREAD, WaitRegister) == 112, "KTHREAD.WaitRegister offset");
_Static_assert(offsetof(KTHREAD, Running) == 113, "KTHREAD.Running offset");
_Static_assert(offsetof(KTHREAD, Alerted) == 114, "KTHREAD.Alerted offset");
_Static_assert(offsetof(KTHREAD, _ghidra_field_16) == 116, "KTHREAD._ghidra_field_16 offset");
_Static_assert(offsetof(KTHREAD, _ghidra_field_17) == 120, "KTHREAD._ghidra_field_17 offset");
_Static_assert(offsetof(KTHREAD, Tag) == 124, "KTHREAD.Tag offset");
_Static_assert(offsetof(KTHREAD, _ghidra_field_19) == 125, "KTHREAD._ghidra_field_19 offset");
_Static_assert(offsetof(KTHREAD, _ghidra_field_20) == 126, "KTHREAD._ghidra_field_20 offset");
_Static_assert(offsetof(KTHREAD, SystemCallNumber) == 128, "KTHREAD.SystemCallNumber offset");
_Static_assert(offsetof(KTHREAD, ReadyTime) == 132, "KTHREAD.ReadyTime offset");
_Static_assert(offsetof(KTHREAD, FirstArgument) == 136, "KTHREAD.FirstArgument offset");
_Static_assert(offsetof(KTHREAD, TrapFrame) == 144, "KTHREAD.TrapFrame offset");
_Static_assert(offsetof(KTHREAD, _ghidra_field_25) == 152, "KTHREAD._ghidra_field_25 offset");
_Static_assert(offsetof(KTHREAD, WaitStatus) == 200, "KTHREAD.WaitStatus offset");
_Static_assert(offsetof(KTHREAD, WaitBlockList) == 208, "KTHREAD.WaitBlockList offset");
_Static_assert(offsetof(KTHREAD, _ghidra_field_28) == 216, "KTHREAD._ghidra_field_28 offset");
_Static_assert(offsetof(KTHREAD, Queue) == 232, "KTHREAD.Queue offset");
_Static_assert(offsetof(KTHREAD, Teb) == 240, "KTHREAD.Teb offset");
_Static_assert(offsetof(KTHREAD, RelativeTimerBias) == 248, "KTHREAD.RelativeTimerBias offset");
_Static_assert(offsetof(KTHREAD, Timer) == 256, "KTHREAD.Timer offset");
_Static_assert(offsetof(KTHREAD, _ghidra_field_33) == 320, "KTHREAD._ghidra_field_33 offset");
_Static_assert(offsetof(KTHREAD, _ghidra_field_34) == 512, "KTHREAD._ghidra_field_34 offset");
_Static_assert(offsetof(KTHREAD, BamQosLevel) == 516, "KTHREAD.BamQosLevel offset");
_Static_assert(offsetof(KTHREAD, HardwareFeedbackClass) == 517, "KTHREAD.HardwareFeedbackClass offset");
_Static_assert(offsetof(KTHREAD, _ghidra_field_37) == 518, "KTHREAD._ghidra_field_37 offset");
_Static_assert(offsetof(KTHREAD, QueueListEntry) == 520, "KTHREAD.QueueListEntry offset");
_Static_assert(offsetof(KTHREAD, _ghidra_field_39) == 536, "KTHREAD._ghidra_field_39 offset");
_Static_assert(offsetof(KTHREAD, QueuePriority) == 540, "KTHREAD.QueuePriority offset");
_Static_assert(offsetof(KTHREAD, Process) == 544, "KTHREAD.Process offset");
_Static_assert(offsetof(KTHREAD, UserAffinity) == 552, "KTHREAD.UserAffinity offset");
_Static_assert(offsetof(KTHREAD, UserAffinityPrimaryGroup) == 560, "KTHREAD.UserAffinityPrimaryGroup offset");
_Static_assert(offsetof(KTHREAD, PreviousMode) == 562, "KTHREAD.PreviousMode offset");
_Static_assert(offsetof(KTHREAD, BasePriority) == 563, "KTHREAD.BasePriority offset");
_Static_assert(offsetof(KTHREAD, Spare24) == 564, "KTHREAD.Spare24 offset");
_Static_assert(offsetof(KTHREAD, Preempted) == 565, "KTHREAD.Preempted offset");
_Static_assert(offsetof(KTHREAD, AdjustReason) == 566, "KTHREAD.AdjustReason offset");
_Static_assert(offsetof(KTHREAD, AdjustIncrement) == 567, "KTHREAD.AdjustIncrement offset");
_Static_assert(offsetof(KTHREAD, AffinityVersion) == 568, "KTHREAD.AffinityVersion offset");
_Static_assert(offsetof(KTHREAD, Affinity) == 576, "KTHREAD.Affinity offset");
_Static_assert(offsetof(KTHREAD, AffinityPrimaryGroup) == 584, "KTHREAD.AffinityPrimaryGroup offset");
_Static_assert(offsetof(KTHREAD, ApcStateIndex) == 586, "KTHREAD.ApcStateIndex offset");
_Static_assert(offsetof(KTHREAD, WaitBlockCount) == 587, "KTHREAD.WaitBlockCount offset");
_Static_assert(offsetof(KTHREAD, IdealProcessor) == 588, "KTHREAD.IdealProcessor offset");
_Static_assert(offsetof(KTHREAD, NpxState) == 592, "KTHREAD.NpxState offset");
_Static_assert(offsetof(KTHREAD, _ghidra_field_57) == 600, "KTHREAD._ghidra_field_57 offset");
_Static_assert(offsetof(KTHREAD, _ghidra_field_58) == 648, "KTHREAD._ghidra_field_58 offset");
_Static_assert(offsetof(KTHREAD, SuspendEvent) == 736, "KTHREAD.SuspendEvent offset");
_Static_assert(offsetof(KTHREAD, ThreadListEntry) == 760, "KTHREAD.ThreadListEntry offset");
_Static_assert(offsetof(KTHREAD, MutantListHead) == 776, "KTHREAD.MutantListHead offset");
_Static_assert(offsetof(KTHREAD, _ghidra_field_62) == 792, "KTHREAD._ghidra_field_62 offset");
_Static_assert(offsetof(KTHREAD, _ghidra_field_63) == 794, "KTHREAD._ghidra_field_63 offset");
_Static_assert(offsetof(KTHREAD, WobPriority) == 795, "KTHREAD.WobPriority offset");
_Static_assert(offsetof(KTHREAD, SecureThreadCookie) == 796, "KTHREAD.SecureThreadCookie offset");
_Static_assert(offsetof(KTHREAD, SchedulerSharedSystemSlot) == 800, "KTHREAD.SchedulerSharedSystemSlot offset");
_Static_assert(offsetof(KTHREAD, PropagateBoostsEntry) == 808, "KTHREAD.PropagateBoostsEntry offset");
_Static_assert(offsetof(KTHREAD, IoSelfBoostsEntry) == 816, "KTHREAD.IoSelfBoostsEntry offset");
_Static_assert(offsetof(KTHREAD, PriorityFloorCounts) == 824, "KTHREAD.PriorityFloorCounts offset");
_Static_assert(offsetof(KTHREAD, PriorityFloorSummary) == 856, "KTHREAD.PriorityFloorSummary offset");
_Static_assert(offsetof(KTHREAD, AbCompletedIoBoostCount) == 860, "KTHREAD.AbCompletedIoBoostCount offset");
_Static_assert(offsetof(KTHREAD, AbCompletedIoQoSBoostCount) == 864, "KTHREAD.AbCompletedIoQoSBoostCount offset");
_Static_assert(offsetof(KTHREAD, KeReferenceCount) == 868, "KTHREAD.KeReferenceCount offset");
_Static_assert(offsetof(KTHREAD, DecayBoost) == 870, "KTHREAD.DecayBoost offset");
_Static_assert(offsetof(KTHREAD, Spare6) == 871, "KTHREAD.Spare6 offset");
_Static_assert(offsetof(KTHREAD, ForegroundLossTime) == 872, "KTHREAD.ForegroundLossTime offset");
_Static_assert(offsetof(KTHREAD, _ghidra_field_77) == 880, "KTHREAD._ghidra_field_77 offset");
_Static_assert(offsetof(KTHREAD, ReadOperationCount) == 896, "KTHREAD.ReadOperationCount offset");
_Static_assert(offsetof(KTHREAD, WriteOperationCount) == 904, "KTHREAD.WriteOperationCount offset");
_Static_assert(offsetof(KTHREAD, OtherOperationCount) == 912, "KTHREAD.OtherOperationCount offset");
_Static_assert(offsetof(KTHREAD, ReadTransferCount) == 920, "KTHREAD.ReadTransferCount offset");
_Static_assert(offsetof(KTHREAD, WriteTransferCount) == 928, "KTHREAD.WriteTransferCount offset");
_Static_assert(offsetof(KTHREAD, OtherTransferCount) == 936, "KTHREAD.OtherTransferCount offset");
_Static_assert(offsetof(KTHREAD, QueuedScb) == 944, "KTHREAD.QueuedScb offset");
_Static_assert(offsetof(KTHREAD, ThreadTimerDelay) == 952, "KTHREAD.ThreadTimerDelay offset");
_Static_assert(offsetof(KTHREAD, Spare26) == 956, "KTHREAD.Spare26 offset");
_Static_assert(offsetof(KTHREAD, PpmPolicy) == 958, "KTHREAD.PpmPolicy offset");
_Static_assert(offsetof(KTHREAD, Spare27) == 959, "KTHREAD.Spare27 offset");
_Static_assert(offsetof(KTHREAD, TracingPrivate) == 960, "KTHREAD.TracingPrivate offset");
_Static_assert(offsetof(KTHREAD, SchedulerAssist) == 968, "KTHREAD.SchedulerAssist offset");
_Static_assert(offsetof(KTHREAD, AbWaitObject) == 976, "KTHREAD.AbWaitObject offset");
_Static_assert(offsetof(KTHREAD, ReservedPreviousReadyTimeValue) == 984, "KTHREAD.ReservedPreviousReadyTimeValue offset");
_Static_assert(offsetof(KTHREAD, KernelWaitTime) == 992, "KTHREAD.KernelWaitTime offset");
_Static_assert(offsetof(KTHREAD, UserWaitTime) == 1000, "KTHREAD.UserWaitTime offset");
_Static_assert(offsetof(KTHREAD, _ghidra_field_95) == 1008, "KTHREAD._ghidra_field_95 offset");
_Static_assert(offsetof(KTHREAD, SchedulerAssistPriorityFloor) == 1024, "KTHREAD.SchedulerAssistPriorityFloor offset");
_Static_assert(offsetof(KTHREAD, RealtimePriorityFloor) == 1028, "KTHREAD.RealtimePriorityFloor offset");
_Static_assert(offsetof(KTHREAD, KernelShadowStack) == 1032, "KTHREAD.KernelShadowStack offset");
_Static_assert(offsetof(KTHREAD, KernelShadowStackInitial) == 1040, "KTHREAD.KernelShadowStackInitial offset");
_Static_assert(offsetof(KTHREAD, KernelShadowStackBase) == 1048, "KTHREAD.KernelShadowStackBase offset");
_Static_assert(offsetof(KTHREAD, KernelShadowStackLimit) == 1056, "KTHREAD.KernelShadowStackLimit offset");
_Static_assert(offsetof(KTHREAD, ExtendedFeatureDisableMask) == 1064, "KTHREAD.ExtendedFeatureDisableMask offset");
_Static_assert(offsetof(KTHREAD, HgsFeedbackStartTime) == 1072, "KTHREAD.HgsFeedbackStartTime offset");
_Static_assert(offsetof(KTHREAD, HgsFeedbackCycles) == 1080, "KTHREAD.HgsFeedbackCycles offset");
_Static_assert(offsetof(KTHREAD, HgsInvalidFeedbackCount) == 1088, "KTHREAD.HgsInvalidFeedbackCount offset");
_Static_assert(offsetof(KTHREAD, HgsLowerPerfClassFeedbackCount) == 1092, "KTHREAD.HgsLowerPerfClassFeedbackCount offset");
_Static_assert(offsetof(KTHREAD, HgsHigherPerfClassFeedbackCount) == 1096, "KTHREAD.HgsHigherPerfClassFeedbackCount offset");
_Static_assert(offsetof(KTHREAD, ModeHistory) == 1100, "KTHREAD.ModeHistory offset");
_Static_assert(offsetof(KTHREAD, SystemAffinityTokenListHead) == 1104, "KTHREAD.SystemAffinityTokenListHead offset");
_Static_assert(offsetof(KTHREAD, IptSaveArea) == 1112, "KTHREAD.IptSaveArea offset");
_Static_assert(offsetof(KTHREAD, ResourceIndex) == 1120, "KTHREAD.ResourceIndex offset");
_Static_assert(offsetof(KTHREAD, CoreIsolationReasons) == 1121, "KTHREAD.CoreIsolationReasons offset");
_Static_assert(offsetof(KTHREAD, BamQosLevelFromAssistPage) == 1122, "KTHREAD.BamQosLevelFromAssistPage offset");
_Static_assert(offsetof(KTHREAD, SecureCallCoreIsolationCount) == 1123, "KTHREAD.SecureCallCoreIsolationCount offset");
_Static_assert(offsetof(KTHREAD, SchedulerSharedOffset) == 1124, "KTHREAD.SchedulerSharedOffset offset");
_Static_assert(offsetof(KTHREAD, SchedulerSharedSwappablePage) == 1128, "KTHREAD.SchedulerSharedSwappablePage offset");
_Static_assert(offsetof(KTHREAD, KernelAbEntries) == 1136, "KTHREAD.KernelAbEntries offset");
_Static_assert(offsetof(KTHREAD, UserAbEntries) == 1144, "KTHREAD.UserAbEntries offset");
_Static_assert(offsetof(KTHREAD, KcsanThread) == 1152, "KTHREAD.KcsanThread offset");
_Static_assert(offsetof(KTHREAD, SchedulerAssistYieldCounter) == 1160, "KTHREAD.SchedulerAssistYieldCounter offset");
_Static_assert(offsetof(KTHREAD, SchedulerAssistYieldBoostCount) == 1164, "KTHREAD.SchedulerAssistYieldBoostCount offset");
_Static_assert(offsetof(KTHREAD, SchedulerAssistLastYieldBoostTime) == 1168, "KTHREAD.SchedulerAssistLastYieldBoostTime offset");
_Static_assert(offsetof(KTHREAD, Padding) == 1176, "KTHREAD.Padding offset");

typedef struct CONTEXT {
    uint64_t P1Home; /* +0x0000; Ghidra=ulong64; primitive */
    uint64_t P2Home; /* +0x0008; Ghidra=ulong64; primitive */
    uint64_t P3Home; /* +0x0010; Ghidra=ulong64; primitive */
    uint64_t P4Home; /* +0x0018; Ghidra=ulong64; primitive */
    uint64_t P5Home; /* +0x0020; Ghidra=ulong64; primitive */
    uint64_t P6Home; /* +0x0028; Ghidra=ulong64; primitive */
    uint32_t ContextFlags; /* +0x0030; Ghidra=ulong; primitive */
    uint32_t MxCsr; /* +0x0034; Ghidra=ulong; primitive */
    uint16_t SegCs; /* +0x0038; Ghidra=ushort; primitive */
    uint16_t SegDs; /* +0x003A; Ghidra=ushort; primitive */
    uint16_t SegEs; /* +0x003C; Ghidra=ushort; primitive */
    uint16_t SegFs; /* +0x003E; Ghidra=ushort; primitive */
    uint16_t SegGs; /* +0x0040; Ghidra=ushort; primitive */
    uint16_t SegSs; /* +0x0042; Ghidra=ushort; primitive */
    uint32_t EFlags; /* +0x0044; Ghidra=ulong; primitive */
    uint64_t Dr0; /* +0x0048; Ghidra=ulong64; primitive */
    uint64_t Dr1; /* +0x0050; Ghidra=ulong64; primitive */
    uint64_t Dr2; /* +0x0058; Ghidra=ulong64; primitive */
    uint64_t Dr3; /* +0x0060; Ghidra=ulong64; primitive */
    uint64_t Dr6; /* +0x0068; Ghidra=ulong64; primitive */
    uint64_t Dr7; /* +0x0070; Ghidra=ulong64; primitive */
    uint64_t Rax; /* +0x0078; Ghidra=ulong64; primitive */
    uint64_t Rcx; /* +0x0080; Ghidra=ulong64; primitive */
    uint64_t Rdx; /* +0x0088; Ghidra=ulong64; primitive */
    uint64_t Rbx; /* +0x0090; Ghidra=ulong64; primitive */
    uint64_t Rsp; /* +0x0098; Ghidra=ulong64; primitive */
    uint64_t Rbp; /* +0x00A0; Ghidra=ulong64; primitive */
    uint64_t Rsi; /* +0x00A8; Ghidra=ulong64; primitive */
    uint64_t Rdi; /* +0x00B0; Ghidra=ulong64; primitive */
    uint64_t R8; /* +0x00B8; Ghidra=ulong64; primitive */
    uint64_t R9; /* +0x00C0; Ghidra=ulong64; primitive */
    uint64_t R10; /* +0x00C8; Ghidra=ulong64; primitive */
    uint64_t R11; /* +0x00D0; Ghidra=ulong64; primitive */
    uint64_t R12; /* +0x00D8; Ghidra=ulong64; primitive */
    uint64_t R13; /* +0x00E0; Ghidra=ulong64; primitive */
    uint64_t R14; /* +0x00E8; Ghidra=ulong64; primitive */
    uint64_t R15; /* +0x00F0; Ghidra=ulong64; primitive */
    uint64_t Rip; /* +0x00F8; Ghidra=ulong64; primitive */
    uint8_t _ghidra_field_38[512]; /* +0x0100; Ghidra=_CONTEXT_u_256; opaque_unresolved_type */
    uint8_t VectorRegister[416]; /* +0x0300; Ghidra=_M128A[26]; opaque_unresolved_type */
    uint64_t VectorControl; /* +0x04A0; Ghidra=ulong64; primitive */
    uint64_t DebugControl; /* +0x04A8; Ghidra=ulong64; primitive */
    uint64_t LastBranchToRip; /* +0x04B0; Ghidra=ulong64; primitive */
    uint64_t LastBranchFromRip; /* +0x04B8; Ghidra=ulong64; primitive */
    uint64_t LastExceptionToRip; /* +0x04C0; Ghidra=ulong64; primitive */
    uint64_t LastExceptionFromRip; /* +0x04C8; Ghidra=ulong64; primitive */
} CONTEXT;
_Static_assert(sizeof(CONTEXT) == 1232, "CONTEXT size");
_Static_assert(offsetof(CONTEXT, P1Home) == 0, "CONTEXT.P1Home offset");
_Static_assert(offsetof(CONTEXT, P2Home) == 8, "CONTEXT.P2Home offset");
_Static_assert(offsetof(CONTEXT, P3Home) == 16, "CONTEXT.P3Home offset");
_Static_assert(offsetof(CONTEXT, P4Home) == 24, "CONTEXT.P4Home offset");
_Static_assert(offsetof(CONTEXT, P5Home) == 32, "CONTEXT.P5Home offset");
_Static_assert(offsetof(CONTEXT, P6Home) == 40, "CONTEXT.P6Home offset");
_Static_assert(offsetof(CONTEXT, ContextFlags) == 48, "CONTEXT.ContextFlags offset");
_Static_assert(offsetof(CONTEXT, MxCsr) == 52, "CONTEXT.MxCsr offset");
_Static_assert(offsetof(CONTEXT, SegCs) == 56, "CONTEXT.SegCs offset");
_Static_assert(offsetof(CONTEXT, SegDs) == 58, "CONTEXT.SegDs offset");
_Static_assert(offsetof(CONTEXT, SegEs) == 60, "CONTEXT.SegEs offset");
_Static_assert(offsetof(CONTEXT, SegFs) == 62, "CONTEXT.SegFs offset");
_Static_assert(offsetof(CONTEXT, SegGs) == 64, "CONTEXT.SegGs offset");
_Static_assert(offsetof(CONTEXT, SegSs) == 66, "CONTEXT.SegSs offset");
_Static_assert(offsetof(CONTEXT, EFlags) == 68, "CONTEXT.EFlags offset");
_Static_assert(offsetof(CONTEXT, Dr0) == 72, "CONTEXT.Dr0 offset");
_Static_assert(offsetof(CONTEXT, Dr1) == 80, "CONTEXT.Dr1 offset");
_Static_assert(offsetof(CONTEXT, Dr2) == 88, "CONTEXT.Dr2 offset");
_Static_assert(offsetof(CONTEXT, Dr3) == 96, "CONTEXT.Dr3 offset");
_Static_assert(offsetof(CONTEXT, Dr6) == 104, "CONTEXT.Dr6 offset");
_Static_assert(offsetof(CONTEXT, Dr7) == 112, "CONTEXT.Dr7 offset");
_Static_assert(offsetof(CONTEXT, Rax) == 120, "CONTEXT.Rax offset");
_Static_assert(offsetof(CONTEXT, Rcx) == 128, "CONTEXT.Rcx offset");
_Static_assert(offsetof(CONTEXT, Rdx) == 136, "CONTEXT.Rdx offset");
_Static_assert(offsetof(CONTEXT, Rbx) == 144, "CONTEXT.Rbx offset");
_Static_assert(offsetof(CONTEXT, Rsp) == 152, "CONTEXT.Rsp offset");
_Static_assert(offsetof(CONTEXT, Rbp) == 160, "CONTEXT.Rbp offset");
_Static_assert(offsetof(CONTEXT, Rsi) == 168, "CONTEXT.Rsi offset");
_Static_assert(offsetof(CONTEXT, Rdi) == 176, "CONTEXT.Rdi offset");
_Static_assert(offsetof(CONTEXT, R8) == 184, "CONTEXT.R8 offset");
_Static_assert(offsetof(CONTEXT, R9) == 192, "CONTEXT.R9 offset");
_Static_assert(offsetof(CONTEXT, R10) == 200, "CONTEXT.R10 offset");
_Static_assert(offsetof(CONTEXT, R11) == 208, "CONTEXT.R11 offset");
_Static_assert(offsetof(CONTEXT, R12) == 216, "CONTEXT.R12 offset");
_Static_assert(offsetof(CONTEXT, R13) == 224, "CONTEXT.R13 offset");
_Static_assert(offsetof(CONTEXT, R14) == 232, "CONTEXT.R14 offset");
_Static_assert(offsetof(CONTEXT, R15) == 240, "CONTEXT.R15 offset");
_Static_assert(offsetof(CONTEXT, Rip) == 248, "CONTEXT.Rip offset");
_Static_assert(offsetof(CONTEXT, _ghidra_field_38) == 256, "CONTEXT._ghidra_field_38 offset");
_Static_assert(offsetof(CONTEXT, VectorRegister) == 768, "CONTEXT.VectorRegister offset");
_Static_assert(offsetof(CONTEXT, VectorControl) == 1184, "CONTEXT.VectorControl offset");
_Static_assert(offsetof(CONTEXT, DebugControl) == 1192, "CONTEXT.DebugControl offset");
_Static_assert(offsetof(CONTEXT, LastBranchToRip) == 1200, "CONTEXT.LastBranchToRip offset");
_Static_assert(offsetof(CONTEXT, LastBranchFromRip) == 1208, "CONTEXT.LastBranchFromRip offset");
_Static_assert(offsetof(CONTEXT, LastExceptionToRip) == 1216, "CONTEXT.LastExceptionToRip offset");
_Static_assert(offsetof(CONTEXT, LastExceptionFromRip) == 1224, "CONTEXT.LastExceptionFromRip offset");

typedef struct EPROCESS {
    KPROCESS Pcb; /* +0x0000; Ghidra=_KPROCESS; validated_embedded_priority_type */
    uint8_t ProcessLock[8]; /* +0x01C8; Ghidra=_EX_PUSH_LOCK; opaque_unresolved_type */
    uintptr_t UniqueProcessId; /* +0x01D0; Ghidra=void *; pointer_as_64bit_address */
    uint8_t ActiveProcessLinks[16]; /* +0x01D8; Ghidra=_LIST_ENTRY; opaque_unresolved_type */
    uint8_t RundownProtect[8]; /* +0x01E8; Ghidra=_EX_RUNDOWN_REF; opaque_unresolved_type */
    uint8_t _ghidra_field_5[4]; /* +0x01F0; Ghidra=_EPROCESS_u_496; opaque_unresolved_type */
    uint8_t _ghidra_field_6[4]; /* +0x01F4; Ghidra=_EPROCESS_u_500; opaque_unresolved_type */
    uint8_t CreateTime[8]; /* +0x01F8; Ghidra=_LARGE_INTEGER; opaque_unresolved_type */
    uint64_t ProcessQuotaUsage[2]; /* +0x0200; Ghidra=ulong64[2]; primitive_array */
    uint64_t ProcessQuotaPeak[2]; /* +0x0210; Ghidra=ulong64[2]; primitive_array */
    uint64_t PeakVirtualSize; /* +0x0220; Ghidra=ulong64; primitive */
    uint64_t VirtualSize; /* +0x0228; Ghidra=ulong64; primitive */
    uint8_t SessionProcessLinks[16]; /* +0x0230; Ghidra=_LIST_ENTRY; opaque_unresolved_type */
    uint8_t _ghidra_field_13[8]; /* +0x0240; Ghidra=_EPROCESS_u_576; opaque_unresolved_type */
    uint8_t Token[8]; /* +0x0248; Ghidra=_EX_FAST_REF; opaque_unresolved_type */
    uint64_t MmReserved; /* +0x0250; Ghidra=ulong64; primitive */
    uint8_t AddressCreationLock[8]; /* +0x0258; Ghidra=_EX_PUSH_LOCK; opaque_unresolved_type */
    uint8_t PageTableCommitmentLock[8]; /* +0x0260; Ghidra=_EX_PUSH_LOCK; opaque_unresolved_type */
    uintptr_t RotateInProgress; /* +0x0268; Ghidra=_ETHREAD *; pointer_as_64bit_address */
    uintptr_t ForkInProgress; /* +0x0270; Ghidra=_ETHREAD *; pointer_as_64bit_address */
    uintptr_t CommitChargeJob; /* +0x0278; Ghidra=_EJOB *; pointer_as_64bit_address */
    uint8_t CloneRoot[8]; /* +0x0280; Ghidra=_RTL_AVL_TREE; opaque_unresolved_type */
    uint64_t NumberOfPrivatePages; /* +0x0288; Ghidra=ulong64; primitive */
    uint64_t MmReserved2; /* +0x0290; Ghidra=ulong64; primitive */
    uintptr_t Win32Process; /* +0x0298; Ghidra=void *; pointer_as_64bit_address */
    uintptr_t Job; /* +0x02A0; Ghidra=_EJOB *; pointer_as_64bit_address */
    uintptr_t SectionObject; /* +0x02A8; Ghidra=void *; pointer_as_64bit_address */
    uintptr_t SectionBaseAddress; /* +0x02B0; Ghidra=void *; pointer_as_64bit_address */
    uint32_t Cookie; /* +0x02B8; Ghidra=ulong; primitive */
    uint8_t _ghidra_field_29; /* +0x02BC; Ghidra=undefined; primitive */
    uint8_t _ghidra_field_30; /* +0x02BD; Ghidra=undefined; primitive */
    uint8_t _ghidra_field_31; /* +0x02BE; Ghidra=undefined; primitive */
    uint8_t _ghidra_field_32; /* +0x02BF; Ghidra=undefined; primitive */
    uintptr_t WorkingSetWatch; /* +0x02C0; Ghidra=_PAGEFAULT_HISTORY *; pointer_as_64bit_address */
    uintptr_t Win32WindowStation; /* +0x02C8; Ghidra=void *; pointer_as_64bit_address */
    uintptr_t InheritedFromUniqueProcessId; /* +0x02D0; Ghidra=void *; pointer_as_64bit_address */
    uint64_t OwnerProcessId; /* +0x02D8; Ghidra=ulong64; primitive */
    uintptr_t Peb; /* +0x02E0; Ghidra=_PEB *; pointer_as_64bit_address */
    uintptr_t Session; /* +0x02E8; Ghidra=_PSP_SESSION_SPACE *; pointer_as_64bit_address */
    uintptr_t Spare1; /* +0x02F0; Ghidra=void *; pointer_as_64bit_address */
    uintptr_t QuotaBlock; /* +0x02F8; Ghidra=_EPROCESS_QUOTA_BLOCK *; pointer_as_64bit_address */
    uintptr_t ObjectTable; /* +0x0300; Ghidra=_HANDLE_TABLE *; pointer_as_64bit_address */
    uintptr_t DebugPort; /* +0x0308; Ghidra=void *; pointer_as_64bit_address */
    uintptr_t WoW64Process; /* +0x0310; Ghidra=_EWOW64PROCESS *; pointer_as_64bit_address */
    uint8_t DeviceMap[8]; /* +0x0318; Ghidra=_EX_FAST_REF; opaque_unresolved_type */
    uintptr_t EtwDataSource; /* +0x0320; Ghidra=void *; pointer_as_64bit_address */
    uint64_t PageDirectoryPte; /* +0x0328; Ghidra=ulong64; primitive */
    uintptr_t ImageFilePointer; /* +0x0330; Ghidra=_FILE_OBJECT *; pointer_as_64bit_address */
    uint8_t ImageFileName[15]; /* +0x0338; Ghidra=uchar[15]; primitive_array */
    uint8_t PriorityClass; /* +0x0347; Ghidra=uchar; primitive */
    uintptr_t SecurityPort; /* +0x0348; Ghidra=void *; pointer_as_64bit_address */
    uint8_t SeAuditProcessCreationInfo[8]; /* +0x0350; Ghidra=_SE_AUDIT_PROCESS_CREATION_INFO; opaque_unresolved_type */
    uint8_t JobLinks[16]; /* +0x0358; Ghidra=_LIST_ENTRY; opaque_unresolved_type */
    uintptr_t HighestUserAddress; /* +0x0368; Ghidra=void *; pointer_as_64bit_address */
    uint8_t ThreadListHead[16]; /* +0x0370; Ghidra=_LIST_ENTRY; opaque_unresolved_type */
    uint32_t ActiveThreads; /* +0x0380; Ghidra=ulong; primitive */
    uint32_t ImagePathHash; /* +0x0384; Ghidra=ulong; primitive */
    uint32_t DefaultHardErrorProcessing; /* +0x0388; Ghidra=ulong; primitive */
    int32_t LastThreadExitStatus; /* +0x038C; Ghidra=long; primitive */
    uint8_t PrefetchTrace[8]; /* +0x0390; Ghidra=_EX_FAST_REF; opaque_unresolved_type */
    uintptr_t LockedPagesList; /* +0x0398; Ghidra=void *; pointer_as_64bit_address */
    uint8_t ReadOperationCount[8]; /* +0x03A0; Ghidra=_LARGE_INTEGER; opaque_unresolved_type */
    uint8_t WriteOperationCount[8]; /* +0x03A8; Ghidra=_LARGE_INTEGER; opaque_unresolved_type */
    uint8_t OtherOperationCount[8]; /* +0x03B0; Ghidra=_LARGE_INTEGER; opaque_unresolved_type */
    uint8_t ReadTransferCount[8]; /* +0x03B8; Ghidra=_LARGE_INTEGER; opaque_unresolved_type */
    uint8_t WriteTransferCount[8]; /* +0x03C0; Ghidra=_LARGE_INTEGER; opaque_unresolved_type */
    uint8_t OtherTransferCount[8]; /* +0x03C8; Ghidra=_LARGE_INTEGER; opaque_unresolved_type */
    uint64_t CommitChargeLimit; /* +0x03D0; Ghidra=ulong64; primitive */
    uint64_t CommitCharge; /* +0x03D8; Ghidra=ulong64; primitive */
    uint64_t CommitChargePeak; /* +0x03E0; Ghidra=ulong64; primitive */
    uint8_t _ghidra_field_70; /* +0x03E8; Ghidra=undefined; primitive */
    uint8_t _ghidra_field_71; /* +0x03E9; Ghidra=undefined; primitive */
    uint8_t _ghidra_field_72; /* +0x03EA; Ghidra=undefined; primitive */
    uint8_t _ghidra_field_73; /* +0x03EB; Ghidra=undefined; primitive */
    uint8_t _ghidra_field_74; /* +0x03EC; Ghidra=undefined; primitive */
    uint8_t _ghidra_field_75; /* +0x03ED; Ghidra=undefined; primitive */
    uint8_t _ghidra_field_76; /* +0x03EE; Ghidra=undefined; primitive */
    uint8_t _ghidra_field_77; /* +0x03EF; Ghidra=undefined; primitive */
    uint8_t _ghidra_field_78; /* +0x03F0; Ghidra=undefined; primitive */
    uint8_t _ghidra_field_79; /* +0x03F1; Ghidra=undefined; primitive */
    uint8_t _ghidra_field_80; /* +0x03F2; Ghidra=undefined; primitive */
    uint8_t _ghidra_field_81; /* +0x03F3; Ghidra=undefined; primitive */
    uint8_t _ghidra_field_82; /* +0x03F4; Ghidra=undefined; primitive */
    uint8_t _ghidra_field_83; /* +0x03F5; Ghidra=undefined; primitive */
    uint8_t _ghidra_field_84; /* +0x03F6; Ghidra=undefined; primitive */
    uint8_t _ghidra_field_85; /* +0x03F7; Ghidra=undefined; primitive */
    uint8_t _ghidra_field_86; /* +0x03F8; Ghidra=undefined; primitive */
    uint8_t _ghidra_field_87; /* +0x03F9; Ghidra=undefined; primitive */
    uint8_t _ghidra_field_88; /* +0x03FA; Ghidra=undefined; primitive */
    uint8_t _ghidra_field_89; /* +0x03FB; Ghidra=undefined; primitive */
    uint8_t _ghidra_field_90; /* +0x03FC; Ghidra=undefined; primitive */
    uint8_t _ghidra_field_91; /* +0x03FD; Ghidra=undefined; primitive */
    uint8_t _ghidra_field_92; /* +0x03FE; Ghidra=undefined; primitive */
    uint8_t _ghidra_field_93; /* +0x03FF; Ghidra=undefined; primitive */
    uint8_t Vm[320]; /* +0x0400; Ghidra=_MMSUPPORT_FULL; opaque_unresolved_type */
    uint8_t MmProcessLinks[16]; /* +0x0540; Ghidra=_LIST_ENTRY; opaque_unresolved_type */
    uint32_t ModifiedPageCount; /* +0x0550; Ghidra=ulong; primitive */
    int32_t ExitStatus; /* +0x0554; Ghidra=long; primitive */
    uint8_t VadRoot[8]; /* +0x0558; Ghidra=_RTL_AVL_TREE; opaque_unresolved_type */
    uintptr_t VadHint; /* +0x0560; Ghidra=void *; pointer_as_64bit_address */
    uint64_t VadCount; /* +0x0568; Ghidra=ulong64; primitive */
    uint64_t VadPhysicalPages; /* +0x0570; Ghidra=ulong64; primitive */
    uint64_t VadPhysicalPagesLimit; /* +0x0578; Ghidra=ulong64; primitive */
    uint8_t AlpcContext[32]; /* +0x0580; Ghidra=_ALPC_PROCESS_CONTEXT; opaque_unresolved_type */
    uint8_t TimerResolutionLink[16]; /* +0x05A0; Ghidra=_LIST_ENTRY; opaque_unresolved_type */
    uintptr_t TimerResolutionStackRecord; /* +0x05B0; Ghidra=_PO_DIAG_STACK_RECORD *; pointer_as_64bit_address */
    uint32_t RequestedTimerResolution; /* +0x05B8; Ghidra=ulong; primitive */
    uint32_t SmallestTimerResolution; /* +0x05BC; Ghidra=ulong; primitive */
    uint8_t ExitTime[8]; /* +0x05C0; Ghidra=_LARGE_INTEGER; opaque_unresolved_type */
    uintptr_t InvertedFunctionTable; /* +0x05C8; Ghidra=_INVERTED_FUNCTION_TABLE_KERNEL_MODE *; pointer_as_64bit_address */
    uint8_t InvertedFunctionTableLock[8]; /* +0x05D0; Ghidra=_EX_PUSH_LOCK; opaque_unresolved_type */
    uint32_t ActiveThreadsHighWatermark; /* +0x05D8; Ghidra=ulong; primitive */
    uint32_t LargePrivateVadCount; /* +0x05DC; Ghidra=ulong; primitive */
    uint8_t ThreadListLock[8]; /* +0x05E0; Ghidra=_EX_PUSH_LOCK; opaque_unresolved_type */
    uintptr_t WnfContext; /* +0x05E8; Ghidra=void *; pointer_as_64bit_address */
    uintptr_t ServerSilo; /* +0x05F0; Ghidra=_EJOB *; pointer_as_64bit_address */
    uint8_t SignatureLevel; /* +0x05F8; Ghidra=uchar; primitive */
    uint8_t SectionSignatureLevel; /* +0x05F9; Ghidra=uchar; primitive */
    uint8_t Protection[1]; /* +0x05FA; Ghidra=_PS_PROTECTION; opaque_unresolved_type */
    union {
        struct {
            uint8_t HangCount[1]; /* Ghidra=uchar:3; sobreposicao preservada */
        } HangCount_view;
        struct {
            uint8_t GhostCount[1]; /* Ghidra=uchar:3; sobreposicao preservada */
        } GhostCount_view;
        struct {
            uint8_t PrefilterException[1]; /* Ghidra=uchar:1; sobreposicao preservada */
        } PrefilterException_view;
        uint8_t _storage[1];
    } _overlay_05FB; /* +0x05FB; intervalo sobreposto */
    uint8_t _ghidra_field_122[4]; /* +0x05FC; Ghidra=_EPROCESS_u_1532; opaque_unresolved_type */
    int32_t DeviceAsid; /* +0x0600; Ghidra=long; primitive */
    uint8_t _ghidra_field_124; /* +0x0604; Ghidra=undefined; primitive */
    uint8_t _ghidra_field_125; /* +0x0605; Ghidra=undefined; primitive */
    uint8_t _ghidra_field_126; /* +0x0606; Ghidra=undefined; primitive */
    uint8_t _ghidra_field_127; /* +0x0607; Ghidra=undefined; primitive */
    uintptr_t SvmData; /* +0x0608; Ghidra=void *; pointer_as_64bit_address */
    uint8_t SvmProcessLock[8]; /* +0x0610; Ghidra=_EX_PUSH_LOCK; opaque_unresolved_type */
    uint64_t SvmLock; /* +0x0618; Ghidra=ulong64; primitive */
    uint8_t SvmProcessDeviceListHead[16]; /* +0x0620; Ghidra=_LIST_ENTRY; opaque_unresolved_type */
    uint64_t LastFreezeInterruptTime; /* +0x0630; Ghidra=ulong64; primitive */
    uintptr_t DiskCounters; /* +0x0638; Ghidra=_PROCESS_DISK_COUNTERS *; pointer_as_64bit_address */
    uintptr_t PicoContext; /* +0x0640; Ghidra=void *; pointer_as_64bit_address */
    uintptr_t EnclaveTable; /* +0x0648; Ghidra=void *; pointer_as_64bit_address */
    uint64_t EnclaveNumber; /* +0x0650; Ghidra=ulong64; primitive */
    uint8_t EnclaveLock[8]; /* +0x0658; Ghidra=_EX_PUSH_LOCK; opaque_unresolved_type */
    uint32_t HighPriorityFaultsAllowed; /* +0x0660; Ghidra=ulong; primitive */
    uint8_t _ghidra_field_139; /* +0x0664; Ghidra=undefined; primitive */
    uint8_t _ghidra_field_140; /* +0x0665; Ghidra=undefined; primitive */
    uint8_t _ghidra_field_141; /* +0x0666; Ghidra=undefined; primitive */
    uint8_t _ghidra_field_142; /* +0x0667; Ghidra=undefined; primitive */
    uintptr_t EnergyContext; /* +0x0668; Ghidra=_PO_PROCESS_ENERGY_CONTEXT *; pointer_as_64bit_address */
    uintptr_t VmContext; /* +0x0670; Ghidra=void *; pointer_as_64bit_address */
    uint64_t SequenceNumber; /* +0x0678; Ghidra=ulong64; primitive */
    uint64_t CreateInterruptTime; /* +0x0680; Ghidra=ulong64; primitive */
    uint64_t CreateUnbiasedInterruptTime; /* +0x0688; Ghidra=ulong64; primitive */
    uint64_t TotalUnbiasedFrozenTime; /* +0x0690; Ghidra=ulong64; primitive */
    uint64_t LastAppStateUpdateTime; /* +0x0698; Ghidra=ulong64; primitive */
    union {
        struct {
            uint8_t LastAppStateUptime[8]; /* Ghidra=ulong64:61; sobreposicao preservada */
        } LastAppStateUptime_view;
        struct {
            uint8_t _relative_padding[7];
            uint8_t LastAppState[1]; /* Ghidra=ulong64:3; sobreposicao preservada */
        } LastAppState_view;
        uint8_t _storage[8];
    } _overlay_06A0; /* +0x06A0; intervalo sobreposto */
    uint64_t SharedCommitCharge; /* +0x06A8; Ghidra=ulong64; primitive */
    uint8_t SharedCommitLock[8]; /* +0x06B0; Ghidra=_EX_PUSH_LOCK; opaque_unresolved_type */
    uint8_t SharedCommitLinks[16]; /* +0x06B8; Ghidra=_LIST_ENTRY; opaque_unresolved_type */
    uint8_t _ghidra_field_155[16]; /* +0x06C8; Ghidra=_EPROCESS_u_1736; opaque_unresolved_type */
    uintptr_t DiskIoAttribution; /* +0x06D8; Ghidra=void *; pointer_as_64bit_address */
    uintptr_t DxgProcess; /* +0x06E0; Ghidra=void *; pointer_as_64bit_address */
    uint32_t Win32KFilterSet; /* +0x06E8; Ghidra=ulong; primitive */
    uint16_t Machine; /* +0x06EC; Ghidra=ushort; primitive */
    uint8_t MmSlabIdentity; /* +0x06EE; Ghidra=uchar; primitive */
    uint8_t Spare0; /* +0x06EF; Ghidra=uchar; primitive */
    uint8_t ProcessTimerDelay[8]; /* +0x06F0; Ghidra=_PS_INTERLOCKED_TIMER_DELAY_VALUES; opaque_unresolved_type */
    uint32_t KTimerSets; /* +0x06F8; Ghidra=ulong; primitive */
    uint32_t KTimer2Sets; /* +0x06FC; Ghidra=ulong; primitive */
    uint32_t ThreadTimerSets; /* +0x0700; Ghidra=ulong; primitive */
    uint8_t _ghidra_field_166; /* +0x0704; Ghidra=undefined; primitive */
    uint8_t _ghidra_field_167; /* +0x0705; Ghidra=undefined; primitive */
    uint8_t _ghidra_field_168; /* +0x0706; Ghidra=undefined; primitive */
    uint8_t _ghidra_field_169; /* +0x0707; Ghidra=undefined; primitive */
    uint64_t VirtualTimerListLock; /* +0x0708; Ghidra=ulong64; primitive */
    uint8_t VirtualTimerListHead[16]; /* +0x0710; Ghidra=_LIST_ENTRY; opaque_unresolved_type */
    uint8_t _ghidra_field_172[48]; /* +0x0720; Ghidra=_EPROCESS_u_1824; opaque_unresolved_type */
    uint8_t _ghidra_field_173[4]; /* +0x0750; Ghidra=_EPROCESS_u_1872; opaque_unresolved_type */
    uint8_t _ghidra_field_174[4]; /* +0x0754; Ghidra=_EPROCESS_u_1876; opaque_unresolved_type */
    uintptr_t PartitionObject; /* +0x0758; Ghidra=void *; pointer_as_64bit_address */
    uint64_t SecurityDomain; /* +0x0760; Ghidra=ulong64; primitive */
    uint64_t ParentSecurityDomain; /* +0x0768; Ghidra=ulong64; primitive */
    uintptr_t CoverageSamplerContext; /* +0x0770; Ghidra=void *; pointer_as_64bit_address */
    uintptr_t MmHotPatchContext; /* +0x0778; Ghidra=void *; pointer_as_64bit_address */
    uint8_t DynamicEHContinuationTargetsTree[8]; /* +0x0780; Ghidra=_RTL_AVL_TREE; opaque_unresolved_type */
    uint8_t DynamicEHContinuationTargetsLock[8]; /* +0x0788; Ghidra=_EX_PUSH_LOCK; opaque_unresolved_type */
    uint8_t DynamicEnforcedCetCompatibleRanges[16]; /* +0x0790; Ghidra=_PS_DYNAMIC_ENFORCED_ADDRESS_RANGES; opaque_unresolved_type */
    uint32_t DisabledComponentFlags; /* +0x07A0; Ghidra=ulong; primitive */
    int32_t PageCombineSequence; /* +0x07A4; Ghidra=long; primitive */
    uint8_t EnableOptionalXStateFeaturesLock[8]; /* +0x07A8; Ghidra=_EX_PUSH_LOCK; opaque_unresolved_type */
    uintptr_t PathRedirectionHashes; /* +0x07B0; Ghidra=ulong *; pointer_as_64bit_address */
    uintptr_t SyscallProvider; /* +0x07B8; Ghidra=_PS_SYSCALL_PROVIDER *; pointer_as_64bit_address */
    uint8_t SyscallProviderProcessLinks[16]; /* +0x07C0; Ghidra=_LIST_ENTRY; opaque_unresolved_type */
    uint8_t SyscallProviderDispatchContext[8]; /* +0x07D0; Ghidra=_PSP_SYSCALL_PROVIDER_DISPATCH_CONTEXT; opaque_unresolved_type */
    uint8_t _ghidra_field_190[4]; /* +0x07D8; Ghidra=_EPROCESS_u_2008; opaque_unresolved_type */
    uint8_t _ghidra_field_191[4]; /* +0x07DC; Ghidra=_EPROCESS_u_2012; opaque_unresolved_type */
    uint8_t _ghidra_field_192[4]; /* +0x07E0; Ghidra=_EPROCESS_u_2016; opaque_unresolved_type */
    int32_t SupervisorDeviceAsid; /* +0x07E4; Ghidra=long; primitive */
    uintptr_t SupervisorSvmData; /* +0x07E8; Ghidra=void *; pointer_as_64bit_address */
    uintptr_t NetworkCounters; /* +0x07F0; Ghidra=_PROCESS_NETWORK_COUNTERS *; pointer_as_64bit_address */
    uint8_t Execution[4]; /* +0x07F8; Ghidra=_PROCESS_EXECUTION; opaque_unresolved_type */
    uint8_t _ghidra_field_197; /* +0x07FC; Ghidra=undefined; primitive */
    uint8_t _ghidra_field_198; /* +0x07FD; Ghidra=undefined; primitive */
    uint8_t _ghidra_field_199; /* +0x07FE; Ghidra=undefined; primitive */
    uint8_t _ghidra_field_200; /* +0x07FF; Ghidra=undefined; primitive */
    uintptr_t ThreadIndexTable; /* +0x0800; Ghidra=void *; pointer_as_64bit_address */
    uint8_t FreezeWorkLinks[16]; /* +0x0808; Ghidra=_LIST_ENTRY; opaque_unresolved_type */
    uint8_t PpmPolicyLock[8]; /* +0x0818; Ghidra=_EX_PUSH_LOCK; opaque_unresolved_type */
    uint32_t BamPpmPolicy; /* +0x0820; Ghidra=ulong; primitive */
    uint8_t _ghidra_field_205; /* +0x0824; Ghidra=undefined; primitive */
    uint8_t _ghidra_field_206; /* +0x0825; Ghidra=undefined; primitive */
    uint8_t _ghidra_field_207; /* +0x0826; Ghidra=undefined; primitive */
    uint8_t _ghidra_field_208; /* +0x0827; Ghidra=undefined; primitive */
    uint8_t ProcessQosCallbackListEntry[8]; /* +0x0828; Ghidra=_SINGLE_LIST_ENTRY; opaque_unresolved_type */
    uint8_t _ghidra_field_210; /* +0x0830; Ghidra=undefined; primitive */
    uint8_t _ghidra_field_211; /* +0x0831; Ghidra=undefined; primitive */
    uint8_t _ghidra_field_212; /* +0x0832; Ghidra=undefined; primitive */
    uint8_t _ghidra_field_213; /* +0x0833; Ghidra=undefined; primitive */
    uint8_t _ghidra_field_214; /* +0x0834; Ghidra=undefined; primitive */
    uint8_t _ghidra_field_215; /* +0x0835; Ghidra=undefined; primitive */
    uint8_t _ghidra_field_216; /* +0x0836; Ghidra=undefined; primitive */
    uint8_t _ghidra_field_217; /* +0x0837; Ghidra=undefined; primitive */
    uint8_t _ghidra_field_218; /* +0x0838; Ghidra=undefined; primitive */
    uint8_t _ghidra_field_219; /* +0x0839; Ghidra=undefined; primitive */
    uint8_t _ghidra_field_220; /* +0x083A; Ghidra=undefined; primitive */
    uint8_t _ghidra_field_221; /* +0x083B; Ghidra=undefined; primitive */
    uint8_t _ghidra_field_222; /* +0x083C; Ghidra=undefined; primitive */
    uint8_t _ghidra_field_223; /* +0x083D; Ghidra=undefined; primitive */
    uint8_t _ghidra_field_224; /* +0x083E; Ghidra=undefined; primitive */
    uint8_t _ghidra_field_225; /* +0x083F; Ghidra=undefined; primitive */
} EPROCESS;
_Static_assert(sizeof(EPROCESS) == 2112, "EPROCESS size");
_Static_assert(offsetof(EPROCESS, Pcb) == 0, "EPROCESS.Pcb offset");
_Static_assert(offsetof(EPROCESS, ProcessLock) == 456, "EPROCESS.ProcessLock offset");
_Static_assert(offsetof(EPROCESS, UniqueProcessId) == 464, "EPROCESS.UniqueProcessId offset");
_Static_assert(offsetof(EPROCESS, ActiveProcessLinks) == 472, "EPROCESS.ActiveProcessLinks offset");
_Static_assert(offsetof(EPROCESS, RundownProtect) == 488, "EPROCESS.RundownProtect offset");
_Static_assert(offsetof(EPROCESS, _ghidra_field_5) == 496, "EPROCESS._ghidra_field_5 offset");
_Static_assert(offsetof(EPROCESS, _ghidra_field_6) == 500, "EPROCESS._ghidra_field_6 offset");
_Static_assert(offsetof(EPROCESS, CreateTime) == 504, "EPROCESS.CreateTime offset");
_Static_assert(offsetof(EPROCESS, ProcessQuotaUsage) == 512, "EPROCESS.ProcessQuotaUsage offset");
_Static_assert(offsetof(EPROCESS, ProcessQuotaPeak) == 528, "EPROCESS.ProcessQuotaPeak offset");
_Static_assert(offsetof(EPROCESS, PeakVirtualSize) == 544, "EPROCESS.PeakVirtualSize offset");
_Static_assert(offsetof(EPROCESS, VirtualSize) == 552, "EPROCESS.VirtualSize offset");
_Static_assert(offsetof(EPROCESS, SessionProcessLinks) == 560, "EPROCESS.SessionProcessLinks offset");
_Static_assert(offsetof(EPROCESS, _ghidra_field_13) == 576, "EPROCESS._ghidra_field_13 offset");
_Static_assert(offsetof(EPROCESS, Token) == 584, "EPROCESS.Token offset");
_Static_assert(offsetof(EPROCESS, MmReserved) == 592, "EPROCESS.MmReserved offset");
_Static_assert(offsetof(EPROCESS, AddressCreationLock) == 600, "EPROCESS.AddressCreationLock offset");
_Static_assert(offsetof(EPROCESS, PageTableCommitmentLock) == 608, "EPROCESS.PageTableCommitmentLock offset");
_Static_assert(offsetof(EPROCESS, RotateInProgress) == 616, "EPROCESS.RotateInProgress offset");
_Static_assert(offsetof(EPROCESS, ForkInProgress) == 624, "EPROCESS.ForkInProgress offset");
_Static_assert(offsetof(EPROCESS, CommitChargeJob) == 632, "EPROCESS.CommitChargeJob offset");
_Static_assert(offsetof(EPROCESS, CloneRoot) == 640, "EPROCESS.CloneRoot offset");
_Static_assert(offsetof(EPROCESS, NumberOfPrivatePages) == 648, "EPROCESS.NumberOfPrivatePages offset");
_Static_assert(offsetof(EPROCESS, MmReserved2) == 656, "EPROCESS.MmReserved2 offset");
_Static_assert(offsetof(EPROCESS, Win32Process) == 664, "EPROCESS.Win32Process offset");
_Static_assert(offsetof(EPROCESS, Job) == 672, "EPROCESS.Job offset");
_Static_assert(offsetof(EPROCESS, SectionObject) == 680, "EPROCESS.SectionObject offset");
_Static_assert(offsetof(EPROCESS, SectionBaseAddress) == 688, "EPROCESS.SectionBaseAddress offset");
_Static_assert(offsetof(EPROCESS, Cookie) == 696, "EPROCESS.Cookie offset");
_Static_assert(offsetof(EPROCESS, _ghidra_field_29) == 700, "EPROCESS._ghidra_field_29 offset");
_Static_assert(offsetof(EPROCESS, _ghidra_field_30) == 701, "EPROCESS._ghidra_field_30 offset");
_Static_assert(offsetof(EPROCESS, _ghidra_field_31) == 702, "EPROCESS._ghidra_field_31 offset");
_Static_assert(offsetof(EPROCESS, _ghidra_field_32) == 703, "EPROCESS._ghidra_field_32 offset");
_Static_assert(offsetof(EPROCESS, WorkingSetWatch) == 704, "EPROCESS.WorkingSetWatch offset");
_Static_assert(offsetof(EPROCESS, Win32WindowStation) == 712, "EPROCESS.Win32WindowStation offset");
_Static_assert(offsetof(EPROCESS, InheritedFromUniqueProcessId) == 720, "EPROCESS.InheritedFromUniqueProcessId offset");
_Static_assert(offsetof(EPROCESS, OwnerProcessId) == 728, "EPROCESS.OwnerProcessId offset");
_Static_assert(offsetof(EPROCESS, Peb) == 736, "EPROCESS.Peb offset");
_Static_assert(offsetof(EPROCESS, Session) == 744, "EPROCESS.Session offset");
_Static_assert(offsetof(EPROCESS, Spare1) == 752, "EPROCESS.Spare1 offset");
_Static_assert(offsetof(EPROCESS, QuotaBlock) == 760, "EPROCESS.QuotaBlock offset");
_Static_assert(offsetof(EPROCESS, ObjectTable) == 768, "EPROCESS.ObjectTable offset");
_Static_assert(offsetof(EPROCESS, DebugPort) == 776, "EPROCESS.DebugPort offset");
_Static_assert(offsetof(EPROCESS, WoW64Process) == 784, "EPROCESS.WoW64Process offset");
_Static_assert(offsetof(EPROCESS, DeviceMap) == 792, "EPROCESS.DeviceMap offset");
_Static_assert(offsetof(EPROCESS, EtwDataSource) == 800, "EPROCESS.EtwDataSource offset");
_Static_assert(offsetof(EPROCESS, PageDirectoryPte) == 808, "EPROCESS.PageDirectoryPte offset");
_Static_assert(offsetof(EPROCESS, ImageFilePointer) == 816, "EPROCESS.ImageFilePointer offset");
_Static_assert(offsetof(EPROCESS, ImageFileName) == 824, "EPROCESS.ImageFileName offset");
_Static_assert(offsetof(EPROCESS, PriorityClass) == 839, "EPROCESS.PriorityClass offset");
_Static_assert(offsetof(EPROCESS, SecurityPort) == 840, "EPROCESS.SecurityPort offset");
_Static_assert(offsetof(EPROCESS, SeAuditProcessCreationInfo) == 848, "EPROCESS.SeAuditProcessCreationInfo offset");
_Static_assert(offsetof(EPROCESS, JobLinks) == 856, "EPROCESS.JobLinks offset");
_Static_assert(offsetof(EPROCESS, HighestUserAddress) == 872, "EPROCESS.HighestUserAddress offset");
_Static_assert(offsetof(EPROCESS, ThreadListHead) == 880, "EPROCESS.ThreadListHead offset");
_Static_assert(offsetof(EPROCESS, ActiveThreads) == 896, "EPROCESS.ActiveThreads offset");
_Static_assert(offsetof(EPROCESS, ImagePathHash) == 900, "EPROCESS.ImagePathHash offset");
_Static_assert(offsetof(EPROCESS, DefaultHardErrorProcessing) == 904, "EPROCESS.DefaultHardErrorProcessing offset");
_Static_assert(offsetof(EPROCESS, LastThreadExitStatus) == 908, "EPROCESS.LastThreadExitStatus offset");
_Static_assert(offsetof(EPROCESS, PrefetchTrace) == 912, "EPROCESS.PrefetchTrace offset");
_Static_assert(offsetof(EPROCESS, LockedPagesList) == 920, "EPROCESS.LockedPagesList offset");
_Static_assert(offsetof(EPROCESS, ReadOperationCount) == 928, "EPROCESS.ReadOperationCount offset");
_Static_assert(offsetof(EPROCESS, WriteOperationCount) == 936, "EPROCESS.WriteOperationCount offset");
_Static_assert(offsetof(EPROCESS, OtherOperationCount) == 944, "EPROCESS.OtherOperationCount offset");
_Static_assert(offsetof(EPROCESS, ReadTransferCount) == 952, "EPROCESS.ReadTransferCount offset");
_Static_assert(offsetof(EPROCESS, WriteTransferCount) == 960, "EPROCESS.WriteTransferCount offset");
_Static_assert(offsetof(EPROCESS, OtherTransferCount) == 968, "EPROCESS.OtherTransferCount offset");
_Static_assert(offsetof(EPROCESS, CommitChargeLimit) == 976, "EPROCESS.CommitChargeLimit offset");
_Static_assert(offsetof(EPROCESS, CommitCharge) == 984, "EPROCESS.CommitCharge offset");
_Static_assert(offsetof(EPROCESS, CommitChargePeak) == 992, "EPROCESS.CommitChargePeak offset");
_Static_assert(offsetof(EPROCESS, _ghidra_field_70) == 1000, "EPROCESS._ghidra_field_70 offset");
_Static_assert(offsetof(EPROCESS, _ghidra_field_71) == 1001, "EPROCESS._ghidra_field_71 offset");
_Static_assert(offsetof(EPROCESS, _ghidra_field_72) == 1002, "EPROCESS._ghidra_field_72 offset");
_Static_assert(offsetof(EPROCESS, _ghidra_field_73) == 1003, "EPROCESS._ghidra_field_73 offset");
_Static_assert(offsetof(EPROCESS, _ghidra_field_74) == 1004, "EPROCESS._ghidra_field_74 offset");
_Static_assert(offsetof(EPROCESS, _ghidra_field_75) == 1005, "EPROCESS._ghidra_field_75 offset");
_Static_assert(offsetof(EPROCESS, _ghidra_field_76) == 1006, "EPROCESS._ghidra_field_76 offset");
_Static_assert(offsetof(EPROCESS, _ghidra_field_77) == 1007, "EPROCESS._ghidra_field_77 offset");
_Static_assert(offsetof(EPROCESS, _ghidra_field_78) == 1008, "EPROCESS._ghidra_field_78 offset");
_Static_assert(offsetof(EPROCESS, _ghidra_field_79) == 1009, "EPROCESS._ghidra_field_79 offset");
_Static_assert(offsetof(EPROCESS, _ghidra_field_80) == 1010, "EPROCESS._ghidra_field_80 offset");
_Static_assert(offsetof(EPROCESS, _ghidra_field_81) == 1011, "EPROCESS._ghidra_field_81 offset");
_Static_assert(offsetof(EPROCESS, _ghidra_field_82) == 1012, "EPROCESS._ghidra_field_82 offset");
_Static_assert(offsetof(EPROCESS, _ghidra_field_83) == 1013, "EPROCESS._ghidra_field_83 offset");
_Static_assert(offsetof(EPROCESS, _ghidra_field_84) == 1014, "EPROCESS._ghidra_field_84 offset");
_Static_assert(offsetof(EPROCESS, _ghidra_field_85) == 1015, "EPROCESS._ghidra_field_85 offset");
_Static_assert(offsetof(EPROCESS, _ghidra_field_86) == 1016, "EPROCESS._ghidra_field_86 offset");
_Static_assert(offsetof(EPROCESS, _ghidra_field_87) == 1017, "EPROCESS._ghidra_field_87 offset");
_Static_assert(offsetof(EPROCESS, _ghidra_field_88) == 1018, "EPROCESS._ghidra_field_88 offset");
_Static_assert(offsetof(EPROCESS, _ghidra_field_89) == 1019, "EPROCESS._ghidra_field_89 offset");
_Static_assert(offsetof(EPROCESS, _ghidra_field_90) == 1020, "EPROCESS._ghidra_field_90 offset");
_Static_assert(offsetof(EPROCESS, _ghidra_field_91) == 1021, "EPROCESS._ghidra_field_91 offset");
_Static_assert(offsetof(EPROCESS, _ghidra_field_92) == 1022, "EPROCESS._ghidra_field_92 offset");
_Static_assert(offsetof(EPROCESS, _ghidra_field_93) == 1023, "EPROCESS._ghidra_field_93 offset");
_Static_assert(offsetof(EPROCESS, Vm) == 1024, "EPROCESS.Vm offset");
_Static_assert(offsetof(EPROCESS, MmProcessLinks) == 1344, "EPROCESS.MmProcessLinks offset");
_Static_assert(offsetof(EPROCESS, ModifiedPageCount) == 1360, "EPROCESS.ModifiedPageCount offset");
_Static_assert(offsetof(EPROCESS, ExitStatus) == 1364, "EPROCESS.ExitStatus offset");
_Static_assert(offsetof(EPROCESS, VadRoot) == 1368, "EPROCESS.VadRoot offset");
_Static_assert(offsetof(EPROCESS, VadHint) == 1376, "EPROCESS.VadHint offset");
_Static_assert(offsetof(EPROCESS, VadCount) == 1384, "EPROCESS.VadCount offset");
_Static_assert(offsetof(EPROCESS, VadPhysicalPages) == 1392, "EPROCESS.VadPhysicalPages offset");
_Static_assert(offsetof(EPROCESS, VadPhysicalPagesLimit) == 1400, "EPROCESS.VadPhysicalPagesLimit offset");
_Static_assert(offsetof(EPROCESS, AlpcContext) == 1408, "EPROCESS.AlpcContext offset");
_Static_assert(offsetof(EPROCESS, TimerResolutionLink) == 1440, "EPROCESS.TimerResolutionLink offset");
_Static_assert(offsetof(EPROCESS, TimerResolutionStackRecord) == 1456, "EPROCESS.TimerResolutionStackRecord offset");
_Static_assert(offsetof(EPROCESS, RequestedTimerResolution) == 1464, "EPROCESS.RequestedTimerResolution offset");
_Static_assert(offsetof(EPROCESS, SmallestTimerResolution) == 1468, "EPROCESS.SmallestTimerResolution offset");
_Static_assert(offsetof(EPROCESS, ExitTime) == 1472, "EPROCESS.ExitTime offset");
_Static_assert(offsetof(EPROCESS, InvertedFunctionTable) == 1480, "EPROCESS.InvertedFunctionTable offset");
_Static_assert(offsetof(EPROCESS, InvertedFunctionTableLock) == 1488, "EPROCESS.InvertedFunctionTableLock offset");
_Static_assert(offsetof(EPROCESS, ActiveThreadsHighWatermark) == 1496, "EPROCESS.ActiveThreadsHighWatermark offset");
_Static_assert(offsetof(EPROCESS, LargePrivateVadCount) == 1500, "EPROCESS.LargePrivateVadCount offset");
_Static_assert(offsetof(EPROCESS, ThreadListLock) == 1504, "EPROCESS.ThreadListLock offset");
_Static_assert(offsetof(EPROCESS, WnfContext) == 1512, "EPROCESS.WnfContext offset");
_Static_assert(offsetof(EPROCESS, ServerSilo) == 1520, "EPROCESS.ServerSilo offset");
_Static_assert(offsetof(EPROCESS, SignatureLevel) == 1528, "EPROCESS.SignatureLevel offset");
_Static_assert(offsetof(EPROCESS, SectionSignatureLevel) == 1529, "EPROCESS.SectionSignatureLevel offset");
_Static_assert(offsetof(EPROCESS, Protection) == 1530, "EPROCESS.Protection offset");
_Static_assert(offsetof(EPROCESS, _overlay_05FB.HangCount_view.HangCount) == 1531, "EPROCESS._overlay_05FB.HangCount_view.HangCount offset");
_Static_assert(offsetof(EPROCESS, _overlay_05FB.GhostCount_view.GhostCount) == 1531, "EPROCESS._overlay_05FB.GhostCount_view.GhostCount offset");
_Static_assert(offsetof(EPROCESS, _overlay_05FB.PrefilterException_view.PrefilterException) == 1531, "EPROCESS._overlay_05FB.PrefilterException_view.PrefilterException offset");
_Static_assert(offsetof(EPROCESS, _ghidra_field_122) == 1532, "EPROCESS._ghidra_field_122 offset");
_Static_assert(offsetof(EPROCESS, DeviceAsid) == 1536, "EPROCESS.DeviceAsid offset");
_Static_assert(offsetof(EPROCESS, _ghidra_field_124) == 1540, "EPROCESS._ghidra_field_124 offset");
_Static_assert(offsetof(EPROCESS, _ghidra_field_125) == 1541, "EPROCESS._ghidra_field_125 offset");
_Static_assert(offsetof(EPROCESS, _ghidra_field_126) == 1542, "EPROCESS._ghidra_field_126 offset");
_Static_assert(offsetof(EPROCESS, _ghidra_field_127) == 1543, "EPROCESS._ghidra_field_127 offset");
_Static_assert(offsetof(EPROCESS, SvmData) == 1544, "EPROCESS.SvmData offset");
_Static_assert(offsetof(EPROCESS, SvmProcessLock) == 1552, "EPROCESS.SvmProcessLock offset");
_Static_assert(offsetof(EPROCESS, SvmLock) == 1560, "EPROCESS.SvmLock offset");
_Static_assert(offsetof(EPROCESS, SvmProcessDeviceListHead) == 1568, "EPROCESS.SvmProcessDeviceListHead offset");
_Static_assert(offsetof(EPROCESS, LastFreezeInterruptTime) == 1584, "EPROCESS.LastFreezeInterruptTime offset");
_Static_assert(offsetof(EPROCESS, DiskCounters) == 1592, "EPROCESS.DiskCounters offset");
_Static_assert(offsetof(EPROCESS, PicoContext) == 1600, "EPROCESS.PicoContext offset");
_Static_assert(offsetof(EPROCESS, EnclaveTable) == 1608, "EPROCESS.EnclaveTable offset");
_Static_assert(offsetof(EPROCESS, EnclaveNumber) == 1616, "EPROCESS.EnclaveNumber offset");
_Static_assert(offsetof(EPROCESS, EnclaveLock) == 1624, "EPROCESS.EnclaveLock offset");
_Static_assert(offsetof(EPROCESS, HighPriorityFaultsAllowed) == 1632, "EPROCESS.HighPriorityFaultsAllowed offset");
_Static_assert(offsetof(EPROCESS, _ghidra_field_139) == 1636, "EPROCESS._ghidra_field_139 offset");
_Static_assert(offsetof(EPROCESS, _ghidra_field_140) == 1637, "EPROCESS._ghidra_field_140 offset");
_Static_assert(offsetof(EPROCESS, _ghidra_field_141) == 1638, "EPROCESS._ghidra_field_141 offset");
_Static_assert(offsetof(EPROCESS, _ghidra_field_142) == 1639, "EPROCESS._ghidra_field_142 offset");
_Static_assert(offsetof(EPROCESS, EnergyContext) == 1640, "EPROCESS.EnergyContext offset");
_Static_assert(offsetof(EPROCESS, VmContext) == 1648, "EPROCESS.VmContext offset");
_Static_assert(offsetof(EPROCESS, SequenceNumber) == 1656, "EPROCESS.SequenceNumber offset");
_Static_assert(offsetof(EPROCESS, CreateInterruptTime) == 1664, "EPROCESS.CreateInterruptTime offset");
_Static_assert(offsetof(EPROCESS, CreateUnbiasedInterruptTime) == 1672, "EPROCESS.CreateUnbiasedInterruptTime offset");
_Static_assert(offsetof(EPROCESS, TotalUnbiasedFrozenTime) == 1680, "EPROCESS.TotalUnbiasedFrozenTime offset");
_Static_assert(offsetof(EPROCESS, LastAppStateUpdateTime) == 1688, "EPROCESS.LastAppStateUpdateTime offset");
_Static_assert(offsetof(EPROCESS, _overlay_06A0.LastAppStateUptime_view.LastAppStateUptime) == 1696, "EPROCESS._overlay_06A0.LastAppStateUptime_view.LastAppStateUptime offset");
_Static_assert(offsetof(EPROCESS, _overlay_06A0.LastAppState_view.LastAppState) == 1703, "EPROCESS._overlay_06A0.LastAppState_view.LastAppState offset");
_Static_assert(offsetof(EPROCESS, SharedCommitCharge) == 1704, "EPROCESS.SharedCommitCharge offset");
_Static_assert(offsetof(EPROCESS, SharedCommitLock) == 1712, "EPROCESS.SharedCommitLock offset");
_Static_assert(offsetof(EPROCESS, SharedCommitLinks) == 1720, "EPROCESS.SharedCommitLinks offset");
_Static_assert(offsetof(EPROCESS, _ghidra_field_155) == 1736, "EPROCESS._ghidra_field_155 offset");
_Static_assert(offsetof(EPROCESS, DiskIoAttribution) == 1752, "EPROCESS.DiskIoAttribution offset");
_Static_assert(offsetof(EPROCESS, DxgProcess) == 1760, "EPROCESS.DxgProcess offset");
_Static_assert(offsetof(EPROCESS, Win32KFilterSet) == 1768, "EPROCESS.Win32KFilterSet offset");
_Static_assert(offsetof(EPROCESS, Machine) == 1772, "EPROCESS.Machine offset");
_Static_assert(offsetof(EPROCESS, MmSlabIdentity) == 1774, "EPROCESS.MmSlabIdentity offset");
_Static_assert(offsetof(EPROCESS, Spare0) == 1775, "EPROCESS.Spare0 offset");
_Static_assert(offsetof(EPROCESS, ProcessTimerDelay) == 1776, "EPROCESS.ProcessTimerDelay offset");
_Static_assert(offsetof(EPROCESS, KTimerSets) == 1784, "EPROCESS.KTimerSets offset");
_Static_assert(offsetof(EPROCESS, KTimer2Sets) == 1788, "EPROCESS.KTimer2Sets offset");
_Static_assert(offsetof(EPROCESS, ThreadTimerSets) == 1792, "EPROCESS.ThreadTimerSets offset");
_Static_assert(offsetof(EPROCESS, _ghidra_field_166) == 1796, "EPROCESS._ghidra_field_166 offset");
_Static_assert(offsetof(EPROCESS, _ghidra_field_167) == 1797, "EPROCESS._ghidra_field_167 offset");
_Static_assert(offsetof(EPROCESS, _ghidra_field_168) == 1798, "EPROCESS._ghidra_field_168 offset");
_Static_assert(offsetof(EPROCESS, _ghidra_field_169) == 1799, "EPROCESS._ghidra_field_169 offset");
_Static_assert(offsetof(EPROCESS, VirtualTimerListLock) == 1800, "EPROCESS.VirtualTimerListLock offset");
_Static_assert(offsetof(EPROCESS, VirtualTimerListHead) == 1808, "EPROCESS.VirtualTimerListHead offset");
_Static_assert(offsetof(EPROCESS, _ghidra_field_172) == 1824, "EPROCESS._ghidra_field_172 offset");
_Static_assert(offsetof(EPROCESS, _ghidra_field_173) == 1872, "EPROCESS._ghidra_field_173 offset");
_Static_assert(offsetof(EPROCESS, _ghidra_field_174) == 1876, "EPROCESS._ghidra_field_174 offset");
_Static_assert(offsetof(EPROCESS, PartitionObject) == 1880, "EPROCESS.PartitionObject offset");
_Static_assert(offsetof(EPROCESS, SecurityDomain) == 1888, "EPROCESS.SecurityDomain offset");
_Static_assert(offsetof(EPROCESS, ParentSecurityDomain) == 1896, "EPROCESS.ParentSecurityDomain offset");
_Static_assert(offsetof(EPROCESS, CoverageSamplerContext) == 1904, "EPROCESS.CoverageSamplerContext offset");
_Static_assert(offsetof(EPROCESS, MmHotPatchContext) == 1912, "EPROCESS.MmHotPatchContext offset");
_Static_assert(offsetof(EPROCESS, DynamicEHContinuationTargetsTree) == 1920, "EPROCESS.DynamicEHContinuationTargetsTree offset");
_Static_assert(offsetof(EPROCESS, DynamicEHContinuationTargetsLock) == 1928, "EPROCESS.DynamicEHContinuationTargetsLock offset");
_Static_assert(offsetof(EPROCESS, DynamicEnforcedCetCompatibleRanges) == 1936, "EPROCESS.DynamicEnforcedCetCompatibleRanges offset");
_Static_assert(offsetof(EPROCESS, DisabledComponentFlags) == 1952, "EPROCESS.DisabledComponentFlags offset");
_Static_assert(offsetof(EPROCESS, PageCombineSequence) == 1956, "EPROCESS.PageCombineSequence offset");
_Static_assert(offsetof(EPROCESS, EnableOptionalXStateFeaturesLock) == 1960, "EPROCESS.EnableOptionalXStateFeaturesLock offset");
_Static_assert(offsetof(EPROCESS, PathRedirectionHashes) == 1968, "EPROCESS.PathRedirectionHashes offset");
_Static_assert(offsetof(EPROCESS, SyscallProvider) == 1976, "EPROCESS.SyscallProvider offset");
_Static_assert(offsetof(EPROCESS, SyscallProviderProcessLinks) == 1984, "EPROCESS.SyscallProviderProcessLinks offset");
_Static_assert(offsetof(EPROCESS, SyscallProviderDispatchContext) == 2000, "EPROCESS.SyscallProviderDispatchContext offset");
_Static_assert(offsetof(EPROCESS, _ghidra_field_190) == 2008, "EPROCESS._ghidra_field_190 offset");
_Static_assert(offsetof(EPROCESS, _ghidra_field_191) == 2012, "EPROCESS._ghidra_field_191 offset");
_Static_assert(offsetof(EPROCESS, _ghidra_field_192) == 2016, "EPROCESS._ghidra_field_192 offset");
_Static_assert(offsetof(EPROCESS, SupervisorDeviceAsid) == 2020, "EPROCESS.SupervisorDeviceAsid offset");
_Static_assert(offsetof(EPROCESS, SupervisorSvmData) == 2024, "EPROCESS.SupervisorSvmData offset");
_Static_assert(offsetof(EPROCESS, NetworkCounters) == 2032, "EPROCESS.NetworkCounters offset");
_Static_assert(offsetof(EPROCESS, Execution) == 2040, "EPROCESS.Execution offset");
_Static_assert(offsetof(EPROCESS, _ghidra_field_197) == 2044, "EPROCESS._ghidra_field_197 offset");
_Static_assert(offsetof(EPROCESS, _ghidra_field_198) == 2045, "EPROCESS._ghidra_field_198 offset");
_Static_assert(offsetof(EPROCESS, _ghidra_field_199) == 2046, "EPROCESS._ghidra_field_199 offset");
_Static_assert(offsetof(EPROCESS, _ghidra_field_200) == 2047, "EPROCESS._ghidra_field_200 offset");
_Static_assert(offsetof(EPROCESS, ThreadIndexTable) == 2048, "EPROCESS.ThreadIndexTable offset");
_Static_assert(offsetof(EPROCESS, FreezeWorkLinks) == 2056, "EPROCESS.FreezeWorkLinks offset");
_Static_assert(offsetof(EPROCESS, PpmPolicyLock) == 2072, "EPROCESS.PpmPolicyLock offset");
_Static_assert(offsetof(EPROCESS, BamPpmPolicy) == 2080, "EPROCESS.BamPpmPolicy offset");
_Static_assert(offsetof(EPROCESS, _ghidra_field_205) == 2084, "EPROCESS._ghidra_field_205 offset");
_Static_assert(offsetof(EPROCESS, _ghidra_field_206) == 2085, "EPROCESS._ghidra_field_206 offset");
_Static_assert(offsetof(EPROCESS, _ghidra_field_207) == 2086, "EPROCESS._ghidra_field_207 offset");
_Static_assert(offsetof(EPROCESS, _ghidra_field_208) == 2087, "EPROCESS._ghidra_field_208 offset");
_Static_assert(offsetof(EPROCESS, ProcessQosCallbackListEntry) == 2088, "EPROCESS.ProcessQosCallbackListEntry offset");
_Static_assert(offsetof(EPROCESS, _ghidra_field_210) == 2096, "EPROCESS._ghidra_field_210 offset");
_Static_assert(offsetof(EPROCESS, _ghidra_field_211) == 2097, "EPROCESS._ghidra_field_211 offset");
_Static_assert(offsetof(EPROCESS, _ghidra_field_212) == 2098, "EPROCESS._ghidra_field_212 offset");
_Static_assert(offsetof(EPROCESS, _ghidra_field_213) == 2099, "EPROCESS._ghidra_field_213 offset");
_Static_assert(offsetof(EPROCESS, _ghidra_field_214) == 2100, "EPROCESS._ghidra_field_214 offset");
_Static_assert(offsetof(EPROCESS, _ghidra_field_215) == 2101, "EPROCESS._ghidra_field_215 offset");
_Static_assert(offsetof(EPROCESS, _ghidra_field_216) == 2102, "EPROCESS._ghidra_field_216 offset");
_Static_assert(offsetof(EPROCESS, _ghidra_field_217) == 2103, "EPROCESS._ghidra_field_217 offset");
_Static_assert(offsetof(EPROCESS, _ghidra_field_218) == 2104, "EPROCESS._ghidra_field_218 offset");
_Static_assert(offsetof(EPROCESS, _ghidra_field_219) == 2105, "EPROCESS._ghidra_field_219 offset");
_Static_assert(offsetof(EPROCESS, _ghidra_field_220) == 2106, "EPROCESS._ghidra_field_220 offset");
_Static_assert(offsetof(EPROCESS, _ghidra_field_221) == 2107, "EPROCESS._ghidra_field_221 offset");
_Static_assert(offsetof(EPROCESS, _ghidra_field_222) == 2108, "EPROCESS._ghidra_field_222 offset");
_Static_assert(offsetof(EPROCESS, _ghidra_field_223) == 2109, "EPROCESS._ghidra_field_223 offset");
_Static_assert(offsetof(EPROCESS, _ghidra_field_224) == 2110, "EPROCESS._ghidra_field_224 offset");
_Static_assert(offsetof(EPROCESS, _ghidra_field_225) == 2111, "EPROCESS._ghidra_field_225 offset");

typedef struct ETHREAD {
    KTHREAD Tcb; /* +0x0000; Ghidra=_KTHREAD; validated_embedded_priority_type */
    uint8_t CreateTime[8]; /* +0x04C0; Ghidra=_LARGE_INTEGER; opaque_unresolved_type */
    uint8_t _ghidra_field_2[16]; /* +0x04C8; Ghidra=_ETHREAD_u_1224; opaque_unresolved_type */
    uint8_t _ghidra_field_3[16]; /* +0x04D8; Ghidra=_ETHREAD_u_1240; opaque_unresolved_type */
    uint8_t _ghidra_field_4[8]; /* +0x04E8; Ghidra=_ETHREAD_u_1256; opaque_unresolved_type */
    uint64_t ActiveTimerListLock; /* +0x04F0; Ghidra=ulong64; primitive */
    uint8_t ActiveTimerListHead[16]; /* +0x04F8; Ghidra=_LIST_ENTRY; opaque_unresolved_type */
    uint8_t Cid[16]; /* +0x0508; Ghidra=_CLIENT_ID; opaque_unresolved_type */
    uint8_t _ghidra_field_8[32]; /* +0x0518; Ghidra=_ETHREAD_u_1304; opaque_unresolved_type */
    uint8_t ClientSecurity[8]; /* +0x0538; Ghidra=_PS_CLIENT_SECURITY_CONTEXT; opaque_unresolved_type */
    uint8_t IrpList[16]; /* +0x0540; Ghidra=_LIST_ENTRY; opaque_unresolved_type */
    uint64_t TopLevelIrp; /* +0x0550; Ghidra=ulong64; primitive */
    uintptr_t DeviceToVerify; /* +0x0558; Ghidra=_DEVICE_OBJECT *; pointer_as_64bit_address */
    uintptr_t Win32StartAddress; /* +0x0560; Ghidra=void *; pointer_as_64bit_address */
    uintptr_t ChargeOnlySession; /* +0x0568; Ghidra=void *; pointer_as_64bit_address */
    uintptr_t LegacyPowerObject; /* +0x0570; Ghidra=void *; pointer_as_64bit_address */
    uint8_t ThreadListEntry[16]; /* +0x0578; Ghidra=_LIST_ENTRY; opaque_unresolved_type */
    uint8_t RundownProtect[8]; /* +0x0588; Ghidra=_EX_RUNDOWN_REF; opaque_unresolved_type */
    uint8_t ThreadLock[8]; /* +0x0590; Ghidra=_EX_PUSH_LOCK; opaque_unresolved_type */
    uint32_t ReadClusterSize; /* +0x0598; Ghidra=ulong; primitive */
    uint32_t MmLockOrdering; /* +0x059C; Ghidra=ulong; primitive */
    uint8_t _ghidra_field_21[4]; /* +0x05A0; Ghidra=_ETHREAD_u_1440; opaque_unresolved_type */
    uint8_t _ghidra_field_22[4]; /* +0x05A4; Ghidra=_ETHREAD_u_1444; opaque_unresolved_type */
    uint8_t _ghidra_field_23[4]; /* +0x05A8; Ghidra=_ETHREAD_u_1448; opaque_unresolved_type */
    uint8_t CacheManagerActive; /* +0x05AC; Ghidra=uchar; primitive */
    uint8_t DisablePageFaultClustering; /* +0x05AD; Ghidra=uchar; primitive */
    uint8_t ActiveFaultCount; /* +0x05AE; Ghidra=uchar; primitive */
    uint8_t LockOrderState; /* +0x05AF; Ghidra=uchar; primitive */
    uint32_t SharedPsModuleLockAcquires; /* +0x05B0; Ghidra=ulong; primitive */
    uint32_t MmReserved; /* +0x05B4; Ghidra=ulong; primitive */
    uint64_t AlpcMessageId; /* +0x05B8; Ghidra=ulong64; primitive */
    uint8_t _ghidra_field_31[8]; /* +0x05C0; Ghidra=_ETHREAD_u_1472; opaque_unresolved_type */
    uint8_t AlpcWaitListEntry[16]; /* +0x05C8; Ghidra=_LIST_ENTRY; opaque_unresolved_type */
    int32_t ExitStatus; /* +0x05D8; Ghidra=long; primitive */
    uint32_t CacheManagerCount; /* +0x05DC; Ghidra=ulong; primitive */
    uint32_t IoBoostCount; /* +0x05E0; Ghidra=ulong; primitive */
    uint32_t IoQoSBoostCount; /* +0x05E4; Ghidra=ulong; primitive */
    uint32_t IoQoSThrottleCount; /* +0x05E8; Ghidra=ulong; primitive */
    uint32_t KernelStackReference; /* +0x05EC; Ghidra=ulong; primitive */
    uint8_t BoostList[16]; /* +0x05F0; Ghidra=_LIST_ENTRY; opaque_unresolved_type */
    uint8_t DeboostList[16]; /* +0x0600; Ghidra=_LIST_ENTRY; opaque_unresolved_type */
    uint64_t BoostListLock; /* +0x0610; Ghidra=ulong64; primitive */
    uint64_t IrpListLock; /* +0x0618; Ghidra=ulong64; primitive */
    uintptr_t ReservedForSynchTracking; /* +0x0620; Ghidra=void *; pointer_as_64bit_address */
    uint8_t CmCallbackListHead[8]; /* +0x0628; Ghidra=_SINGLE_LIST_ENTRY; opaque_unresolved_type */
    uintptr_t ActivityId; /* +0x0630; Ghidra=_GUID *; pointer_as_64bit_address */
    uint8_t SeLearningModeListHead[8]; /* +0x0638; Ghidra=_SINGLE_LIST_ENTRY; opaque_unresolved_type */
    uintptr_t VerifierContext; /* +0x0640; Ghidra=void *; pointer_as_64bit_address */
    uintptr_t AdjustedClientToken; /* +0x0648; Ghidra=void *; pointer_as_64bit_address */
    uintptr_t WorkOnBehalfThread; /* +0x0650; Ghidra=void *; pointer_as_64bit_address */
    uint8_t PropertySet[24]; /* +0x0658; Ghidra=_PS_PROPERTY_SET; opaque_unresolved_type */
    uintptr_t PicoContext; /* +0x0670; Ghidra=void *; pointer_as_64bit_address */
    uint64_t UserFsBase; /* +0x0678; Ghidra=ulong64; primitive */
    uint64_t UserGsBase; /* +0x0680; Ghidra=ulong64; primitive */
    uintptr_t EnergyValues; /* +0x0688; Ghidra=_THREAD_ENERGY_VALUES *; pointer_as_64bit_address */
    uint8_t _ghidra_field_55[8]; /* +0x0690; Ghidra=_ETHREAD_u_1680; opaque_unresolved_type */
    uintptr_t Silo; /* +0x0698; Ghidra=_EJOB *; pointer_as_64bit_address */
    uintptr_t ThreadName; /* +0x06A0; Ghidra=_UNICODE_STRING *; pointer_as_64bit_address */
    uintptr_t SetContextState; /* +0x06A8; Ghidra=_CONTEXT *; pointer_as_64bit_address */
    uintptr_t EtwSupport; /* +0x06B0; Ghidra=void *; pointer_as_64bit_address */
    uint8_t OwnerEntryListHead[16]; /* +0x06B8; Ghidra=_LIST_ENTRY; opaque_unresolved_type */
    uint64_t DisownedOwnerEntryListLock; /* +0x06C8; Ghidra=ulong64; primitive */
    uint8_t DisownedOwnerEntryListHead[16]; /* +0x06D0; Ghidra=_LIST_ENTRY; opaque_unresolved_type */
    uintptr_t SchedulerSharedDataObject; /* +0x06E0; Ghidra=void *; pointer_as_64bit_address */
    uintptr_t CmThreadInfo; /* +0x06E8; Ghidra=void *; pointer_as_64bit_address */
    uintptr_t FlsData; /* +0x06F0; Ghidra=void *; pointer_as_64bit_address */
    uint32_t LastExpectedRunTime; /* +0x06F8; Ghidra=ulong; primitive */
    uint32_t LastSoftParkElectionRunTime; /* +0x06FC; Ghidra=ulong; primitive */
    uint64_t LastSoftParkElectionGeneration; /* +0x0700; Ghidra=ulong64; primitive */
    uint8_t LastSoftParkElectionGroupAffinity[16]; /* +0x0708; Ghidra=_GROUP_AFFINITY; opaque_unresolved_type */
    uint64_t UserIsolationDomain; /* +0x0718; Ghidra=ulong64; primitive */
    uint8_t _ghidra_field_71[88]; /* +0x0720; Ghidra=_ETHREAD_u_1824; opaque_unresolved_type */
    uint64_t Win32kThreadLock; /* +0x0778; Ghidra=ulong64; primitive */
    uintptr_t ThreadIndex; /* +0x0780; Ghidra=void *; pointer_as_64bit_address */
    uintptr_t MmFaultClusterContext; /* +0x0788; Ghidra=void *; pointer_as_64bit_address */
    uint8_t ProcessFastRef[8]; /* +0x0790; Ghidra=_EX_FAST_REF; opaque_unresolved_type */
} ETHREAD;
_Static_assert(sizeof(ETHREAD) == 1944, "ETHREAD size");
_Static_assert(offsetof(ETHREAD, Tcb) == 0, "ETHREAD.Tcb offset");
_Static_assert(offsetof(ETHREAD, CreateTime) == 1216, "ETHREAD.CreateTime offset");
_Static_assert(offsetof(ETHREAD, _ghidra_field_2) == 1224, "ETHREAD._ghidra_field_2 offset");
_Static_assert(offsetof(ETHREAD, _ghidra_field_3) == 1240, "ETHREAD._ghidra_field_3 offset");
_Static_assert(offsetof(ETHREAD, _ghidra_field_4) == 1256, "ETHREAD._ghidra_field_4 offset");
_Static_assert(offsetof(ETHREAD, ActiveTimerListLock) == 1264, "ETHREAD.ActiveTimerListLock offset");
_Static_assert(offsetof(ETHREAD, ActiveTimerListHead) == 1272, "ETHREAD.ActiveTimerListHead offset");
_Static_assert(offsetof(ETHREAD, Cid) == 1288, "ETHREAD.Cid offset");
_Static_assert(offsetof(ETHREAD, _ghidra_field_8) == 1304, "ETHREAD._ghidra_field_8 offset");
_Static_assert(offsetof(ETHREAD, ClientSecurity) == 1336, "ETHREAD.ClientSecurity offset");
_Static_assert(offsetof(ETHREAD, IrpList) == 1344, "ETHREAD.IrpList offset");
_Static_assert(offsetof(ETHREAD, TopLevelIrp) == 1360, "ETHREAD.TopLevelIrp offset");
_Static_assert(offsetof(ETHREAD, DeviceToVerify) == 1368, "ETHREAD.DeviceToVerify offset");
_Static_assert(offsetof(ETHREAD, Win32StartAddress) == 1376, "ETHREAD.Win32StartAddress offset");
_Static_assert(offsetof(ETHREAD, ChargeOnlySession) == 1384, "ETHREAD.ChargeOnlySession offset");
_Static_assert(offsetof(ETHREAD, LegacyPowerObject) == 1392, "ETHREAD.LegacyPowerObject offset");
_Static_assert(offsetof(ETHREAD, ThreadListEntry) == 1400, "ETHREAD.ThreadListEntry offset");
_Static_assert(offsetof(ETHREAD, RundownProtect) == 1416, "ETHREAD.RundownProtect offset");
_Static_assert(offsetof(ETHREAD, ThreadLock) == 1424, "ETHREAD.ThreadLock offset");
_Static_assert(offsetof(ETHREAD, ReadClusterSize) == 1432, "ETHREAD.ReadClusterSize offset");
_Static_assert(offsetof(ETHREAD, MmLockOrdering) == 1436, "ETHREAD.MmLockOrdering offset");
_Static_assert(offsetof(ETHREAD, _ghidra_field_21) == 1440, "ETHREAD._ghidra_field_21 offset");
_Static_assert(offsetof(ETHREAD, _ghidra_field_22) == 1444, "ETHREAD._ghidra_field_22 offset");
_Static_assert(offsetof(ETHREAD, _ghidra_field_23) == 1448, "ETHREAD._ghidra_field_23 offset");
_Static_assert(offsetof(ETHREAD, CacheManagerActive) == 1452, "ETHREAD.CacheManagerActive offset");
_Static_assert(offsetof(ETHREAD, DisablePageFaultClustering) == 1453, "ETHREAD.DisablePageFaultClustering offset");
_Static_assert(offsetof(ETHREAD, ActiveFaultCount) == 1454, "ETHREAD.ActiveFaultCount offset");
_Static_assert(offsetof(ETHREAD, LockOrderState) == 1455, "ETHREAD.LockOrderState offset");
_Static_assert(offsetof(ETHREAD, SharedPsModuleLockAcquires) == 1456, "ETHREAD.SharedPsModuleLockAcquires offset");
_Static_assert(offsetof(ETHREAD, MmReserved) == 1460, "ETHREAD.MmReserved offset");
_Static_assert(offsetof(ETHREAD, AlpcMessageId) == 1464, "ETHREAD.AlpcMessageId offset");
_Static_assert(offsetof(ETHREAD, _ghidra_field_31) == 1472, "ETHREAD._ghidra_field_31 offset");
_Static_assert(offsetof(ETHREAD, AlpcWaitListEntry) == 1480, "ETHREAD.AlpcWaitListEntry offset");
_Static_assert(offsetof(ETHREAD, ExitStatus) == 1496, "ETHREAD.ExitStatus offset");
_Static_assert(offsetof(ETHREAD, CacheManagerCount) == 1500, "ETHREAD.CacheManagerCount offset");
_Static_assert(offsetof(ETHREAD, IoBoostCount) == 1504, "ETHREAD.IoBoostCount offset");
_Static_assert(offsetof(ETHREAD, IoQoSBoostCount) == 1508, "ETHREAD.IoQoSBoostCount offset");
_Static_assert(offsetof(ETHREAD, IoQoSThrottleCount) == 1512, "ETHREAD.IoQoSThrottleCount offset");
_Static_assert(offsetof(ETHREAD, KernelStackReference) == 1516, "ETHREAD.KernelStackReference offset");
_Static_assert(offsetof(ETHREAD, BoostList) == 1520, "ETHREAD.BoostList offset");
_Static_assert(offsetof(ETHREAD, DeboostList) == 1536, "ETHREAD.DeboostList offset");
_Static_assert(offsetof(ETHREAD, BoostListLock) == 1552, "ETHREAD.BoostListLock offset");
_Static_assert(offsetof(ETHREAD, IrpListLock) == 1560, "ETHREAD.IrpListLock offset");
_Static_assert(offsetof(ETHREAD, ReservedForSynchTracking) == 1568, "ETHREAD.ReservedForSynchTracking offset");
_Static_assert(offsetof(ETHREAD, CmCallbackListHead) == 1576, "ETHREAD.CmCallbackListHead offset");
_Static_assert(offsetof(ETHREAD, ActivityId) == 1584, "ETHREAD.ActivityId offset");
_Static_assert(offsetof(ETHREAD, SeLearningModeListHead) == 1592, "ETHREAD.SeLearningModeListHead offset");
_Static_assert(offsetof(ETHREAD, VerifierContext) == 1600, "ETHREAD.VerifierContext offset");
_Static_assert(offsetof(ETHREAD, AdjustedClientToken) == 1608, "ETHREAD.AdjustedClientToken offset");
_Static_assert(offsetof(ETHREAD, WorkOnBehalfThread) == 1616, "ETHREAD.WorkOnBehalfThread offset");
_Static_assert(offsetof(ETHREAD, PropertySet) == 1624, "ETHREAD.PropertySet offset");
_Static_assert(offsetof(ETHREAD, PicoContext) == 1648, "ETHREAD.PicoContext offset");
_Static_assert(offsetof(ETHREAD, UserFsBase) == 1656, "ETHREAD.UserFsBase offset");
_Static_assert(offsetof(ETHREAD, UserGsBase) == 1664, "ETHREAD.UserGsBase offset");
_Static_assert(offsetof(ETHREAD, EnergyValues) == 1672, "ETHREAD.EnergyValues offset");
_Static_assert(offsetof(ETHREAD, _ghidra_field_55) == 1680, "ETHREAD._ghidra_field_55 offset");
_Static_assert(offsetof(ETHREAD, Silo) == 1688, "ETHREAD.Silo offset");
_Static_assert(offsetof(ETHREAD, ThreadName) == 1696, "ETHREAD.ThreadName offset");
_Static_assert(offsetof(ETHREAD, SetContextState) == 1704, "ETHREAD.SetContextState offset");
_Static_assert(offsetof(ETHREAD, EtwSupport) == 1712, "ETHREAD.EtwSupport offset");
_Static_assert(offsetof(ETHREAD, OwnerEntryListHead) == 1720, "ETHREAD.OwnerEntryListHead offset");
_Static_assert(offsetof(ETHREAD, DisownedOwnerEntryListLock) == 1736, "ETHREAD.DisownedOwnerEntryListLock offset");
_Static_assert(offsetof(ETHREAD, DisownedOwnerEntryListHead) == 1744, "ETHREAD.DisownedOwnerEntryListHead offset");
_Static_assert(offsetof(ETHREAD, SchedulerSharedDataObject) == 1760, "ETHREAD.SchedulerSharedDataObject offset");
_Static_assert(offsetof(ETHREAD, CmThreadInfo) == 1768, "ETHREAD.CmThreadInfo offset");
_Static_assert(offsetof(ETHREAD, FlsData) == 1776, "ETHREAD.FlsData offset");
_Static_assert(offsetof(ETHREAD, LastExpectedRunTime) == 1784, "ETHREAD.LastExpectedRunTime offset");
_Static_assert(offsetof(ETHREAD, LastSoftParkElectionRunTime) == 1788, "ETHREAD.LastSoftParkElectionRunTime offset");
_Static_assert(offsetof(ETHREAD, LastSoftParkElectionGeneration) == 1792, "ETHREAD.LastSoftParkElectionGeneration offset");
_Static_assert(offsetof(ETHREAD, LastSoftParkElectionGroupAffinity) == 1800, "ETHREAD.LastSoftParkElectionGroupAffinity offset");
_Static_assert(offsetof(ETHREAD, UserIsolationDomain) == 1816, "ETHREAD.UserIsolationDomain offset");
_Static_assert(offsetof(ETHREAD, _ghidra_field_71) == 1824, "ETHREAD._ghidra_field_71 offset");
_Static_assert(offsetof(ETHREAD, Win32kThreadLock) == 1912, "ETHREAD.Win32kThreadLock offset");
_Static_assert(offsetof(ETHREAD, ThreadIndex) == 1920, "ETHREAD.ThreadIndex offset");
_Static_assert(offsetof(ETHREAD, MmFaultClusterContext) == 1928, "ETHREAD.MmFaultClusterContext offset");
_Static_assert(offsetof(ETHREAD, ProcessFastRef) == 1936, "ETHREAD.ProcessFastRef offset");

#pragma pack(pop)

#endif
