//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// Subtarget Enumeration Source Fragment
//
// Automatically generated file, do not edit!
//
//===----------------------------------------------------------------------===//

#include "llvm/Support/Debug.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/Target/SubtargetFeature.h"
#include "llvm/Target/TargetInstrItineraries.h"

enum {
  FeatureICPLB =  1 << 0,
  FeatureSDRAM =  1 << 1,
  WA_CSYNC =  1 << 2,
  WA_HWLOOP =  1 << 3,
  WA_IND_CALL =  1 << 4,
  WA_KILLED_MMR =  1 << 5,
  WA_LCREGS =  1 << 6,
  WA_MI_SHIFT =  1 << 7,
  WA_MMR_STALL =  1 << 8,
  WA_RETS =  1 << 9,
  WA_SPECLD =  1 << 10
};

// Sorted (by key) array of values for CPU features.
static const llvm::SubtargetFeatureKV FeatureKV[] = {
  { "csync-anomaly", "Work around 05000244 - If I-Cache Is On, CSYNC/SSYNC/IDLE Around Change of Control", WA_CSYNC, 0 },
  { "hwloop-anomaly", "Work around 05000257 - Interrupt/Exception During Short Hardware Loop", WA_HWLOOP, 0 },
  { "icplb", "Assume instruction cache lookaside buffers are enabled at runtime", FeatureICPLB, 0 },
  { "ind-call-anomaly", "Work around 05000426 - Speculative Fetches of Indirect-Pointer Instructions", WA_IND_CALL, 0 },
  { "killed-mmr-anomaly", "Work around 05000315 - Killed System MMR Write Completes Erroneously on Next System MMR Access", WA_KILLED_MMR, 0 },
  { "lcregs-anomaly", "Work around 05000312 - SSYNC, CSYNC, or Loads to LT, LB and LC Registers Are Interrupted", WA_LCREGS, 0 },
  { "mi-shift-anomaly", "Work around 05000074 - Multi-Issue Instruction with dsp32shiftimm and P-reg Store", WA_MI_SHIFT, 0 },
  { "mmr-stall-anomaly", "Work around 05000283 - System MMR Write Is Stalled Indefinitely when Killed", WA_MMR_STALL, 0 },
  { "rets-anomaly", "Work around 05000371 - Possible RETS Register Corruption when Subroutine Is under 5 Cycles", WA_RETS, 0 },
  { "sdram", "Build for SDRAM", FeatureSDRAM, 0 },
  { "specld-anomaly", "Work around 05000245 - Access in the Shadow of a Conditional Branch", WA_SPECLD, 0 }
};

enum {
  FeatureKVSize = sizeof(FeatureKV)/sizeof(llvm::SubtargetFeatureKV)
};

