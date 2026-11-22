#ifndef WRK_RECON_KPROCESS_H
#define WRK_RECON_KPROCESS_H

#include <stdint.h>

/* Layout x64 extraido do inventario Ghidra: _KPROCESS.
 * Tamanho total confirmado: 456 bytes; campos inventariados: 53.
 * O armazenamento e opaco nesta etapa: tipos aninhados, unioes e bitfields
 * nao sao reinterpretados como C ate serem validados individualmente.
 */
typedef struct _KPROCESS {
    uint8_t _storage[456];
} KPROCESS, *PKPROCESS;

#define KPROCESS_SIZE 456u
/* Campo 0: Header | tipo Ghidra: _DISPATCHER_HEADER | tamanho: 24 */
#define KPROCESS_OFFSET_HEADER 0u
#define KPROCESS_FIELD_SIZE_HEADER 24u
/* Campo 1: ProfileListHead | tipo Ghidra: _LIST_ENTRY | tamanho: 16 */
#define KPROCESS_OFFSET_PROFILELISTHEAD 24u
#define KPROCESS_FIELD_SIZE_PROFILELISTHEAD 16u
/* Campo 2: DirectoryTableBase | tipo Ghidra: ulong64 | tamanho: 8 */
#define KPROCESS_OFFSET_DIRECTORYTABLEBASE 40u
#define KPROCESS_FIELD_SIZE_DIRECTORYTABLEBASE 8u
/* Campo 3: ThreadListHead | tipo Ghidra: _LIST_ENTRY | tamanho: 16 */
#define KPROCESS_OFFSET_THREADLISTHEAD 48u
#define KPROCESS_FIELD_SIZE_THREADLISTHEAD 16u
/* Campo 4: ProcessLock | tipo Ghidra: ulong | tamanho: 4 */
#define KPROCESS_OFFSET_PROCESSLOCK 64u
#define KPROCESS_FIELD_SIZE_PROCESSLOCK 4u
/* Campo 5: ProcessTimerDelay | tipo Ghidra: ulong | tamanho: 4 */
#define KPROCESS_OFFSET_PROCESSTIMERDELAY 68u
#define KPROCESS_FIELD_SIZE_PROCESSTIMERDELAY 4u
/* Campo 6: DeepFreezeStartTime | tipo Ghidra: ulong64 | tamanho: 8 */
#define KPROCESS_OFFSET_DEEPFREEZESTARTTIME 72u
#define KPROCESS_FIELD_SIZE_DEEPFREEZESTARTTIME 8u
/* Campo 7: Affinity | tipo Ghidra: _KAFFINITY_EX * | tamanho: 8 */
#define KPROCESS_OFFSET_AFFINITY 80u
#define KPROCESS_FIELD_SIZE_AFFINITY 8u
/* Campo 8: AutoBoostState | tipo Ghidra: _KAB_UM_PROCESS_CONTEXT | tamanho: 16 */
#define KPROCESS_OFFSET_AUTOBOOSTSTATE 88u
#define KPROCESS_FIELD_SIZE_AUTOBOOSTSTATE 16u
/* Campo 9: ReadyListHead | tipo Ghidra: _LIST_ENTRY | tamanho: 16 */
#define KPROCESS_OFFSET_READYLISTHEAD 104u
#define KPROCESS_FIELD_SIZE_READYLISTHEAD 16u
/* Campo 10: SwapListEntry | tipo Ghidra: _SINGLE_LIST_ENTRY | tamanho: 8 */
#define KPROCESS_OFFSET_SWAPLISTENTRY 120u
#define KPROCESS_FIELD_SIZE_SWAPLISTENTRY 8u
/* Campo 11: ActiveProcessors | tipo Ghidra: _KAFFINITY_EX * | tamanho: 8 */
#define KPROCESS_OFFSET_ACTIVEPROCESSORS 128u
#define KPROCESS_FIELD_SIZE_ACTIVEPROCESSORS 8u
/* Campo 13: Spare0c | tipo Ghidra: ulong | tamanho: 4 */
#define KPROCESS_OFFSET_SPARE0C 140u
#define KPROCESS_FIELD_SIZE_SPARE0C 4u
/* Campo 14: BasePriority | tipo Ghidra: char | tamanho: 1 */
#define KPROCESS_OFFSET_BASEPRIORITY 144u
#define KPROCESS_FIELD_SIZE_BASEPRIORITY 1u
/* Campo 15: QuantumReset | tipo Ghidra: char | tamanho: 1 */
#define KPROCESS_OFFSET_QUANTUMRESET 145u
#define KPROCESS_FIELD_SIZE_QUANTUMRESET 1u
/* Campo 16: Visited | tipo Ghidra: char | tamanho: 1 */
#define KPROCESS_OFFSET_VISITED 146u
#define KPROCESS_FIELD_SIZE_VISITED 1u
/* Campo 17: Flags | tipo Ghidra: _KEXECUTE_OPTIONS | tamanho: 1 */
#define KPROCESS_OFFSET_FLAGS 147u
#define KPROCESS_FIELD_SIZE_FLAGS 1u
/* Campo 18: ActiveGroupsMask | tipo Ghidra: _KGROUP_MASK | tamanho: 16 */
#define KPROCESS_OFFSET_ACTIVEGROUPSMASK 152u
#define KPROCESS_FIELD_SIZE_ACTIVEGROUPSMASK 16u
/* Campo 19: ActiveGroupPadding | tipo Ghidra: ulong64[2] | tamanho: 16 */
#define KPROCESS_OFFSET_ACTIVEGROUPPADDING 168u
#define KPROCESS_FIELD_SIZE_ACTIVEGROUPPADDING 16u
/* Campo 20: IdealProcessorAssignmentBlock | tipo Ghidra: _KI_IDEAL_PROCESSOR_ASSIGNMENT_BLOCK * | tamanho: 8 */
#define KPROCESS_OFFSET_IDEALPROCESSORASSIGNMENTBLOCK 184u
#define KPROCESS_FIELD_SIZE_IDEALPROCESSORASSIGNMENTBLOCK 8u
/* Campo 21: Padding | tipo Ghidra: ulong64[6] | tamanho: 48 */
#define KPROCESS_OFFSET_PADDING 192u
#define KPROCESS_FIELD_SIZE_PADDING 48u
/* Campo 22: Padding2 | tipo Ghidra: ulong | tamanho: 4 */
#define KPROCESS_OFFSET_PADDING2 240u
#define KPROCESS_FIELD_SIZE_PADDING2 4u
/* Campo 23: SchedulerAssistYieldBoostCount | tipo Ghidra: ulong | tamanho: 4 */
#define KPROCESS_OFFSET_SCHEDULERASSISTYIELDBOOSTCOUNT 244u
#define KPROCESS_FIELD_SIZE_SCHEDULERASSISTYIELDBOOSTCOUNT 4u
/* Campo 24: SchedulerAssistYieldBoostAllowedTime | tipo Ghidra: long64 | tamanho: 8 */
#define KPROCESS_OFFSET_SCHEDULERASSISTYIELDBOOSTALLOWEDTIME 248u
#define KPROCESS_FIELD_SIZE_SCHEDULERASSISTYIELDBOOSTALLOWEDTIME 8u
/* Campo 25: Spare0d | tipo Ghidra: ulong | tamanho: 4 */
#define KPROCESS_OFFSET_SPARE0D 256u
#define KPROCESS_FIELD_SIZE_SPARE0D 4u
/* Campo 26: IdealGlobalNode | tipo Ghidra: ushort | tamanho: 2 */
#define KPROCESS_OFFSET_IDEALGLOBALNODE 260u
#define KPROCESS_FIELD_SIZE_IDEALGLOBALNODE 2u
/* Campo 27: Spare1 | tipo Ghidra: ushort | tamanho: 2 */
#define KPROCESS_OFFSET_SPARE1 262u
#define KPROCESS_FIELD_SIZE_SPARE1 2u
/* Campo 28: StackCount | tipo Ghidra: _KSTACK_COUNT | tamanho: 4 */
#define KPROCESS_OFFSET_STACKCOUNT 264u
#define KPROCESS_FIELD_SIZE_STACKCOUNT 4u
/* Campo 29: ProcessListEntry | tipo Ghidra: _LIST_ENTRY | tamanho: 16 */
#define KPROCESS_OFFSET_PROCESSLISTENTRY 272u
#define KPROCESS_FIELD_SIZE_PROCESSLISTENTRY 16u
/* Campo 30: CycleTime | tipo Ghidra: ulong64 | tamanho: 8 */
#define KPROCESS_OFFSET_CYCLETIME 288u
#define KPROCESS_FIELD_SIZE_CYCLETIME 8u
/* Campo 31: ContextSwitches | tipo Ghidra: ulong64 | tamanho: 8 */
#define KPROCESS_OFFSET_CONTEXTSWITCHES 296u
#define KPROCESS_FIELD_SIZE_CONTEXTSWITCHES 8u
/* Campo 32: SchedulingGroup | tipo Ghidra: _KSCHEDULING_GROUP * | tamanho: 8 */
#define KPROCESS_OFFSET_SCHEDULINGGROUP 304u
#define KPROCESS_FIELD_SIZE_SCHEDULINGGROUP 8u
/* Campo 33: KernelTime | tipo Ghidra: ulong64 | tamanho: 8 */
#define KPROCESS_OFFSET_KERNELTIME 312u
#define KPROCESS_FIELD_SIZE_KERNELTIME 8u
/* Campo 34: UserTime | tipo Ghidra: ulong64 | tamanho: 8 */
#define KPROCESS_OFFSET_USERTIME 320u
#define KPROCESS_FIELD_SIZE_USERTIME 8u
/* Campo 35: ReadyTime | tipo Ghidra: ulong64 | tamanho: 8 */
#define KPROCESS_OFFSET_READYTIME 328u
#define KPROCESS_FIELD_SIZE_READYTIME 8u
/* Campo 36: FreezeCount | tipo Ghidra: ulong | tamanho: 4 */
#define KPROCESS_OFFSET_FREEZECOUNT 336u
#define KPROCESS_FIELD_SIZE_FREEZECOUNT 4u
/* Campo 37: Spare4 | tipo Ghidra: ulong | tamanho: 4 */
#define KPROCESS_OFFSET_SPARE4 340u
#define KPROCESS_FIELD_SIZE_SPARE4 4u
/* Campo 38: UserDirectoryTableBase | tipo Ghidra: ulong64 | tamanho: 8 */
#define KPROCESS_OFFSET_USERDIRECTORYTABLEBASE 344u
#define KPROCESS_FIELD_SIZE_USERDIRECTORYTABLEBASE 8u
/* Campo 39: AddressPolicy | tipo Ghidra: uchar | tamanho: 1 */
#define KPROCESS_OFFSET_ADDRESSPOLICY 352u
#define KPROCESS_FIELD_SIZE_ADDRESSPOLICY 1u
/* Campo 40: Spare2 | tipo Ghidra: uchar[7] | tamanho: 7 */
#define KPROCESS_OFFSET_SPARE2 353u
#define KPROCESS_FIELD_SIZE_SPARE2 7u
/* Campo 41: InstrumentationCallback | tipo Ghidra: void * | tamanho: 8 */
#define KPROCESS_OFFSET_INSTRUMENTATIONCALLBACK 360u
#define KPROCESS_FIELD_SIZE_INSTRUMENTATIONCALLBACK 8u
/* Campo 42: SecureState | tipo Ghidra: <unnamed-tag_00001B45> | tamanho: 8 */
#define KPROCESS_OFFSET_SECURESTATE 368u
#define KPROCESS_FIELD_SIZE_SECURESTATE 8u
/* Campo 43: KernelWaitTime | tipo Ghidra: ulong64 | tamanho: 8 */
#define KPROCESS_OFFSET_KERNELWAITTIME 376u
#define KPROCESS_FIELD_SIZE_KERNELWAITTIME 8u
/* Campo 44: UserWaitTime | tipo Ghidra: ulong64 | tamanho: 8 */
#define KPROCESS_OFFSET_USERWAITTIME 384u
#define KPROCESS_FIELD_SIZE_USERWAITTIME 8u
/* Campo 45: LastRebalanceQpc | tipo Ghidra: ulong64 | tamanho: 8 */
#define KPROCESS_OFFSET_LASTREBALANCEQPC 392u
#define KPROCESS_FIELD_SIZE_LASTREBALANCEQPC 8u
/* Campo 46: PerProcessorCycleTimes | tipo Ghidra: void * | tamanho: 8 */
#define KPROCESS_OFFSET_PERPROCESSORCYCLETIMES 400u
#define KPROCESS_FIELD_SIZE_PERPROCESSORCYCLETIMES 8u
/* Campo 47: ExtendedFeatureDisableMask | tipo Ghidra: ulong64 | tamanho: 8 */
#define KPROCESS_OFFSET_EXTENDEDFEATUREDISABLEMASK 408u
#define KPROCESS_FIELD_SIZE_EXTENDEDFEATUREDISABLEMASK 8u
/* Campo 48: PrimaryGroup | tipo Ghidra: ushort | tamanho: 2 */
#define KPROCESS_OFFSET_PRIMARYGROUP 416u
#define KPROCESS_FIELD_SIZE_PRIMARYGROUP 2u
/* Campo 49: Spare3 | tipo Ghidra: ushort[3] | tamanho: 6 */
#define KPROCESS_OFFSET_SPARE3 418u
#define KPROCESS_FIELD_SIZE_SPARE3 6u
/* Campo 50: UserCetLogging | tipo Ghidra: void * | tamanho: 8 */
#define KPROCESS_OFFSET_USERCETLOGGING 424u
#define KPROCESS_FIELD_SIZE_USERCETLOGGING 8u
/* Campo 51: CpuPartitionList | tipo Ghidra: _LIST_ENTRY | tamanho: 16 */
#define KPROCESS_OFFSET_CPUPARTITIONLIST 432u
#define KPROCESS_FIELD_SIZE_CPUPARTITIONLIST 16u
/* Campo 52: AvailableCpuState | tipo Ghidra: _KPROCESS_AVAILABLE_CPU_STATE * | tamanho: 8 */
#define KPROCESS_OFFSET_AVAILABLECPUSTATE 448u
#define KPROCESS_FIELD_SIZE_AVAILABLECPUSTATE 8u

#if defined(__cplusplus)
static_assert(sizeof(KPROCESS) == 456, "KPROCESS size mismatch");
#else
_Static_assert(sizeof(KPROCESS) == 456, "KPROCESS size mismatch");
#endif

#endif /* WRK_RECON_KPROCESS_H */