// Sorted (by key) array of values for CPU subtype.
static const llvm::SubtargetFeatureKV SubTypeKV[] = {
  { "bf512", "Select the bf512 processor", WA_MI_SHIFT | WA_SPECLD | WA_IND_CALL, 0 },
  { "bf512-0.0", "Select the bf512-0.0 processor", WA_MI_SHIFT | WA_SPECLD | WA_IND_CALL, 0 },
  { "bf512-0.1", "Select the bf512-0.1 processor", WA_MI_SHIFT | WA_SPECLD | WA_IND_CALL, 0 },
  { "bf512-any", "Select the bf512-any processor", WA_MI_SHIFT | WA_SPECLD | WA_IND_CALL, 0 },
  { "bf512-none", "Select the bf512-none processor", 0, 0 },
  { "bf514", "Select the bf514 processor", WA_MI_SHIFT | WA_SPECLD | WA_IND_CALL, 0 },
  { "bf514-0.0", "Select the bf514-0.0 processor", WA_MI_SHIFT | WA_SPECLD | WA_IND_CALL, 0 },
  { "bf514-0.1", "Select the bf514-0.1 processor", WA_MI_SHIFT | WA_SPECLD | WA_IND_CALL, 0 },
  { "bf514-any", "Select the bf514-any processor", WA_MI_SHIFT | WA_SPECLD | WA_IND_CALL, 0 },
  { "bf514-none", "Select the bf514-none processor", 0, 0 },
  { "bf516", "Select the bf516 processor", WA_MI_SHIFT | WA_SPECLD | WA_IND_CALL, 0 },
  { "bf516-0.0", "Select the bf516-0.0 processor", WA_MI_SHIFT | WA_SPECLD | WA_IND_CALL, 0 },
  { "bf516-0.1", "Select the bf516-0.1 processor", WA_MI_SHIFT | WA_SPECLD | WA_IND_CALL, 0 },
  { "bf516-any", "Select the bf516-any processor", WA_MI_SHIFT | WA_SPECLD | WA_IND_CALL, 0 },
  { "bf516-none", "Select the bf516-none processor", 0, 0 },
  { "bf518", "Select the bf518 processor", WA_MI_SHIFT | WA_SPECLD | WA_IND_CALL, 0 },
  { "bf518-0.0", "Select the bf518-0.0 processor", WA_MI_SHIFT | WA_SPECLD | WA_IND_CALL, 0 },
  { "bf518-0.1", "Select the bf518-0.1 processor", WA_MI_SHIFT | WA_SPECLD | WA_IND_CALL, 0 },
  { "bf518-any", "Select the bf518-any processor", WA_MI_SHIFT | WA_SPECLD | WA_IND_CALL, 0 },
  { "bf518-none", "Select the bf518-none processor", 0, 0 },
  { "bf522", "Select the bf522 processor", WA_MI_SHIFT | WA_SPECLD | WA_IND_CALL, 0 },
  { "bf522-0.0", "Select the bf522-0.0 processor", WA_MI_SHIFT | WA_SPECLD | WA_IND_CALL, 0 },
  { "bf522-0.1", "Select the bf522-0.1 processor", WA_MI_SHIFT | WA_SPECLD | WA_IND_CALL, 0 },
  { "bf522-any", "Select the bf522-any processor", WA_MI_SHIFT | WA_SPECLD | WA_IND_CALL, 0 },
  { "bf522-none", "Select the bf522-none processor", 0, 0 },
  { "bf523", "Select the bf523 processor", WA_MI_SHIFT | WA_SPECLD | WA_IND_CALL, 0 },
  { "bf523-0.0", "Select the bf523-0.0 processor", WA_MI_SHIFT | WA_SPECLD | WA_RETS | WA_IND_CALL, 0 },
  { "bf523-0.1", "Select the bf523-0.1 processor", WA_MI_SHIFT | WA_SPECLD | WA_RETS | WA_IND_CALL, 0 },
  { "bf523-0.2", "Select the bf523-0.2 processor", WA_MI_SHIFT | WA_SPECLD | WA_IND_CALL, 0 },
  { "bf523-any", "Select the bf523-any processor", WA_MI_SHIFT | WA_SPECLD | WA_RETS | WA_IND_CALL, 0 },
  { "bf523-none", "Select the bf523-none processor", 0, 0 },
  { "bf524", "Select the bf524 processor", WA_MI_SHIFT | WA_SPECLD | WA_IND_CALL, 0 },
  { "bf524-0.0", "Select the bf524-0.0 processor", WA_MI_SHIFT | WA_SPECLD | WA_IND_CALL, 0 },
  { "bf524-0.1", "Select the bf524-0.1 processor", WA_MI_SHIFT | WA_SPECLD | WA_IND_CALL, 0 },
  { "bf524-any", "Select the bf524-any processor", WA_MI_SHIFT | WA_SPECLD | WA_IND_CALL, 0 },
  { "bf524-none", "Select the bf524-none processor", 0, 0 },
  { "bf525", "Select the bf525 processor", WA_MI_SHIFT | WA_SPECLD | WA_IND_CALL, 0 },
  { "bf525-0.0", "Select the bf525-0.0 processor", WA_MI_SHIFT | WA_SPECLD | WA_RETS | WA_IND_CALL, 0 },
  { "bf525-0.1", "Select the bf525-0.1 processor", WA_MI_SHIFT | WA_SPECLD | WA_RETS | WA_IND_CALL, 0 },
  { "bf525-0.2", "Select the bf525-0.2 processor", WA_MI_SHIFT | WA_SPECLD | WA_IND_CALL, 0 },
  { "bf525-any", "Select the bf525-any processor", WA_MI_SHIFT | WA_SPECLD | WA_RETS | WA_IND_CALL, 0 },
  { "bf525-none", "Select the bf525-none processor", 0, 0 },
  { "bf526", "Select the bf526 processor", WA_MI_SHIFT | WA_SPECLD | WA_IND_CALL, 0 },
  { "bf526-0.0", "Select the bf526-0.0 processor", WA_MI_SHIFT | WA_SPECLD | WA_IND_CALL, 0 },
  { "bf526-0.1", "Select the bf526-0.1 processor", WA_MI_SHIFT | WA_SPECLD | WA_IND_CALL, 0 },
  { "bf526-any", "Select the bf526-any processor", WA_MI_SHIFT | WA_SPECLD | WA_IND_CALL, 0 },
  { "bf526-none", "Select the bf526-none processor", 0, 0 },
  { "bf527", "Select the bf527 processor", WA_MI_SHIFT | WA_SPECLD | WA_IND_CALL, 0 },
  { "bf527-0.0", "Select the bf527-0.0 processor", WA_MI_SHIFT | WA_SPECLD | WA_RETS | WA_IND_CALL, 0 },
  { "bf527-0.1", "Select the bf527-0.1 processor", WA_MI_SHIFT | WA_SPECLD | WA_RETS | WA_IND_CALL, 0 },
  { "bf527-0.2", "Select the bf527-0.2 processor", WA_MI_SHIFT | WA_SPECLD | WA_IND_CALL, 0 },
  { "bf527-any", "Select the bf527-any processor", WA_MI_SHIFT | WA_SPECLD | WA_RETS | WA_IND_CALL, 0 },
  { "bf527-none", "Select the bf527-none processor", 0, 0 },
  { "bf531", "Select the bf531 processor", WA_MI_SHIFT | WA_SPECLD | WA_LCREGS, 0 },
  { "bf531-0.3", "Select the bf531-0.3 processor", WA_MI_SHIFT | WA_CSYNC | WA_SPECLD | WA_HWLOOP | WA_MMR_STALL | WA_LCREGS | WA_KILLED_MMR | WA_RETS, 0 },
  { "bf531-0.4", "Select the bf531-0.4 processor", WA_MI_SHIFT | WA_CSYNC | WA_SPECLD | WA_HWLOOP | WA_MMR_STALL | WA_LCREGS | WA_KILLED_MMR | WA_RETS, 0 },
  { "bf531-0.5", "Select the bf531-0.5 processor", WA_MI_SHIFT | WA_SPECLD | WA_MMR_STALL | WA_LCREGS | WA_KILLED_MMR | WA_RETS, 0 },
  { "bf531-0.6", "Select the bf531-0.6 processor", WA_MI_SHIFT | WA_SPECLD | WA_LCREGS, 0 },
  { "bf531-any", "Select the bf531-any processor", WA_MI_SHIFT | WA_CSYNC | WA_SPECLD | WA_HWLOOP | WA_MMR_STALL | WA_LCREGS | WA_KILLED_MMR | WA_RETS, 0 },
  { "bf531-none", "Select the bf531-none processor", 0, 0 },
  { "bf532", "Select the bf532 processor", WA_MI_SHIFT | WA_SPECLD | WA_LCREGS, 0 },
  { "bf532-0.3", "Select the bf532-0.3 processor", WA_MI_SHIFT | WA_CSYNC | WA_SPECLD | WA_HWLOOP | WA_MMR_STALL | WA_LCREGS | WA_KILLED_MMR | WA_RETS, 0 },
  { "bf532-0.4", "Select the bf532-0.4 processor", WA_MI_SHIFT | WA_CSYNC | WA_SPECLD | WA_HWLOOP | WA_MMR_STALL | WA_LCREGS | WA_KILLED_MMR | WA_RETS, 0 },
  { "bf532-0.5", "Select the bf532-0.5 processor", WA_MI_SHIFT | WA_SPECLD | WA_MMR_STALL | WA_LCREGS | WA_KILLED_MMR | WA_RETS, 0 },
  { "bf532-0.6", "Select the bf532-0.6 processor", WA_MI_SHIFT | WA_SPECLD | WA_LCREGS, 0 },
  { "bf532-any", "Select the bf532-any processor", WA_MI_SHIFT | WA_CSYNC | WA_SPECLD | WA_HWLOOP | WA_MMR_STALL | WA_LCREGS | WA_KILLED_MMR | WA_RETS, 0 },
  { "bf532-none", "Select the bf532-none processor", 0, 0 },
  { "bf533", "Select the bf533 processor", WA_MI_SHIFT | WA_SPECLD | WA_LCREGS, 0 },
  { "bf533-0.3", "Select the bf533-0.3 processor", WA_MI_SHIFT | WA_CSYNC | WA_SPECLD | WA_HWLOOP | WA_MMR_STALL | WA_LCREGS | WA_KILLED_MMR | WA_RETS, 0 },
  { "bf533-0.4", "Select the bf533-0.4 processor", WA_MI_SHIFT | WA_CSYNC | WA_SPECLD | WA_HWLOOP | WA_MMR_STALL | WA_LCREGS | WA_KILLED_MMR | WA_RETS, 0 },
  { "bf533-0.5", "Select the bf533-0.5 processor", WA_MI_SHIFT | WA_SPECLD | WA_MMR_STALL | WA_LCREGS | WA_KILLED_MMR | WA_RETS, 0 },
  { "bf533-0.6", "Select the bf533-0.6 processor", WA_MI_SHIFT | WA_SPECLD | WA_LCREGS, 0 },
  { "bf533-any", "Select the bf533-any processor", WA_MI_SHIFT | WA_CSYNC | WA_SPECLD | WA_HWLOOP | WA_MMR_STALL | WA_LCREGS | WA_KILLED_MMR | WA_RETS, 0 },
  { "bf533-none", "Select the bf533-none processor", 0, 0 },
  { "bf534", "Select the bf534 processor", WA_MI_SHIFT | WA_SPECLD | WA_LCREGS | WA_RETS | WA_IND_CALL, 0 },
  { "bf534-0.2", "Select the bf534-0.2 processor", WA_MI_SHIFT | WA_CSYNC | WA_SPECLD | WA_HWLOOP | WA_MMR_STALL | WA_LCREGS | WA_KILLED_MMR | WA_RETS | WA_IND_CALL, 0 },
  { "bf534-0.3", "Select the bf534-0.3 processor", WA_MI_SHIFT | WA_SPECLD | WA_LCREGS | WA_RETS | WA_IND_CALL, 0 },
  { "bf534-any", "Select the bf534-any processor", WA_MI_SHIFT | WA_CSYNC | WA_SPECLD | WA_HWLOOP | WA_MMR_STALL | WA_LCREGS | WA_KILLED_MMR | WA_RETS | WA_IND_CALL, 0 },
  { "bf534-none", "Select the bf534-none processor", 0, 0 },
  { "bf536", "Select the bf536 processor", WA_MI_SHIFT | WA_SPECLD | WA_LCREGS | WA_RETS | WA_IND_CALL, 0 },
  { "bf536-0.2", "Select the bf536-0.2 processor", WA_MI_SHIFT | WA_CSYNC | WA_SPECLD | WA_HWLOOP | WA_MMR_STALL | WA_LCREGS | WA_KILLED_MMR | WA_RETS | WA_IND_CALL, 0 },
  { "bf536-0.3", "Select the bf536-0.3 processor", WA_MI_SHIFT | WA_SPECLD | WA_LCREGS | WA_RETS | WA_IND_CALL, 0 },
  { "bf536-any", "Select the bf536-any processor", WA_MI_SHIFT | WA_CSYNC | WA_SPECLD | WA_HWLOOP | WA_MMR_STALL | WA_LCREGS | WA_KILLED_MMR | WA_RETS | WA_IND_CALL, 0 },
  { "bf536-none", "Select the bf536-none processor", 0, 0 },
  { "bf537", "Select the bf537 processor", WA_MI_SHIFT | WA_SPECLD | WA_LCREGS | WA_RETS | WA_IND_CALL, 0 },
  { "bf537-0.2", "Select the bf537-0.2 processor", WA_MI_SHIFT | WA_CSYNC | WA_SPECLD | WA_HWLOOP | WA_MMR_STALL | WA_LCREGS | WA_KILLED_MMR | WA_RETS | WA_IND_CALL, 0 },
  { "bf537-0.3", "Select the bf537-0.3 processor", WA_MI_SHIFT | WA_SPECLD | WA_LCREGS | WA_RETS | WA_IND_CALL, 0 },
  { "bf537-any", "Select the bf537-any processor", WA_MI_SHIFT | WA_CSYNC | WA_SPECLD | WA_HWLOOP | WA_MMR_STALL | WA_LCREGS | WA_KILLED_MMR | WA_RETS | WA_IND_CALL, 0 },
  { "bf537-none", "Select the bf537-none processor", 0, 0 },
  { "bf538", "Select the bf538 processor", WA_MI_SHIFT | WA_SPECLD | WA_IND_CALL, 0 },
  { "bf538-0.3", "Select the bf538-0.3 processor", WA_MI_SHIFT | WA_SPECLD | WA_MMR_STALL | WA_LCREGS | WA_KILLED_MMR | WA_RETS | WA_IND_CALL, 0 },
  { "bf538-0.4", "Select the bf538-0.4 processor", WA_MI_SHIFT | WA_SPECLD | WA_LCREGS | WA_RETS | WA_IND_CALL, 0 },
  { "bf538-0.5", "Select the bf538-0.5 processor", WA_MI_SHIFT | WA_SPECLD | WA_IND_CALL, 0 },
  { "bf538-any", "Select the bf538-any processor", WA_MI_SHIFT | WA_SPECLD | WA_MMR_STALL | WA_LCREGS | WA_KILLED_MMR | WA_RETS | WA_IND_CALL, 0 },
  { "bf538-none", "Select the bf538-none processor", 0, 0 },
  { "bf539", "Select the bf539 processor", WA_MI_SHIFT | WA_SPECLD | WA_IND_CALL, 0 },
  { "bf539-0.3", "Select the bf539-0.3 processor", WA_MI_SHIFT | WA_SPECLD | WA_MMR_STALL | WA_LCREGS | WA_KILLED_MMR | WA_RETS | WA_IND_CALL, 0 },
  { "bf539-0.4", "Select the bf539-0.4 processor", WA_MI_SHIFT | WA_SPECLD | WA_LCREGS | WA_RETS | WA_IND_CALL, 0 },
  { "bf539-0.5", "Select the bf539-0.5 processor", WA_MI_SHIFT | WA_SPECLD | WA_IND_CALL, 0 },
  { "bf539-any", "Select the bf539-any processor", WA_MI_SHIFT | WA_SPECLD | WA_MMR_STALL | WA_LCREGS | WA_KILLED_MMR | WA_RETS | WA_IND_CALL, 0 },
  { "bf539-none", "Select the bf539-none processor", 0, 0 },
  { "bf542", "Select the bf542 processor", WA_MI_SHIFT | WA_SPECLD | WA_IND_CALL, 0 },
  { "bf542-0.0", "Select the bf542-0.0 processor", WA_MI_SHIFT | WA_SPECLD | WA_LCREGS | WA_RETS | WA_IND_CALL, 0 },
  { "bf542-0.1", "Select the bf542-0.1 processor", WA_MI_SHIFT | WA_SPECLD | WA_RETS | WA_IND_CALL, 0 },
  { "bf542-0.2", "Select the bf542-0.2 processor", WA_MI_SHIFT | WA_SPECLD | WA_IND_CALL, 0 },
  { "bf542-0.3", "Select the bf542-0.3 processor", WA_MI_SHIFT | WA_SPECLD | WA_IND_CALL, 0 },
  { "bf542-any", "Select the bf542-any processor", WA_MI_SHIFT | WA_SPECLD | WA_LCREGS | WA_RETS | WA_IND_CALL, 0 },
  { "bf542-none", "Select the bf542-none processor", 0, 0 },
  { "bf544", "Select the bf544 processor", WA_MI_SHIFT | WA_SPECLD | WA_IND_CALL, 0 },
  { "bf544-0.0", "Select the bf544-0.0 processor", WA_MI_SHIFT | WA_SPECLD | WA_LCREGS | WA_RETS | WA_IND_CALL, 0 },
  { "bf544-0.1", "Select the bf544-0.1 processor", WA_MI_SHIFT | WA_SPECLD | WA_RETS | WA_IND_CALL, 0 },
  { "bf544-0.2", "Select the bf544-0.2 processor", WA_MI_SHIFT | WA_SPECLD | WA_IND_CALL, 0 },
  { "bf544-0.3", "Select the bf544-0.3 processor", WA_MI_SHIFT | WA_SPECLD | WA_IND_CALL, 0 },
  { "bf544-any", "Select the bf544-any processor", WA_MI_SHIFT | WA_SPECLD | WA_LCREGS | WA_RETS | WA_IND_CALL, 0 },
  { "bf544-none", "Select the bf544-none processor", 0, 0 },
  { "bf548", "Select the bf548 processor", WA_MI_SHIFT | WA_SPECLD | WA_IND_CALL, 0 },
  { "bf548-0.0", "Select the bf548-0.0 processor", WA_MI_SHIFT | WA_SPECLD | WA_LCREGS | WA_RETS | WA_IND_CALL, 0 },
  { "bf548-0.1", "Select the bf548-0.1 processor", WA_MI_SHIFT | WA_SPECLD | WA_RETS | WA_IND_CALL, 0 },
  { "bf548-0.2", "Select the bf548-0.2 processor", WA_MI_SHIFT | WA_SPECLD | WA_IND_CALL, 0 },
  { "bf548-0.3", "Select the bf548-0.3 processor", WA_MI_SHIFT | WA_SPECLD | WA_IND_CALL, 0 },
  { "bf548-any", "Select the bf548-any processor", WA_MI_SHIFT | WA_SPECLD | WA_LCREGS | WA_RETS | WA_IND_CALL, 0 },
  { "bf548-none", "Select the bf548-none processor", 0, 0 },
  { "bf549", "Select the bf549 processor", WA_MI_SHIFT | WA_SPECLD | WA_IND_CALL, 0 },
  { "bf549-0.0", "Select the bf549-0.0 processor", WA_MI_SHIFT | WA_SPECLD | WA_LCREGS | WA_RETS | WA_IND_CALL, 0 },
  { "bf549-0.1", "Select the bf549-0.1 processor", WA_MI_SHIFT | WA_SPECLD | WA_RETS | WA_IND_CALL, 0 },
  { "bf549-0.2", "Select the bf549-0.2 processor", WA_MI_SHIFT | WA_SPECLD | WA_IND_CALL, 0 },
  { "bf549-0.3", "Select the bf549-0.3 processor", WA_MI_SHIFT | WA_SPECLD | WA_IND_CALL, 0 },
  { "bf549-any", "Select the bf549-any processor", WA_MI_SHIFT | WA_SPECLD | WA_LCREGS | WA_RETS | WA_IND_CALL, 0 },
  { "bf549-none", "Select the bf549-none processor", 0, 0 },
  { "bf561", "Select the bf561 processor", WA_MI_SHIFT | WA_SPECLD | WA_MMR_STALL | WA_LCREGS | WA_KILLED_MMR | WA_RETS | WA_IND_CALL, 0 },
  { "bf561-0.3", "Select the bf561-0.3 processor", WA_MI_SHIFT | WA_CSYNC | WA_SPECLD | WA_HWLOOP | WA_MMR_STALL | WA_LCREGS | WA_KILLED_MMR | WA_RETS | WA_IND_CALL, 0 },
  { "bf561-0.5", "Select the bf561-0.5 processor", WA_MI_SHIFT | WA_SPECLD | WA_MMR_STALL | WA_LCREGS | WA_KILLED_MMR | WA_RETS | WA_IND_CALL, 0 },
  { "bf561-any", "Select the bf561-any processor", WA_MI_SHIFT | WA_CSYNC | WA_SPECLD | WA_HWLOOP | WA_MMR_STALL | WA_LCREGS | WA_KILLED_MMR | WA_RETS | WA_IND_CALL, 0 },
  { "bf561-none", "Select the bf561-none processor", 0, 0 },
  { "generic", "Select the generic processor", 0, 0 }
};

enum {
  SubTypeKVSize = sizeof(SubTypeKV)/sizeof(llvm::SubtargetFeatureKV)
};


enum {
  ItinClassesSize = 1
};

// ParseSubtargetFeatures - Parses features string setting specified
// subtarget options.
std::string llvm::BlackfinSubtarget::ParseSubtargetFeatures(const std::string &FS,
                                  const std::string &CPU) {
  DEBUG(dbgs() << "\nFeatures:" << FS);
  DEBUG(dbgs() << "\nCPU:" << CPU);
  SubtargetFeatures Features(FS);
  Features.setCPUIfNone(CPU);
  uint32_t Bits =  Features.getBits(SubTypeKV, SubTypeKVSize,
                                    FeatureKV, FeatureKVSize);
  if ((Bits & FeatureICPLB) != 0) icplb = true;
  if ((Bits & FeatureSDRAM) != 0) sdram = true;
  if ((Bits & WA_CSYNC) != 0) wa_csync = true;
  if ((Bits & WA_HWLOOP) != 0) wa_hwloop = true;
  if ((Bits & WA_IND_CALL) != 0) wa_ind_call = true;
  if ((Bits & WA_KILLED_MMR) != 0) wa_killed_mmr = true;
  if ((Bits & WA_LCREGS) != 0) wa_lcregs = true;
  if ((Bits & WA_MI_SHIFT) != 0) wa_mi_shift = true;
  if ((Bits & WA_MMR_STALL) != 0) wa_mmr_stall = true;
  if ((Bits & WA_RETS) != 0) wa_rets = true;
  if ((Bits & WA_SPECLD) != 0) wa_specld = true;
  return Features.getCPU();
}
