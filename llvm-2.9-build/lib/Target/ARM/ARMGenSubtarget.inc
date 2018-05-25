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
  ArchV4T =  1 << 0,
  ArchV5T =  1 << 1,
  ArchV5TE =  1 << 2,
  ArchV6 =  1 << 3,
  ArchV6M =  1 << 4,
  ArchV6T2 =  1 << 5,
  ArchV7A =  1 << 6,
  ArchV7M =  1 << 7,
  FeatureD16 =  1 << 8,
  FeatureDB =  1 << 9,
  FeatureFP16 =  1 << 10,
  FeatureHWDiv =  1 << 11,
  FeatureHasSlowFPVMLx =  1 << 12,
  FeatureMP =  1 << 13,
  FeatureNEON =  1 << 14,
  FeatureNEONForFP =  1 << 15,
  FeatureNoARM =  1 << 16,
  FeaturePref32BitThumb =  1 << 17,
  FeatureSlowFPBrcc =  1 << 18,
  FeatureT2XtPk =  1 << 19,
  FeatureThumb2 =  1 << 20,
  FeatureVFP2 =  1 << 21,
  FeatureVFP3 =  1 << 22,
  FeatureVFPOnlySP =  1 << 23,
  ProcA8 =  1 << 24,
  ProcA9 =  1 << 25,
  ProcOthers =  1 << 26
};

// Sorted (by key) array of values for CPU features.
static const llvm::SubtargetFeatureKV FeatureKV[] = {
  { "32bit", "Prefer 32-bit Thumb instrs", FeaturePref32BitThumb, 0 },
  { "a8", "Cortex-A8 ARM processors", ProcA8, FeatureSlowFPBrcc | FeatureNEONForFP | FeatureHasSlowFPVMLx | FeatureT2XtPk },
  { "a9", "Cortex-A9 ARM processors", ProcA9, FeatureHasSlowFPVMLx | FeatureT2XtPk | FeatureFP16 },
  { "d16", "Restrict VFP3 to 16 double registers", FeatureD16, 0 },
  { "db", "Has data barrier (dmb / dsb) instructions", FeatureDB, 0 },
  { "fp-only-sp", "Floating point unit supports single precision only", FeatureVFPOnlySP, 0 },
  { "fp16", "Enable half-precision floating point", FeatureFP16, 0 },
  { "hwdiv", "Enable divide instructions", FeatureHWDiv, 0 },
  { "mp", "Supports Multiprocessing extension", FeatureMP, 0 },
  { "neon", "Enable NEON instructions", FeatureNEON, 0 },
  { "neonfp", "Use NEON for single precision FP", FeatureNEONForFP, 0 },
  { "noarm", "Does not support ARM mode execution", FeatureNoARM, 0 },
  { "others", "One of the other ARM processor families", ProcOthers, 0 },
  { "slow-fp-brcc", "FP compare + branch is slow", FeatureSlowFPBrcc, 0 },
  { "slowfpvmlx", "Disable VFP / NEON MAC instructions", FeatureHasSlowFPVMLx, 0 },
  { "t2xtpk", "Enable Thumb2 extract and pack instructions", FeatureT2XtPk, 0 },
  { "thumb2", "Enable Thumb2 instructions", FeatureThumb2, 0 },
  { "v4t", "ARM v4T", ArchV4T, 0 },
  { "v5t", "ARM v5T", ArchV5T, 0 },
  { "v5te", "ARM v5TE, v5TEj, v5TExp", ArchV5TE, 0 },
  { "v6", "ARM v6", ArchV6, 0 },
  { "v6m", "ARM v6m", ArchV6M, FeatureNoARM | FeatureDB },
  { "v6t2", "ARM v6t2", ArchV6T2, FeatureThumb2 },
  { "v7a", "ARM v7A", ArchV7A, FeatureThumb2 | FeatureNEON | FeatureDB },
  { "v7m", "ARM v7M", ArchV7M, FeatureThumb2 | FeatureNoARM | FeatureDB | FeatureHWDiv },
  { "vfp2", "Enable VFP2 instructions", FeatureVFP2, 0 },
  { "vfp3", "Enable VFP3 instructions", FeatureVFP3, 0 }
};

enum {
  FeatureKVSize = sizeof(FeatureKV)/sizeof(llvm::SubtargetFeatureKV)
};

// Sorted (by key) array of values for CPU subtype.
static const llvm::SubtargetFeatureKV SubTypeKV[] = {
  { "arm1020e", "Select the arm1020e processor", ArchV5TE, 0 },
  { "arm1020t", "Select the arm1020t processor", ArchV5T, 0 },
  { "arm1022e", "Select the arm1022e processor", ArchV5TE, 0 },
  { "arm10e", "Select the arm10e processor", ArchV5TE, 0 },
  { "arm10tdmi", "Select the arm10tdmi processor", ArchV5T, 0 },
  { "arm1136j-s", "Select the arm1136j-s processor", ArchV6, 0 },
  { "arm1136jf-s", "Select the arm1136jf-s processor", ArchV6 | FeatureVFP2 | FeatureHasSlowFPVMLx, 0 },
  { "arm1156t2-s", "Select the arm1156t2-s processor", ArchV6T2, 0 },
  { "arm1156t2f-s", "Select the arm1156t2f-s processor", ArchV6T2 | FeatureVFP2 | FeatureHasSlowFPVMLx, 0 },
  { "arm1176jz-s", "Select the arm1176jz-s processor", ArchV6, 0 },
  { "arm1176jzf-s", "Select the arm1176jzf-s processor", ArchV6 | FeatureVFP2 | FeatureHasSlowFPVMLx, 0 },
  { "arm710t", "Select the arm710t processor", ArchV4T, 0 },
  { "arm720t", "Select the arm720t processor", ArchV4T, 0 },
  { "arm7tdmi", "Select the arm7tdmi processor", ArchV4T, 0 },
  { "arm7tdmi-s", "Select the arm7tdmi-s processor", ArchV4T, 0 },
  { "arm8", "Select the arm8 processor", 0, 0 },
  { "arm810", "Select the arm810 processor", 0, 0 },
  { "arm9", "Select the arm9 processor", ArchV4T, 0 },
  { "arm920", "Select the arm920 processor", ArchV4T, 0 },
  { "arm920t", "Select the arm920t processor", ArchV4T, 0 },
  { "arm922t", "Select the arm922t processor", ArchV4T, 0 },
  { "arm926ej-s", "Select the arm926ej-s processor", ArchV5TE, 0 },
  { "arm940t", "Select the arm940t processor", ArchV4T, 0 },
  { "arm946e-s", "Select the arm946e-s processor", ArchV5TE, 0 },
  { "arm966e-s", "Select the arm966e-s processor", ArchV5TE, 0 },
  { "arm968e-s", "Select the arm968e-s processor", ArchV5TE, 0 },
  { "arm9e", "Select the arm9e processor", ArchV5TE, 0 },
  { "arm9tdmi", "Select the arm9tdmi processor", ArchV4T, 0 },
  { "cortex-a8", "Select the cortex-a8 processor", ArchV7A | ProcA8, 0 },
  { "cortex-a9", "Select the cortex-a9 processor", ArchV7A | ProcA9, 0 },
  { "cortex-m0", "Select the cortex-m0 processor", ArchV6M, 0 },
  { "cortex-m3", "Select the cortex-m3 processor", ArchV7M, 0 },
  { "cortex-m4", "Select the cortex-m4 processor", ArchV7M | FeatureVFP2 | FeatureVFPOnlySP, 0 },
  { "ep9312", "Select the ep9312 processor", ArchV4T, 0 },
  { "generic", "Select the generic processor", 0, 0 },
  { "iwmmxt", "Select the iwmmxt processor", ArchV5TE, 0 },
  { "mpcore", "Select the mpcore processor", ArchV6 | FeatureVFP2 | FeatureHasSlowFPVMLx, 0 },
  { "mpcorenovfp", "Select the mpcorenovfp processor", ArchV6, 0 },
  { "strongarm", "Select the strongarm processor", 0, 0 },
  { "strongarm110", "Select the strongarm110 processor", 0, 0 },
  { "strongarm1100", "Select the strongarm1100 processor", 0, 0 },
  { "strongarm1110", "Select the strongarm1110 processor", 0, 0 },
  { "xscale", "Select the xscale processor", ArchV5TE, 0 }
};

enum {
  SubTypeKVSize = sizeof(SubTypeKV)/sizeof(llvm::SubtargetFeatureKV)
};


enum {
  ItinClassesSize = 241
};

// Functional units for itineraries "ARMV6Itineraries"
namespace ARMV6ItinerariesFU {
  const unsigned V6_Pipe = 1 << 0;
}

// Functional units for itineraries "CortexA8Itineraries"
namespace CortexA8ItinerariesFU {
  const unsigned A8_Pipe0 = 1 << 0;
  const unsigned A8_Pipe1 = 1 << 1;
  const unsigned A8_LSPipe = 1 << 2;
  const unsigned A8_NPipe = 1 << 3;
  const unsigned A8_NLSPipe = 1 << 4;
}

// Functional units for itineraries "CortexA9Itineraries"
namespace CortexA9ItinerariesFU {
  const unsigned A9_Issue0 = 1 << 0;
  const unsigned A9_Issue1 = 1 << 1;
  const unsigned A9_Branch = 1 << 2;
  const unsigned A9_ALU0 = 1 << 3;
  const unsigned A9_ALU1 = 1 << 4;
  const unsigned A9_AGU = 1 << 5;
  const unsigned A9_NPipe = 1 << 6;
  const unsigned A9_MUX0 = 1 << 7;
  const unsigned A9_LSUnit = 1 << 8;
  const unsigned A9_DRegsVFP = 1 << 9;
  const unsigned A9_DRegsN = 1 << 10;
}

// Pipeline forwarding pathes for itineraries "CortexA9Itineraries"
namespace CortexA9ItinerariesBypass {
  const unsigned NoBypass = 0;
  const unsigned A9_LdBypass = 1 << 0;
}

static const llvm::InstrStage Stages[] = {
  { 0, 0, 0, llvm::InstrStage::Required }, // No itinerary
  { 1, ARMV6ItinerariesFU::V6_Pipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 1
  { 2, ARMV6ItinerariesFU::V6_Pipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 2
  { 1, ARMV6ItinerariesFU::V6_Pipe, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, ARMV6ItinerariesFU::V6_Pipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 3
  { 1, ARMV6ItinerariesFU::V6_Pipe, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, ARMV6ItinerariesFU::V6_Pipe, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, ARMV6ItinerariesFU::V6_Pipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 4
  { 3, ARMV6ItinerariesFU::V6_Pipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 5
  { 3, ARMV6ItinerariesFU::V6_Pipe, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, ARMV6ItinerariesFU::V6_Pipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 6
  { 15, ARMV6ItinerariesFU::V6_Pipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 7
  { 29, ARMV6ItinerariesFU::V6_Pipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 8
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 9
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 10
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 11
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 12
  { 1, CortexA8ItinerariesFU::A8_Pipe0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 13
  { 2, CortexA8ItinerariesFU::A8_Pipe0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 14
  { 3, CortexA8ItinerariesFU::A8_Pipe0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 15
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 16
  { 2, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 17
  { 2, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 18
  { 2, CortexA8ItinerariesFU::A8_Pipe0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 19
  { 3, CortexA8ItinerariesFU::A8_Pipe0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 20
  { 3, CortexA8ItinerariesFU::A8_Pipe0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 21
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 22
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_NLSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 23
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 24
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, CortexA8ItinerariesFU::A8_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, CortexA8ItinerariesFU::A8_NLSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 25
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 7, CortexA8ItinerariesFU::A8_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 7, CortexA8ItinerariesFU::A8_NLSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 26
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 5, CortexA8ItinerariesFU::A8_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 5, CortexA8ItinerariesFU::A8_NLSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 27
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 8, CortexA8ItinerariesFU::A8_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 8, CortexA8ItinerariesFU::A8_NLSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 28
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 9, CortexA8ItinerariesFU::A8_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 9, CortexA8ItinerariesFU::A8_NLSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 29
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 11, CortexA8ItinerariesFU::A8_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 11, CortexA8ItinerariesFU::A8_NLSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 30
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 19, CortexA8ItinerariesFU::A8_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 19, CortexA8ItinerariesFU::A8_NLSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 31
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 20, CortexA8ItinerariesFU::A8_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 20, CortexA8ItinerariesFU::A8_NLSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 32
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 29, CortexA8ItinerariesFU::A8_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 29, CortexA8ItinerariesFU::A8_NLSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 33
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_NLSPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 34
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_NLSPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_NLSPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 35
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA8ItinerariesFU::A8_NLSPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 36
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, CortexA8ItinerariesFU::A8_NLSPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 37
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 3, CortexA8ItinerariesFU::A8_NLSPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 38
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA8ItinerariesFU::A8_NLSPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 39
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, CortexA8ItinerariesFU::A8_NLSPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 40
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 5, CortexA8ItinerariesFU::A8_NLSPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 5, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 41
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA8ItinerariesFU::A8_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 42
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA8ItinerariesFU::A8_NLSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 43
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_NLSPipe, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA8ItinerariesFU::A8_NLSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 44
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA8ItinerariesFU::A8_NLSPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, CortexA8ItinerariesFU::A8_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 45
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_ALU0 | CortexA9ItinerariesFU::A9_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 46
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_ALU0 | CortexA9ItinerariesFU::A9_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 47
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_ALU0 | CortexA9ItinerariesFU::A9_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_ALU0 | CortexA9ItinerariesFU::A9_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 48
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_ALU0 | CortexA9ItinerariesFU::A9_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_ALU0 | CortexA9ItinerariesFU::A9_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_ALU0 | CortexA9ItinerariesFU::A9_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 49
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_ALU0 | CortexA9ItinerariesFU::A9_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_ALU0 | CortexA9ItinerariesFU::A9_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_AGU, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 50
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, CortexA9ItinerariesFU::A9_ALU0 | CortexA9ItinerariesFU::A9_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 51
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_ALU0 | CortexA9ItinerariesFU::A9_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_ALU0 | CortexA9ItinerariesFU::A9_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 52
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_ALU0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 53
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, CortexA9ItinerariesFU::A9_ALU0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 54
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_AGU, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 55
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_AGU, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 56
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_AGU, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_LSUnit, 0, (llvm::InstrStage::ReservationKinds)0 }, // 57
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_AGU, 1, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 58
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_AGU, 1, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_Branch, -1, (llvm::InstrStage::ReservationKinds)0 }, // 59
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_AGU, 1, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_Branch, -1, (llvm::InstrStage::ReservationKinds)0 }, // 60
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_AGU, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_ALU0 | CortexA9ItinerariesFU::A9_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 61
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_AGU, 1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 62
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_AGU, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 63
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 64
  { 1, CortexA9ItinerariesFU::A9_Issue0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_Branch, -1, (llvm::InstrStage::ReservationKinds)0 }, // 65
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)1 },   { 1, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 66
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)1 },   { 1, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 67
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)0 },   { 5, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)1 },   { 1, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 68
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)0 },   { 6, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)1 },   { 1, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 69
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)0 },   { 7, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)1 },   { 2, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 70
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)0 },   { 9, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)1 },   { 1, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 71
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)0 },   { 10, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)1 },   { 2, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 72
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)0 },   { 16, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)1 },   { 10, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 73
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)0 },   { 26, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)1 },   { 20, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 74
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)0 },   { 18, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)1 },   { 13, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 75
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)0 },   { 33, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)1 },   { 28, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 76
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)1 },   { 1, CortexA9ItinerariesFU::A9_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 77
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 8, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 2, CortexA9ItinerariesFU::A9_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 78
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 9, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 3, CortexA9ItinerariesFU::A9_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 79
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 10, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 4, CortexA9ItinerariesFU::A9_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 80
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 11, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 5, CortexA9ItinerariesFU::A9_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 5, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 81
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 2, CortexA9ItinerariesFU::A9_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 82
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 3, CortexA9ItinerariesFU::A9_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 83
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 3, CortexA9ItinerariesFU::A9_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 84
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 7, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 1, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 85
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 8, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 2, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 86
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 7, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 2, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 87
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 10, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 4, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 88
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 1, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 89
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 1, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 90
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 2, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 91
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 8, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 1, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 92
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 11, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 1, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 93
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 12, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 2, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 94
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 9, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 3, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 95
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 8, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 2, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 96
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 9, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 3, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 97
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 9, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 2, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 98
  { 0, 0, 0, llvm::InstrStage::Required } // End itinerary
};
static const unsigned OperandCycles[] = {
  0, // No itinerary
  2,   2, // 1
  2,   2,   2, // 2
  2,   2,   1, // 3
  3,   3,   2,   1, // 4
  2,   2, // 5
  2,   2,   2, // 6
  2,   2,   1, // 7
  3,   3,   2,   1, // 8
  2,   2, // 9
  2,   1, // 10
  1,   1, // 11
  2,   2,   1, // 12
  3,   3,   2,   1, // 13
  2, // 14
  2,   2, // 15
  2,   1, // 16
  3,   2,   1, // 17
  2, // 18
  2,   2, // 19
  2,   1, // 20
  3,   2,   1, // 21
  2, // 22
  2,   2, // 23
  2,   1, // 24
  3,   2,   1, // 25
  2, // 26
  3, // 27
  5, // 28
  3, // 29
  3,   2, // 30
  3,   1, // 31
  4,   2,   1, // 32
  4, // 33
  2, // 34
  2,   2, // 35
  2,   1, // 36
  3,   2,   1, // 37
  4,   1,   1, // 38
  4,   1,   1,   2, // 39
  5,   1,   1, // 40
  5,   1,   1,   2, // 41
  6,   1,   1, // 42
  6,   1,   1,   2, // 43
  4,   1, // 44
  4,   1, // 45
  4,   1, // 46
  4,   1,   1, // 47
  4,   1,   1, // 48
  4,   1,   1, // 49
  5,   2,   1, // 50
  5,   2,   1, // 51
  4,   2,   1, // 52
  4,   2,   1, // 53
  4,   2,   1,   1, // 54
  4,   2,   1,   1, // 55
  4,   2,   1,   1, // 56
  5,   2,   2,   1, // 57
  5,   2,   2,   1, // 58
  1,   1,   1,   1,   4, // 59
  2,   1,   1,   1,   4, // 60
  1,   2,   1,   1,   4, // 61
  3,   1, // 62
  1,   1,   4, // 63
  1,   2,   4, // 64
  2,   1, // 65
  2,   1, // 66
  2,   1, // 67
  2,   1,   1, // 68
  2,   1,   1, // 69
  2,   1,   1, // 70
  2,   2,   1, // 71
  2,   2,   1, // 72
  2,   2,   1, // 73
  2,   2,   1, // 74
  2,   2,   1,   1, // 75
  2,   2,   1,   1, // 76
  2,   2,   1,   1, // 77
  2,   2,   2,   1, // 78
  2,   2,   2,   1, // 79
  2, // 80
  3, // 81
  5,   2, // 82
  5,   2, // 83
  2,   2, // 84
  2,   2, // 85
  5,   2, // 86
  5,   2, // 87
  9,   2, // 88
  9,   2, // 89
  9,   2, // 90
  9,   2, // 91
  9,   2,   2, // 92
  9,   2,   2, // 93
  9,   2,   2, // 94
  9,   2,   2, // 95
  9,   2,   2,   2, // 96
  9,   2,   2,   2, // 97
  20,   2,   2, // 98
  34,   2,   2, // 99
  20,   2,   2, // 100
  34,   2,   2, // 101
  10,   1, // 102
  10,   1,   1, // 103
  10,   1, // 104
  10,   10,   1, // 105
  5,   2,   2, // 106
  5,   2,   2, // 107
  2,   1,   1,   5, // 108
  3,   2,   1,   1,   5, // 109
  2,   2,   2, // 110
  2,   2,   2, // 111
  2,   2,   2,   2, // 112
  3,   2,   2,   2,   2, // 113
  2,   2, // 114
  2,   2,   2, // 115
  2,   2,   1, // 116
  2,   1,   2, // 117
  2,   2,   1,   1, // 118
  2,   2, // 119
  2,   2,   2, // 120
  2,   2,   1, // 121
  2,   2,   1,   1, // 122
  2,   2, // 123
  2,   1, // 124
  1,   1, // 125
  2,   2,   1, // 126
  2,   2,   1,   1, // 127
  2, // 128
  2,   2, // 129
  2,   1, // 130
  2,   1,   1, // 131
  2, // 132
  2,   2, // 133
  2,   1, // 134
  2,   1,   1, // 135
  1, // 136
  1,   1, // 137
  1,   1, // 138
  1,   1,   1, // 139
  2, // 140
  3, // 141
  5, // 142
  2, // 143
  2,   1, // 144
  2,   1, // 145
  2,   1,   1, // 146
  3,   1, // 147
  1, // 148
  1,   1, // 149
  1,   1, // 150
  1,   1,   1, // 151
  5,   1,   1, // 152
  6,   1,   1,   4, // 153
  6,   1,   1, // 154
  6,   1,   1,   4, // 155
  6,   6,   1,   1, // 156
  6,   6,   1,   1, // 157
  3,   1, // 158
  3,   1, // 159
  3,   1, // 160
  3,   1,   1, // 161
  3,   1,   1, // 162
  3,   1,   1, // 163
  4,   1,   1, // 164
  4,   1,   1, // 165
  3,   2,   1, // 166
  3,   2,   1, // 167
  3,   2,   1,   1, // 168
  3,   2,   1,   1, // 169
  3,   2,   1,   1, // 170
  4,   3,   1,   1, // 171
  4,   3,   1,   1, // 172
  1,   1,   1,   1,   3, // 173
  2,   1,   1,   1,   3, // 174
  1,   2,   1,   1,   3, // 175
  1,   1,   3, // 176
  1,   1,   3, // 177
  4,   1, // 178
  3,   1, // 179
  3,   1, // 180
  3,   1, // 181
  3,   1,   1, // 182
  3,   1,   1, // 183
  3,   1,   1, // 184
  3,   1,   1, // 185
  3,   1,   1, // 186
  2,   3,   1, // 187
  2,   3,   1, // 188
  2,   3,   1,   1, // 189
  2,   3,   1,   1, // 190
  2,   3,   1,   1, // 191
  3,   3,   1,   1, // 192
  3,   3,   1,   1, // 193
  2, // 194
  2,   2, // 195
  20, // 196
  7,   1, // 197
  4,   1, // 198
  1,   1, // 199
  4,   1, // 200
  7,   1, // 201
  5,   1, // 202
  7,   1, // 203
  8,   1, // 204
  7,   1, // 205
  8,   1, // 206
  7,   1,   1, // 207
  9,   1,   1, // 208
  7,   1,   1, // 209
  11,   1,   1, // 210
  7,   2,   1,   1, // 211
  19,   2,   1,   1, // 212
  20,   1,   1, // 213
  29,   1,   1, // 214
  19,   1, // 215
  29,   1, // 216
  2,   1, // 217
  2,   1,   1, // 218
  20,   1, // 219
  20,   20,   1, // 220
  2,   1, // 221
  2,   1, // 222
  1,   1,   1,   2, // 223
  2,   1,   1,   1,   2, // 224
  1,   1, // 225
  1,   1, // 226
  1,   1,   1,   1, // 227
  2,   1,   1,   1,   1, // 228
  2,   1, // 229
  2,   2,   1, // 230
  2,   2,   3,   1, // 231
  2,   2,   3,   3,   1, // 232
  2,   2,   1, // 233
  2,   2,   2,   1, // 234
  2,   2,   3,   2,   1, // 235
  2,   2,   3,   3,   2,   1, // 236
  3,   1,   1,   1, // 237
  3,   2,   1,   1,   1,   1, // 238
  2,   1, // 239
  2,   2,   1,   1, // 240
  2,   2,   1, // 241
  2,   2,   3,   3,   1, // 242
  3,   3,   1,   1,   1,   1, // 243
  2,   2,   2,   1,   1,   1, // 244
  2,   2,   3,   3,   2,   1, // 245
  3,   3,   2,   1,   1,   1,   1,   1, // 246
  2,   2,   1, // 247
  2,   2,   2,   1,   1, // 248
  3,   3,   4,   1, // 249
  4,   4,   5,   1,   1,   1,   1,   2, // 250
  3,   3,   4,   2,   1, // 251
  4,   4,   5,   2,   1,   1,   1,   1,   1,   2, // 252
  2,   2,   3,   1, // 253
  2,   2,   3,   2,   1,   1, // 254
  3,   3,   4,   4,   1, // 255
  4,   4,   5,   5,   1,   1,   1,   1,   2,   2, // 256
  3,   3,   4,   4,   2,   1, // 257
  4,   4,   5,   5,   2,   1,   1,   1,   1,   1,   2,   2, // 258
  2,   2,   3,   3,   1, // 259
  2,   2,   3,   3,   2,   1,   1, // 260
  1,   1,   1, // 261
  1,   1,   1,   1, // 262
  1,   1,   1,   1,   2, // 263
  1,   1,   1,   1,   2,   2, // 264
  2,   1,   1,   1,   1, // 265
  2,   1,   1,   1,   1,   1, // 266
  2,   1,   1,   1,   1,   1,   2, // 267
  2,   1,   1,   1,   1,   1,   2,   2, // 268
  1,   1,   1, // 269
  2,   1,   1,   1,   1, // 270
  1,   1,   1,   1, // 271
  1,   1,   1,   1,   2,   2, // 272
  2,   1,   1,   1,   1,   1, // 273
  2,   1,   1,   1,   1,   1,   2,   2, // 274
  1,   1,   1,   1, // 275
  2,   1,   1,   1,   1,   1, // 276
  1,   1,   1,   1,   2, // 277
  2,   1,   1,   1,   1,   1,   2, // 278
  1,   1,   1,   1,   2, // 279
  2,   1,   1,   1,   1,   1,   2, // 280
  1,   1,   1,   1,   2,   2, // 281
  2,   1,   1,   1,   1,   1,   2,   2, // 282
  1,   1,   1,   1,   2,   2, // 283
  2,   1,   1,   1,   1,   1,   2,   2, // 284
  5,   2, // 285
  6,   2, // 286
  5,   2,   2, // 287
  5,   2,   2, // 288
  5,   2,   1, // 289
  6,   2,   2, // 290
  6,   2,   1, // 291
  1,   1, // 292
  3, // 293
  2,   1, // 294
  3,   1, // 295
  2,   1, // 296
  2,   1,   1, // 297
  20,   1, // 298
  20,   20,   1, // 299
  3,   1,   1, // 300
  2,   1, // 301
  2,   2,   1,   1, // 302
  3,   3,   1,   1, // 303
  4,   4,   1,   1, // 304
  9,   3,   2,   2, // 305
  10,   3,   2,   2, // 306
  9,   2,   2, // 307
  10,   2,   2, // 308
  3,   2,   2, // 309
  4,   2,   2, // 310
  4,   2, // 311
  4,   2, // 312
  4,   1, // 313
  4,   1, // 314
  3,   2,   2, // 315
  3,   2,   2, // 316
  4,   2,   1, // 317
  4,   2,   1, // 318
  3,   2,   1, // 319
  3,   2,   1, // 320
  4,   2,   1, // 321
  4,   2,   1, // 322
  3,   1,   1, // 323
  4,   1,   1, // 324
  4,   1,   1, // 325
  5,   1,   1, // 326
  6,   3,   1, // 327
  7,   3,   1, // 328
  6,   3,   2,   1, // 329
  6,   3,   2,   1, // 330
  6,   2,   2, // 331
  7,   2,   1, // 332
  7,   2,   2, // 333
  9,   2,   1, // 334
  6,   3,   2,   2, // 335
  7,   3,   2,   1, // 336
  7,   3,   2,   2, // 337
  9,   3,   2,   1, // 338
  2,   1,   1, // 339
  3,   1,   1, // 340
  3,   2,   1, // 341
  3,   2,   2,   1, // 342
  4,   2,   2,   3,   1, // 343
  4,   2,   2,   3,   3,   1, // 344
  3,   1,   2,   1, // 345
  3,   1,   2,   2,   1, // 346
  4,   1,   2,   2,   3,   1, // 347
  4,   1,   2,   2,   3,   3,   1, // 348
  1, // 349
  1,   1, // 350
  1,   1, // 351
  2,   1,   1, // 352
  2, // 353
  3, // 354
  5, // 355
  1, // 356
  1,   1, // 357
  2,   1, // 358
  3,   1,   1, // 359
  1,   1, // 360
  1,   1,   1, // 361
  2,   1,   1, // 362
  2,   1,   1, // 363
  3,   1,   1,   1, // 364
  1,   1, // 365
  1,   1,   1, // 366
  2,   1,   1, // 367
  3,   1,   1,   1, // 368
  1,   1, // 369
  2,   1, // 370
  2,   1, // 371
  3,   1,   1, // 372
  3,   1,   1,   1, // 373
  1, // 374
  1,   1, // 375
  1,   1, // 376
  1,   1,   1, // 377
  1, // 378
  1,   1, // 379
  1,   1, // 380
  1,   1,   1, // 381
  1, // 382
  1,   1, // 383
  1,   1, // 384
  2,   1,   1, // 385
  2, // 386
  3,   1,   1, // 387
  3,   1,   1,   1, // 388
  4,   1,   1, // 389
  4,   1,   1,   1, // 390
  4,   5,   1,   1, // 391
  4,   5,   1,   1, // 392
  3,   1, // 393
  4,   1, // 394
  3,   3,   1, // 395
  3,   1,   1, // 396
  4,   1,   1, // 397
  3,   3,   1,   1, // 398
  4,   1,   1, // 399
  5,   1,   1, // 400
  3,   2,   1, // 401
  4,   3,   1, // 402
  3,   2,   1,   1, // 403
  4,   3,   1,   1, // 404
  3,   3,   1,   1, // 405
  4,   3,   1,   1, // 406
  5,   4,   1,   1, // 407
  1,   1,   1,   1,   3, // 408
  2,   1,   1,   1,   3, // 409
  1,   2,   1,   1,   3, // 410
  1,   1,   3, // 411
  1,   1,   3, // 412
  2,   1, // 413
  1,   1, // 414
  1,   1, // 415
  1,   1, // 416
  1,   1,   1, // 417
  1,   1,   1, // 418
  1,   1,   1, // 419
  1,   1,   1, // 420
  1,   1,   1, // 421
  2,   1,   1, // 422
  3,   1,   1, // 423
  2,   1,   1,   1, // 424
  3,   1,   1,   1, // 425
  3,   1,   1,   1, // 426
  2,   1,   1,   1, // 427
  3,   1,   1,   1, // 428
  2, // 429
  1,   1, // 430
  1, // 431
  1,   1, // 432
  1,   1, // 433
  1,   1, // 434
  1,   1, // 435
  4,   1, // 436
  4,   1, // 437
  4,   1, // 438
  2,   1, // 439
  4,   1, // 440
  4,   1, // 441
  4,   1, // 442
  4,   1, // 443
  4,   1,   1, // 444
  4,   1,   1, // 445
  5,   1,   1, // 446
  6,   1,   1, // 447
  8,   1,   1,   1, // 448
  9,   1,   1,   1, // 449
  15,   1,   1, // 450
  25,   1,   1, // 451
  17,   1, // 452
  32,   1, // 453
  1,   1, // 454
  1,   1,   1, // 455
  2,   1, // 456
  2,   1,   1, // 457
  1,   1, // 458
  2,   1, // 459
  1,   1,   1,   1, // 460
  2,   1,   1,   1, // 461
  1,   1, // 462
  1,   1, // 463
  1,   1,   1,   1, // 464
  2,   1,   1,   1, // 465
  2,   1, // 466
  2,   2,   1, // 467
  2,   2,   3,   1, // 468
  2,   2,   3,   3,   1, // 469
  2,   2,   1, // 470
  2,   2,   2,   1, // 471
  2,   2,   3,   2,   1, // 472
  2,   2,   3,   3,   2,   1, // 473
  4,   1,   1,   1, // 474
  4,   2,   1,   1,   1,   1, // 475
  3,   1, // 476
  3,   2,   1,   1, // 477
  3,   3,   1, // 478
  3,   4,   3,   4,   1, // 479
  4,   4,   1,   1,   1,   1, // 480
  3,   3,   2,   1,   1,   1, // 481
  3,   4,   3,   4,   2,   1, // 482
  4,   4,   2,   1,   1,   1,   1,   1, // 483
  3,   3,   1, // 484
  3,   3,   2,   1,   1, // 485
  4,   4,   5,   1, // 486
  5,   5,   6,   1,   1,   1,   1,   2, // 487
  4,   4,   5,   2,   1, // 488
  5,   5,   6,   2,   1,   1,   1,   1,   1,   2, // 489
  3,   3,   4,   1, // 490
  3,   3,   4,   2,   1,   1, // 491
  4,   4,   5,   5,   1, // 492
  5,   5,   6,   6,   1,   1,   1,   1,   2,   2, // 493
  4,   4,   5,   5,   2,   1, // 494
  5,   5,   6,   6,   2,   1,   1,   1,   1,   1,   2,   2, // 495
  3,   3,   4,   4,   1, // 496
  3,   3,   4,   4,   2,   1,   1, // 497
  1,   1,   1, // 498
  1,   1,   1,   1, // 499
  1,   1,   1,   1,   2, // 500
  1,   1,   1,   1,   2,   2, // 501
  2,   1,   1,   1,   1, // 502
  2,   1,   1,   1,   1,   1, // 503
  2,   1,   1,   1,   1,   1,   2, // 504
  2,   1,   1,   1,   1,   1,   2,   2, // 505
  1,   1,   1, // 506
  2,   1,   1,   1,   1, // 507
  1,   1,   1,   1, // 508
  1,   1,   1,   1,   2,   2, // 509
  2,   1,   1,   1,   1,   1, // 510
  2,   1,   1,   1,   1,   1,   2,   2, // 511
  1,   1,   1,   1, // 512
  2,   1,   1,   1,   1,   1, // 513
  1,   1,   1,   1,   2, // 514
  2,   1,   1,   1,   1,   1,   2, // 515
  1,   1,   1,   1,   2, // 516
  2,   1,   1,   1,   1,   1,   2, // 517
  1,   1,   1,   1,   2,   2, // 518
  2,   1,   1,   1,   1,   1,   2,   2, // 519
  1,   1,   1,   1,   2,   2, // 520
  2,   1,   1,   1,   1,   1,   2,   2, // 521
  4,   2, // 522
  4,   2, // 523
  4,   1, // 524
  4,   1, // 525
  3,   2,   2, // 526
  3,   2,   2, // 527
  3,   2,   1, // 528
  3,   2,   1, // 529
  3,   1,   1, // 530
  3,   1,   1, // 531
  4,   1,   1, // 532
  4,   1,   1, // 533
  4,   2,   2, // 534
  4,   2,   2, // 535
  4,   2,   1, // 536
  4,   2,   1, // 537
  3,   2,   2, // 538
  4,   2,   2, // 539
  6,   3,   2,   1, // 540
  6,   3,   2,   1, // 541
  6,   3,   1, // 542
  6,   3,   1, // 543
  6,   2,   2, // 544
  7,   2,   2, // 545
  7,   2,   1, // 546
  9,   2,   1, // 547
  6,   3,   2,   2, // 548
  7,   3,   2,   1, // 549
  7,   3,   2,   2, // 550
  9,   3,   2,   1, // 551
  1,   1, // 552
  3, // 553
  2,   1, // 554
  2,   1, // 555
  1,   1, // 556
  1,   1,   1, // 557
  2,   1, // 558
  2,   2,   1, // 559
  3,   1,   1, // 560
  3,   1, // 561
  5,   2, // 562
  6,   2, // 563
  5,   2,   2, // 564
  5,   1,   1, // 565
  5,   2,   1, // 566
  6,   2,   2, // 567
  6,   2,   1, // 568
  6,   3,   2,   1, // 569
  8,   4,   2,   1, // 570
  9,   2,   2, // 571
  10,   2,   2, // 572
  2,   2,   1,   1, // 573
  3,   3,   1,   1, // 574
  4,   4,   1,   1, // 575
  2,   1,   1, // 576
  3,   1,   2, // 577
  3,   2,   1, // 578
  3,   2,   2,   1, // 579
  4,   2,   2,   3,   1, // 580
  4,   2,   2,   3,   3,   1, // 581
  3,   1,   2,   1, // 582
  3,   1,   2,   2,   1, // 583
  4,   1,   2,   2,   3,   1, // 584
  4,   1,   2,   2,   3,   3,   1, // 585
  0 // End itinerary
};
static const unsigned ForwardingPathes[] = {
  0, // No itinerary
 0,  0, // 1
 0,  0,  0, // 2
 0,  0,  0, // 3
 0,  0,  0,  0, // 4
 0,  0, // 5
 0,  0,  0, // 6
 0,  0,  0, // 7
 0,  0,  0,  0, // 8
 0,  0, // 9
 0,  0, // 10
 0,  0, // 11
 0,  0,  0, // 12
 0,  0,  0,  0, // 13
 0, // 14
 0,  0, // 15
 0,  0, // 16
 0,  0,  0, // 17
 0, // 18
 0,  0, // 19
 0,  0, // 20
 0,  0,  0, // 21
 0, // 22
 0,  0, // 23
 0,  0, // 24
 0,  0,  0, // 25
 0, // 26
 0, // 27
 0, // 28
 0, // 29
 0,  0, // 30
 0,  0, // 31
 0,  0,  0, // 32
 0, // 33
 0, // 34
 0,  0, // 35
 0,  0, // 36
 0,  0,  0, // 37
 0,  0,  0, // 38
 0,  0,  0,  0, // 39
 0,  0,  0, // 40
 0,  0,  0,  0, // 41
 0,  0,  0, // 42
 0,  0,  0,  0, // 43
 0,  0, // 44
 0,  0, // 45
 0,  0, // 46
 0,  0,  0, // 47
 0,  0,  0, // 48
 0,  0,  0, // 49
 0,  0,  0, // 50
 0,  0,  0, // 51
 0,  0,  0, // 52
 0,  0,  0, // 53
 0,  0,  0,  0, // 54
 0,  0,  0,  0, // 55
 0,  0,  0,  0, // 56
 0,  0,  0,  0, // 57
 0,  0,  0,  0, // 58
 0,  0,  0,  0,  0, // 59
 0,  0,  0,  0,  0, // 60
 0,  0,  0,  0,  0, // 61
 0,  0, // 62
 0,  0,  0, // 63
 0,  0,  0, // 64
 0,  0, // 65
 0,  0, // 66
 0,  0, // 67
 0,  0,  0, // 68
 0,  0,  0, // 69
 0,  0,  0, // 70
 0,  0,  0, // 71
 0,  0,  0, // 72
 0,  0,  0, // 73
 0,  0,  0, // 74
 0,  0,  0,  0, // 75
 0,  0,  0,  0, // 76
 0,  0,  0,  0, // 77
 0,  0,  0,  0, // 78
 0,  0,  0,  0, // 79
 0, // 80
 0, // 81
 0,  0, // 82
 0,  0, // 83
 0,  0, // 84
 0,  0, // 85
 0,  0, // 86
 0,  0, // 87
 0,  0, // 88
 0,  0, // 89
 0,  0, // 90
 0,  0, // 91
 0,  0,  0, // 92
 0,  0,  0, // 93
 0,  0,  0, // 94
 0,  0,  0, // 95
 0,  0,  0,  0, // 96
 0,  0,  0,  0, // 97
 0,  0,  0, // 98
 0,  0,  0, // 99
 0,  0,  0, // 100
 0,  0,  0, // 101
 0,  0, // 102
 0,  0,  0, // 103
 0,  0, // 104
 0,  0,  0, // 105
 0,  0,  0, // 106
 0,  0,  0, // 107
 0,  0,  0,  0, // 108
 0,  0,  0,  0,  0, // 109
 0,  0,  0, // 110
 0,  0,  0, // 111
 0,  0,  0,  0, // 112
 0,  0,  0,  0,  0, // 113
 0,  0, // 114
 0,  0,  0, // 115
 0,  0,  0, // 116
 0,  0,  0, // 117
 0,  0,  0,  0, // 118
 0,  0, // 119
 0,  0,  0, // 120
 0,  0,  0, // 121
 0,  0,  0,  0, // 122
 0,  0, // 123
 0,  0, // 124
 0,  0, // 125
 0,  0,  0, // 126
 0,  0,  0,  0, // 127
 0, // 128
 0,  0, // 129
 0,  0, // 130
 0,  0,  0, // 131
 0, // 132
 0,  0, // 133
 0,  0, // 134
 0,  0,  0, // 135
 0, // 136
 0,  0, // 137
 0,  0, // 138
 0,  0,  0, // 139
 0, // 140
 0, // 141
 0, // 142
 0, // 143
 0,  0, // 144
 0,  0, // 145
 0,  0,  0, // 146
 0,  0, // 147
 0, // 148
 0,  0, // 149
 0,  0, // 150
 0,  0,  0, // 151
 0,  0,  0, // 152
 0,  0,  0,  0, // 153
 0,  0,  0, // 154
 0,  0,  0,  0, // 155
 0,  0,  0,  0, // 156
 0,  0,  0,  0, // 157
 0,  0, // 158
 0,  0, // 159
 0,  0, // 160
 0,  0,  0, // 161
 0,  0,  0, // 162
 0,  0,  0, // 163
 0,  0,  0, // 164
 0,  0,  0, // 165
 0,  0,  0, // 166
 0,  0,  0, // 167
 0,  0,  0,  0, // 168
 0,  0,  0,  0, // 169
 0,  0,  0,  0, // 170
 0,  0,  0,  0, // 171
 0,  0,  0,  0, // 172
 0,  0,  0,  0,  0, // 173
 0,  0,  0,  0,  0, // 174
 0,  0,  0,  0,  0, // 175
 0,  0,  0, // 176
 0,  0,  0, // 177
 0,  0, // 178
 0,  0, // 179
 0,  0, // 180
 0,  0, // 181
 0,  0,  0, // 182
 0,  0,  0, // 183
 0,  0,  0, // 184
 0,  0,  0, // 185
 0,  0,  0, // 186
 0,  0,  0, // 187
 0,  0,  0, // 188
 0,  0,  0,  0, // 189
 0,  0,  0,  0, // 190
 0,  0,  0,  0, // 191
 0,  0,  0,  0, // 192
 0,  0,  0,  0, // 193
 0, // 194
 0,  0, // 195
 0, // 196
 0,  0, // 197
 0,  0, // 198
 0,  0, // 199
 0,  0, // 200
 0,  0, // 201
 0,  0, // 202
 0,  0, // 203
 0,  0, // 204
 0,  0, // 205
 0,  0, // 206
 0,  0,  0, // 207
 0,  0,  0, // 208
 0,  0,  0, // 209
 0,  0,  0, // 210
 0,  0,  0,  0, // 211
 0,  0,  0,  0, // 212
 0,  0,  0, // 213
 0,  0,  0, // 214
 0,  0, // 215
 0,  0, // 216
 0,  0, // 217
 0,  0,  0, // 218
 0,  0, // 219
 0,  0,  0, // 220
 0,  0, // 221
 0,  0, // 222
 0,  0,  0,  0, // 223
 0,  0,  0,  0,  0, // 224
 0,  0, // 225
 0,  0, // 226
 0,  0,  0,  0, // 227
 0,  0,  0,  0,  0, // 228
 0,  0, // 229
 0,  0,  0, // 230
 0,  0,  0,  0, // 231
 0,  0,  0,  0,  0, // 232
 0,  0,  0, // 233
 0,  0,  0,  0, // 234
 0,  0,  0,  0,  0, // 235
 0,  0,  0,  0,  0,  0, // 236
 0,  0,  0,  0, // 237
 0,  0,  0,  0,  0,  0, // 238
 0,  0, // 239
 0,  0,  0,  0, // 240
 0,  0,  0, // 241
 0,  0,  0,  0,  0, // 242
 0,  0,  0,  0,  0,  0, // 243
 0,  0,  0,  0,  0,  0, // 244
 0,  0,  0,  0,  0,  0, // 245
 0,  0,  0,  0,  0,  0,  0,  0, // 246
 0,  0,  0, // 247
 0,  0,  0,  0,  0, // 248
 0,  0,  0,  0, // 249
 0,  0,  0,  0,  0,  0,  0,  0, // 250
 0,  0,  0,  0,  0, // 251
 0,  0,  0,  0,  0,  0,  0,  0,  0,  0, // 252
 0,  0,  0,  0, // 253
 0,  0,  0,  0,  0,  0, // 254
 0,  0,  0,  0,  0, // 255
 0,  0,  0,  0,  0,  0,  0,  0,  0,  0, // 256
 0,  0,  0,  0,  0,  0, // 257
 0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, // 258
 0,  0,  0,  0,  0, // 259
 0,  0,  0,  0,  0,  0,  0, // 260
 0,  0,  0, // 261
 0,  0,  0,  0, // 262
 0,  0,  0,  0,  0, // 263
 0,  0,  0,  0,  0,  0, // 264
 0,  0,  0,  0,  0, // 265
 0,  0,  0,  0,  0,  0, // 266
 0,  0,  0,  0,  0,  0,  0, // 267
 0,  0,  0,  0,  0,  0,  0,  0, // 268
 0,  0,  0, // 269
 0,  0,  0,  0,  0, // 270
 0,  0,  0,  0, // 271
 0,  0,  0,  0,  0,  0, // 272
 0,  0,  0,  0,  0,  0, // 273
 0,  0,  0,  0,  0,  0,  0,  0, // 274
 0,  0,  0,  0, // 275
 0,  0,  0,  0,  0,  0, // 276
 0,  0,  0,  0,  0, // 277
 0,  0,  0,  0,  0,  0,  0, // 278
 0,  0,  0,  0,  0, // 279
 0,  0,  0,  0,  0,  0,  0, // 280
 0,  0,  0,  0,  0,  0, // 281
 0,  0,  0,  0,  0,  0,  0,  0, // 282
 0,  0,  0,  0,  0,  0, // 283
 0,  0,  0,  0,  0,  0,  0,  0, // 284
 0,  0, // 285
 0,  0, // 286
 0,  0,  0, // 287
 0,  0,  0, // 288
 0,  0,  0, // 289
 0,  0,  0, // 290
 0,  0,  0, // 291
 0,  0, // 292
 0, // 293
 0,  0, // 294
 0,  0, // 295
 0,  0, // 296
 0,  0,  0, // 297
 0,  0, // 298
 0,  0,  0, // 299
 0,  0,  0, // 300
 0,  0, // 301
 0,  0,  0,  0, // 302
 0,  0,  0,  0, // 303
 0,  0,  0,  0, // 304
 0,  0,  0,  0, // 305
 0,  0,  0,  0, // 306
 0,  0,  0, // 307
 0,  0,  0, // 308
 0,  0,  0, // 309
 0,  0,  0, // 310
 0,  0, // 311
 0,  0, // 312
 0,  0, // 313
 0,  0, // 314
 0,  0,  0, // 315
 0,  0,  0, // 316
 0,  0,  0, // 317
 0,  0,  0, // 318
 0,  0,  0, // 319
 0,  0,  0, // 320
 0,  0,  0, // 321
 0,  0,  0, // 322
 0,  0,  0, // 323
 0,  0,  0, // 324
 0,  0,  0, // 325
 0,  0,  0, // 326
 0,  0,  0, // 327
 0,  0,  0, // 328
 0,  0,  0,  0, // 329
 0,  0,  0,  0, // 330
 0,  0,  0, // 331
 0,  0,  0, // 332
 0,  0,  0, // 333
 0,  0,  0, // 334
 0,  0,  0,  0, // 335
 0,  0,  0,  0, // 336
 0,  0,  0,  0, // 337
 0,  0,  0,  0, // 338
 0,  0,  0, // 339
 0,  0,  0, // 340
 0,  0,  0, // 341
 0,  0,  0,  0, // 342
 0,  0,  0,  0,  0, // 343
 0,  0,  0,  0,  0,  0, // 344
 0,  0,  0,  0, // 345
 0,  0,  0,  0,  0, // 346
 0,  0,  0,  0,  0,  0, // 347
 0,  0,  0,  0,  0,  0,  0, // 348
 0, // 349
 0,  0, // 350
 0,  0, // 351
 0,  0,  0, // 352
 0, // 353
 0, // 354
 0, // 355
 0, // 356
CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::A9_LdBypass, // 357
 0,  0, // 358
 0,  0,  0, // 359
CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::A9_LdBypass, // 360
CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::A9_LdBypass, CortexA9ItinerariesBypass::A9_LdBypass, // 361
CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::A9_LdBypass, CortexA9ItinerariesBypass::NoBypass, // 362
CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::A9_LdBypass, // 363
CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::A9_LdBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, // 364
 0,  0, // 365
 0,  0,  0, // 366
 0,  0,  0, // 367
 0,  0,  0,  0, // 368
 0,  0, // 369
 0,  0, // 370
 0,  0, // 371
 0,  0,  0, // 372
 0,  0,  0,  0, // 373
CortexA9ItinerariesBypass::A9_LdBypass, // 374
CortexA9ItinerariesBypass::A9_LdBypass, CortexA9ItinerariesBypass::A9_LdBypass, // 375
CortexA9ItinerariesBypass::A9_LdBypass, CortexA9ItinerariesBypass::NoBypass, // 376
CortexA9ItinerariesBypass::A9_LdBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, // 377
 0, // 378
 0,  0, // 379
 0,  0, // 380
 0,  0,  0, // 381
 0, // 382
 0,  0, // 383
 0,  0, // 384
 0,  0,  0, // 385
 0, // 386
 0,  0,  0, // 387
 0,  0,  0,  0, // 388
 0,  0,  0, // 389
 0,  0,  0,  0, // 390
 0,  0,  0,  0, // 391
 0,  0,  0,  0, // 392
CortexA9ItinerariesBypass::A9_LdBypass,  0, // 393
CortexA9ItinerariesBypass::A9_LdBypass,  0, // 394
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0, // 395
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0, // 396
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0, // 397
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0,  0, // 398
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0, // 399
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0, // 400
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0, // 401
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0, // 402
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0,  0, // 403
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0,  0, // 404
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0,  0, // 405
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0,  0, // 406
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0,  0, // 407
CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::A9_LdBypass, // 408
CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::A9_LdBypass, // 409
CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::A9_LdBypass, // 410
CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::A9_LdBypass, // 411
CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::A9_LdBypass, // 412
 0,  0, // 413
 0,  0, // 414
 0,  0, // 415
 0,  0, // 416
 0,  0,  0, // 417
 0,  0,  0, // 418
 0,  0,  0, // 419
 0,  0,  0, // 420
 0,  0,  0, // 421
 0,  0,  0, // 422
 0,  0,  0, // 423
 0,  0,  0,  0, // 424
 0,  0,  0,  0, // 425
 0,  0,  0,  0, // 426
 0,  0,  0,  0, // 427
 0,  0,  0,  0, // 428
 0, // 429
 0,  0, // 430
 0, // 431
 0,  0, // 432
 0,  0, // 433
 0,  0, // 434
 0,  0, // 435
 0,  0, // 436
 0,  0, // 437
 0,  0, // 438
 0,  0, // 439
 0,  0, // 440
 0,  0, // 441
 0,  0, // 442
 0,  0, // 443
 0,  0,  0, // 444
 0,  0,  0, // 445
 0,  0,  0, // 446
 0,  0,  0, // 447
 0,  0,  0,  0, // 448
 0,  0,  0,  0, // 449
 0,  0,  0, // 450
 0,  0,  0, // 451
 0,  0, // 452
 0,  0, // 453
 0,  0, // 454
 0,  0,  0, // 455
 0,  0, // 456
 0,  0,  0, // 457
 0,  0, // 458
 0,  0, // 459
 0,  0,  0,  0, // 460
 0,  0,  0,  0, // 461
 0,  0, // 462
 0,  0, // 463
 0,  0,  0,  0, // 464
 0,  0,  0,  0, // 465
 0,  0, // 466
 0,  0,  0, // 467
 0,  0,  0,  0, // 468
 0,  0,  0,  0,  0, // 469
 0,  0,  0, // 470
 0,  0,  0,  0, // 471
 0,  0,  0,  0,  0, // 472
 0,  0,  0,  0,  0,  0, // 473
 0,  0,  0,  0, // 474
 0,  0,  0,  0,  0,  0, // 475
 0,  0, // 476
 0,  0,  0,  0, // 477
 0,  0,  0, // 478
 0,  0,  0,  0,  0, // 479
 0,  0,  0,  0,  0,  0, // 480
 0,  0,  0,  0,  0,  0, // 481
 0,  0,  0,  0,  0,  0, // 482
 0,  0,  0,  0,  0,  0,  0,  0, // 483
 0,  0,  0, // 484
 0,  0,  0,  0,  0, // 485
 0,  0,  0,  0, // 486
 0,  0,  0,  0,  0,  0,  0,  0, // 487
 0,  0,  0,  0,  0, // 488
 0,  0,  0,  0,  0,  0,  0,  0,  0,  0, // 489
 0,  0,  0,  0, // 490
 0,  0,  0,  0,  0,  0, // 491
 0,  0,  0,  0,  0, // 492
 0,  0,  0,  0,  0,  0,  0,  0,  0,  0, // 493
 0,  0,  0,  0,  0,  0, // 494
 0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, // 495
 0,  0,  0,  0,  0, // 496
 0,  0,  0,  0,  0,  0,  0, // 497
 0,  0,  0, // 498
 0,  0,  0,  0, // 499
 0,  0,  0,  0,  0, // 500
 0,  0,  0,  0,  0,  0, // 501
 0,  0,  0,  0,  0, // 502
 0,  0,  0,  0,  0,  0, // 503
 0,  0,  0,  0,  0,  0,  0, // 504
 0,  0,  0,  0,  0,  0,  0,  0, // 505
 0,  0,  0, // 506
 0,  0,  0,  0,  0, // 507
 0,  0,  0,  0, // 508
 0,  0,  0,  0,  0,  0, // 509
 0,  0,  0,  0,  0,  0, // 510
 0,  0,  0,  0,  0,  0,  0,  0, // 511
 0,  0,  0,  0, // 512
 0,  0,  0,  0,  0,  0, // 513
 0,  0,  0,  0,  0, // 514
 0,  0,  0,  0,  0,  0,  0, // 515
 0,  0,  0,  0,  0, // 516
 0,  0,  0,  0,  0,  0,  0, // 517
 0,  0,  0,  0,  0,  0, // 518
 0,  0,  0,  0,  0,  0,  0,  0, // 519
 0,  0,  0,  0,  0,  0, // 520
 0,  0,  0,  0,  0,  0,  0,  0, // 521
 0,  0, // 522
 0,  0, // 523
 0,  0, // 524
 0,  0, // 525
 0,  0,  0, // 526
 0,  0,  0, // 527
 0,  0,  0, // 528
 0,  0,  0, // 529
 0,  0,  0, // 530
 0,  0,  0, // 531
 0,  0,  0, // 532
 0,  0,  0, // 533
 0,  0,  0, // 534
 0,  0,  0, // 535
 0,  0,  0, // 536
 0,  0,  0, // 537
 0,  0,  0, // 538
 0,  0,  0, // 539
 0,  0,  0,  0, // 540
 0,  0,  0,  0, // 541
 0,  0,  0, // 542
 0,  0,  0, // 543
 0,  0,  0, // 544
 0,  0,  0, // 545
 0,  0,  0, // 546
 0,  0,  0, // 547
 0,  0,  0,  0, // 548
 0,  0,  0,  0, // 549
 0,  0,  0,  0, // 550
 0,  0,  0,  0, // 551
 0,  0, // 552
 0, // 553
 0,  0, // 554
 0,  0, // 555
 0,  0, // 556
 0,  0,  0, // 557
 0,  0, // 558
 0,  0,  0, // 559
 0,  0,  0, // 560
 0,  0, // 561
 0,  0, // 562
 0,  0, // 563
 0,  0,  0, // 564
 0,  0,  0, // 565
 0,  0,  0, // 566
 0,  0,  0, // 567
 0,  0,  0, // 568
 0,  0,  0,  0, // 569
 0,  0,  0,  0, // 570
 0,  0,  0, // 571
 0,  0,  0, // 572
 0,  0,  0,  0, // 573
 0,  0,  0,  0, // 574
 0,  0,  0,  0, // 575
 0,  0,  0, // 576
 0,  0,  0, // 577
 0,  0,  0, // 578
 0,  0,  0,  0, // 579
 0,  0,  0,  0,  0, // 580
 0,  0,  0,  0,  0,  0, // 581
 0,  0,  0,  0, // 582
 0,  0,  0,  0,  0, // 583
 0,  0,  0,  0,  0,  0, // 584
 0,  0,  0,  0,  0,  0,  0, // 585
  0 // End itinerary
};

enum {
  StagesSize = sizeof(Stages)/sizeof(llvm::InstrStage),
  OperandCyclesSize = sizeof(OperandCycles)/sizeof(unsigned)
};

static const llvm::InstrItinerary ARMV6Itineraries[] = {
  { 1, 1, 2, 0, 0 }, // 0
  { 1, 0, 0, 0, 0 }, // 1
  { 1, 0, 0, 0, 0 }, // 2
  { 1, 0, 0, 0, 0 }, // 3
  { 1, 0, 0, 0, 0 }, // 4
  { 1, 0, 0, 0, 0 }, // 5
  { 1, 0, 0, 0, 0 }, // 6
  { 1, 0, 0, 0, 0 }, // 7
  { 1, 0, 0, 0, 0 }, // 8
  { 1, 0, 0, 0, 0 }, // 9
  { 1, 0, 0, 0, 0 }, // 10
  { 1, 0, 0, 0, 0 }, // 11
  { 1, 0, 0, 0, 0 }, // 12
  { 1, 0, 0, 0, 0 }, // 13
  { 1, 0, 0, 0, 0 }, // 14
  { 1, 0, 0, 0, 0 }, // 15
  { 1, 0, 0, 0, 0 }, // 16
  { 1, 0, 0, 0, 0 }, // 17
  { 1, 0, 0, 0, 0 }, // 18
  { 1, 0, 0, 0, 0 }, // 19
  { 1, 0, 0, 0, 0 }, // 20
  { 1, 0, 0, 0, 0 }, // 21
  { 1, 0, 0, 0, 0 }, // 22
  { 1, 0, 0, 0, 0 }, // 23
  { 1, 0, 0, 0, 0 }, // 24
  { 1, 0, 0, 0, 0 }, // 25
  { 1, 0, 0, 0, 0 }, // 26
  { 1, 0, 0, 0, 0 }, // 27
  { 1, 0, 0, 0, 0 }, // 28
  { 1, 0, 0, 0, 0 }, // 29
  { 1, 0, 0, 0, 0 }, // 30
  { 1, 0, 0, 0, 0 }, // 31
  { 1, 0, 0, 0, 0 }, // 32
  { 1, 0, 0, 0, 0 }, // 33
  { 1, 0, 0, 0, 0 }, // 34
  { 1, 0, 0, 0, 0 }, // 35
  { 1, 0, 0, 0, 0 }, // 36
  { 1, 0, 0, 0, 0 }, // 37
  { 1, 0, 0, 0, 0 }, // 38
  { 1, 0, 0, 0, 0 }, // 39
  { 1, 0, 0, 0, 0 }, // 40
  { 1, 0, 0, 0, 0 }, // 41
  { 1, 0, 0, 0, 0 }, // 42
  { 1, 0, 0, 0, 0 }, // 43
  { 1, 0, 0, 0, 0 }, // 44
  { 1, 0, 0, 0, 0 }, // 45
  { 1, 0, 0, 0, 0 }, // 46
  { 1, 0, 0, 0, 0 }, // 47
  { 1, 0, 0, 0, 0 }, // 48
  { 1, 0, 0, 0, 0 }, // 49
  { 1, 0, 0, 0, 0 }, // 50
  { 1, 0, 0, 0, 0 }, // 51
  { 1, 0, 0, 0, 0 }, // 52
  { 1, 0, 0, 0, 0 }, // 53
  { 1, 0, 0, 0, 0 }, // 54
  { 1, 0, 0, 0, 0 }, // 55
  { 1, 0, 0, 0, 0 }, // 56
  { 1, 0, 0, 0, 0 }, // 57
  { 1, 0, 0, 0, 0 }, // 58
  { 1, 0, 0, 0, 0 }, // 59
  { 1, 0, 0, 0, 0 }, // 60
  { 1, 0, 0, 0, 0 }, // 61
  { 1, 0, 0, 0, 0 }, // 62
  { 1, 0, 0, 0, 0 }, // 63
  { 1, 0, 0, 0, 0 }, // 64
  { 1, 0, 0, 0, 0 }, // 65
  { 1, 0, 0, 0, 0 }, // 66
  { 1, 0, 0, 0, 0 }, // 67
  { 1, 0, 0, 0, 0 }, // 68
  { 1, 0, 0, 0, 0 }, // 69
  { 1, 0, 0, 0, 0 }, // 70
  { 1, 0, 0, 0, 0 }, // 71
  { 1, 0, 0, 0, 0 }, // 72
  { 1, 0, 0, 0, 0 }, // 73
  { 1, 0, 0, 0, 0 }, // 74
  { 1, 0, 0, 0, 0 }, // 75
  { 1, 0, 0, 0, 0 }, // 76
  { 1, 0, 0, 0, 0 }, // 77
  { 1, 0, 0, 0, 0 }, // 78
  { 1, 0, 0, 0, 0 }, // 79
  { 1, 0, 0, 0, 0 }, // 80
  { 1, 0, 0, 0, 0 }, // 81
  { 1, 0, 0, 0, 0 }, // 82
  { 1, 0, 0, 0, 0 }, // 83
  { 1, 0, 0, 0, 0 }, // 84
  { 1, 0, 0, 0, 0 }, // 85
  { 1, 0, 0, 0, 0 }, // 86
  { 1, 0, 0, 0, 0 }, // 87
  { 1, 0, 0, 0, 0 }, // 88
  { 1, 0, 0, 0, 0 }, // 89
  { 1, 0, 0, 0, 0 }, // 90
  { 1, 0, 0, 0, 0 }, // 91
  { 1, 0, 0, 0, 0 }, // 92
  { 1, 0, 0, 0, 0 }, // 93
  { 1, 0, 0, 0, 0 }, // 94
  { 1, 0, 0, 0, 0 }, // 95
  { 1, 0, 0, 0, 0 }, // 96
  { 1, 0, 0, 0, 0 }, // 97
  { 1, 0, 0, 0, 0 }, // 98
  { 1, 0, 0, 0, 0 }, // 99
  { 1, 0, 0, 0, 0 }, // 100
  { 1, 0, 0, 0, 0 }, // 101
  { 1, 0, 0, 0, 0 }, // 102
  { 1, 0, 0, 0, 0 }, // 103
  { 1, 0, 0, 0, 0 }, // 104
  { 1, 0, 0, 0, 0 }, // 105
  { 1, 0, 0, 0, 0 }, // 106
  { 1, 0, 0, 0, 0 }, // 107
  { 1, 0, 0, 0, 0 }, // 108
  { 1, 0, 0, 0, 0 }, // 109
  { 1, 0, 0, 0, 0 }, // 110
  { 1, 0, 0, 0, 0 }, // 111
  { 1, 0, 0, 0, 0 }, // 112
  { 1, 0, 0, 0, 0 }, // 113
  { 1, 0, 0, 0, 0 }, // 114
  { 1, 0, 0, 0, 0 }, // 115
  { 1, 0, 0, 0, 0 }, // 116
  { 1, 0, 0, 0, 0 }, // 117
  { 1, 0, 0, 0, 0 }, // 118
  { 1, 0, 0, 0, 0 }, // 119
  { 1, 0, 0, 0, 0 }, // 120
  { 1, 0, 0, 0, 0 }, // 121
  { 1, 1, 2, 242, 245 }, // 122
  { 1, 1, 2, 245, 248 }, // 123
  { 1, 1, 2, 226, 228 }, // 124
  { 1, 1, 2, 228, 230 }, // 125
  { 1, 1, 2, 236, 238 }, // 126
  { 1, 1, 2, 232, 234 }, // 127
  { 1, 0, 0, 0, 0 }, // 128
  { 1, 1, 2, 240, 242 }, // 129
  { 1, 1, 2, 238, 240 }, // 130
  { 1, 1, 2, 230, 232 }, // 131
  { 1, 0, 0, 0, 0 }, // 132
  { 1, 1, 2, 234, 236 }, // 133
  { 1, 11, 12, 262, 265 }, // 134
  { 1, 12, 13, 265, 268 }, // 135
  { 1, 1, 2, 284, 287 }, // 136
  { 1, 1, 2, 287, 290 }, // 137
  { 0, 8, 9, 290, 294 }, // 138
  { 0, 8, 9, 294, 299 }, // 139
  { 1, 1, 2, 254, 258 }, // 140
  { 1, 2, 3, 258, 262 }, // 141
  { 1, 1, 2, 281, 284 }, // 142
  { 1, 1, 2, 276, 279 }, // 143
  { 1, 1, 2, 274, 276 }, // 144
  { 1, 1, 2, 279, 281 }, // 145
  { 1, 1, 2, 248, 251 }, // 146
  { 1, 2, 3, 251, 254 }, // 147
  { 1, 11, 12, 268, 271 }, // 148
  { 1, 12, 13, 271, 274 }, // 149
  { 1, 1, 2, 221, 222 }, // 150
  { 1, 1, 2, 299, 302 }, // 151
  { 1, 1, 2, 302, 305 }, // 152
  { 0, 8, 9, 305, 309 }, // 153
  { 0, 8, 9, 309, 314 }, // 154
  { 1, 1, 2, 222, 224 }, // 155
  { 1, 1, 2, 224, 226 }, // 156
  { 1, 1, 2, 1, 3 }, // 157
  { 1, 1, 2, 3, 6 }, // 158
  { 1, 1, 2, 6, 9 }, // 159
  { 1, 0, 0, 0, 0 }, // 160
  { 1, 2, 3, 9, 13 }, // 161
  { 1, 1, 2, 0, 0 }, // 162
  { 1, 1, 2, 13, 15 }, // 163
  { 1, 1, 2, 15, 18 }, // 164
  { 1, 1, 2, 18, 21 }, // 165
  { 1, 2, 3, 21, 25 }, // 166
  { 1, 1, 2, 65, 66 }, // 167
  { 1, 3, 5, 73, 74 }, // 168
  { 1, 1, 2, 66, 68 }, // 169
  { 1, 1, 2, 68, 70 }, // 170
  { 1, 1, 2, 70, 73 }, // 171
  { 1, 1, 2, 38, 39 }, // 172
  { 1, 1, 2, 39, 41 }, // 173
  { 1, 1, 2, 41, 43 }, // 174
  { 1, 2, 3, 43, 46 }, // 175
  { 1, 1, 2, 31, 34 }, // 176
  { 1, 2, 3, 34, 38 }, // 177
  { 1, 1, 2, 29, 31 }, // 178
  { 1, 1, 2, 105, 107 }, // 179
  { 1, 1, 2, 127, 130 }, // 180
  { 1, 1, 2, 112, 115 }, // 181
  { 1, 1, 2, 134, 138 }, // 182
  { 1, 2, 3, 121, 124 }, // 183
  { 1, 2, 3, 146, 150 }, // 184
  { 1, 1, 2, 107, 109 }, // 185
  { 1, 1, 2, 115, 118 }, // 186
  { 1, 1, 2, 138, 142 }, // 187
  { 1, 1, 2, 103, 105 }, // 188
  { 1, 1, 2, 124, 127 }, // 189
  { 0, 8, 9, 150, 155 }, // 190
  { 0, 9, 11, 160, 165 }, // 191
  { 0, 8, 9, 155, 160 }, // 192
  { 1, 1, 2, 109, 112 }, // 193
  { 1, 1, 2, 130, 134 }, // 194
  { 1, 2, 3, 118, 121 }, // 195
  { 1, 2, 3, 142, 146 }, // 196
  { 1, 3, 5, 165, 167 }, // 197
  { 1, 1, 2, 85, 89 }, // 198
  { 1, 2, 3, 92, 96 }, // 199
  { 1, 8, 9, 99, 103 }, // 200
  { 1, 1, 2, 54, 55 }, // 201
  { 1, 3, 5, 62, 63 }, // 202
  { 1, 5, 8, 63, 64 }, // 203
  { 1, 5, 8, 64, 65 }, // 204
  { 1, 1, 2, 55, 57 }, // 205
  { 1, 1, 2, 57, 59 }, // 206
  { 1, 2, 3, 59, 62 }, // 207
  { 1, 1, 2, 82, 85 }, // 208
  { 1, 2, 3, 89, 92 }, // 209
  { 1, 8, 9, 96, 99 }, // 210
  { 1, 1, 2, 74, 75 }, // 211
  { 1, 1, 2, 75, 77 }, // 212
  { 1, 1, 2, 77, 79 }, // 213
  { 1, 2, 3, 79, 82 }, // 214
  { 0, 8, 9, 167, 170 }, // 215
  { 0, 9, 11, 170, 173 }, // 216
  { 1, 1, 2, 175, 177 }, // 217
  { 1, 1, 2, 197, 200 }, // 218
  { 1, 1, 2, 182, 185 }, // 219
  { 1, 1, 2, 204, 208 }, // 220
  { 1, 2, 3, 191, 194 }, // 221
  { 1, 2, 3, 216, 220 }, // 222
  { 1, 1, 2, 177, 179 }, // 223
  { 1, 1, 2, 185, 188 }, // 224
  { 1, 1, 2, 208, 212 }, // 225
  { 1, 1, 2, 173, 175 }, // 226
  { 1, 1, 2, 194, 197 }, // 227
  { 0, 8, 9, 0, 0 }, // 228
  { 0, 8, 9, 220, 221 }, // 229
  { 1, 1, 2, 179, 182 }, // 230
  { 1, 1, 2, 200, 204 }, // 231
  { 1, 2, 3, 188, 191 }, // 232
  { 1, 2, 3, 212, 216 }, // 233
  { 1, 1, 2, 46, 47 }, // 234
  { 1, 1, 2, 47, 49 }, // 235
  { 1, 1, 2, 49, 51 }, // 236
  { 1, 2, 3, 51, 54 }, // 237
  { 1, 1, 2, 25, 27 }, // 238
  { 1, 1, 2, 27, 29 }, // 239
  { 1, 0, 0, 0, 0 }, // 240
  { 1, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary CortexA8Itineraries[] = {
  { 1, 13, 14, 0, 0 }, // 0
  { 1, 13, 14, 539, 541 }, // 1
  { 1, 43, 45, 1061, 1065 }, // 2
  { 1, 98, 100, 1065, 1069 }, // 3
  { 1, 43, 45, 942, 945 }, // 4
  { 1, 98, 100, 951, 954 }, // 5
  { 1, 43, 45, 1025, 1028 }, // 6
  { 1, 43, 45, 1028, 1031 }, // 7
  { 1, 43, 45, 1019, 1022 }, // 8
  { 1, 43, 45, 1022, 1025 }, // 9
  { 1, 43, 45, 1005, 1008 }, // 10
  { 1, 98, 100, 1008, 1011 }, // 11
  { 1, 41, 43, 1097, 1100 }, // 12
  { 1, 100, 102, 1100, 1103 }, // 13
  { 1, 43, 45, 948, 951 }, // 14
  { 1, 43, 45, 954, 957 }, // 15
  { 1, 80, 83, 628, 630 }, // 16
  { 1, 89, 92, 670, 672 }, // 17
  { 1, 89, 92, 672, 676 }, // 18
  { 1, 86, 89, 660, 664 }, // 19
  { 1, 86, 89, 664, 670 }, // 20
  { 1, 80, 83, 642, 645 }, // 21
  { 1, 80, 83, 630, 633 }, // 22
  { 1, 80, 83, 645, 649 }, // 23
  { 1, 83, 86, 633, 637 }, // 24
  { 1, 83, 86, 649, 654 }, // 25
  { 1, 83, 86, 637, 642 }, // 26
  { 1, 83, 86, 654, 660 }, // 27
  { 1, 80, 83, 676, 679 }, // 28
  { 1, 89, 92, 710, 713 }, // 29
  { 1, 89, 92, 713, 718 }, // 30
  { 1, 83, 86, 684, 690 }, // 31
  { 1, 83, 86, 702, 710 }, // 32
  { 1, 80, 83, 690, 696 }, // 33
  { 1, 83, 86, 679, 684 }, // 34
  { 1, 83, 86, 696, 702 }, // 35
  { 1, 92, 95, 718, 722 }, // 36
  { 1, 86, 89, 745, 749 }, // 37
  { 1, 86, 89, 749, 755 }, // 38
  { 1, 95, 98, 722, 730 }, // 39
  { 1, 95, 98, 735, 745 }, // 40
  { 1, 92, 95, 730, 735 }, // 41
  { 1, 92, 95, 755, 760 }, // 42
  { 1, 86, 89, 788, 793 }, // 43
  { 1, 86, 89, 793, 800 }, // 44
  { 1, 95, 98, 760, 770 }, // 45
  { 1, 95, 98, 776, 788 }, // 46
  { 1, 92, 95, 770, 776 }, // 47
  { 1, 43, 45, 991, 995 }, // 48
  { 1, 98, 100, 995, 999 }, // 49
  { 1, 43, 45, 1081, 1085 }, // 50
  { 1, 98, 100, 1089, 1093 }, // 51
  { 1, 98, 100, 1085, 1089 }, // 52
  { 1, 106, 110, 1093, 1097 }, // 53
  { 1, 43, 45, 957, 959 }, // 54
  { 1, 41, 43, 960, 962 }, // 55
  { 1, 41, 43, 971, 974 }, // 56
  { 1, 41, 43, 966, 969 }, // 57
  { 1, 41, 43, 964, 966 }, // 58
  { 1, 100, 102, 974, 977 }, // 59
  { 1, 43, 45, 959, 960 }, // 60
  { 1, 43, 45, 977, 979 }, // 61
  { 1, 100, 102, 962, 964 }, // 62
  { 1, 41, 43, 969, 971 }, // 63
  { 1, 43, 45, 1069, 1072 }, // 64
  { 1, 98, 100, 1075, 1078 }, // 65
  { 1, 98, 100, 1072, 1075 }, // 66
  { 1, 106, 110, 1078, 1081 }, // 67
  { 1, 43, 45, 1055, 1058 }, // 68
  { 1, 98, 100, 1058, 1061 }, // 69
  { 1, 43, 45, 945, 948 }, // 70
  { 1, 41, 43, 979, 983 }, // 71
  { 1, 100, 102, 983, 987 }, // 72
  { 1, 102, 106, 987, 991 }, // 73
  { 1, 43, 45, 1015, 1017 }, // 74
  { 1, 43, 45, 1017, 1019 }, // 75
  { 1, 43, 45, 999, 1002 }, // 76
  { 1, 98, 100, 1002, 1005 }, // 77
  { 1, 43, 45, 1049, 1052 }, // 78
  { 1, 98, 100, 1052, 1055 }, // 79
  { 1, 43, 45, 1043, 1046 }, // 80
  { 1, 98, 100, 1046, 1049 }, // 81
  { 1, 80, 83, 800, 803 }, // 82
  { 1, 89, 92, 844, 847 }, // 83
  { 1, 89, 92, 847, 852 }, // 84
  { 1, 80, 83, 818, 823 }, // 85
  { 1, 80, 83, 803, 807 }, // 86
  { 1, 80, 83, 823, 829 }, // 87
  { 1, 83, 86, 807, 812 }, // 88
  { 1, 83, 86, 829, 836 }, // 89
  { 1, 83, 86, 812, 818 }, // 90
  { 1, 83, 86, 836, 844 }, // 91
  { 1, 80, 83, 852, 856 }, // 92
  { 1, 80, 83, 876, 880 }, // 93
  { 1, 80, 83, 880, 886 }, // 94
  { 1, 80, 83, 862, 868 }, // 95
  { 1, 92, 95, 856, 862 }, // 96
  { 1, 92, 95, 868, 876 }, // 97
  { 1, 83, 86, 886, 891 }, // 98
  { 1, 83, 86, 898, 903 }, // 99
  { 1, 83, 86, 903, 910 }, // 100
  { 1, 83, 86, 891, 898 }, // 101
  { 1, 92, 95, 910, 916 }, // 102
  { 1, 92, 95, 924, 930 }, // 103
  { 1, 92, 95, 930, 938 }, // 104
  { 1, 92, 95, 916, 924 }, // 105
  { 1, 43, 45, 1037, 1040 }, // 106
  { 1, 43, 45, 1040, 1043 }, // 107
  { 1, 43, 45, 1031, 1034 }, // 108
  { 1, 43, 45, 1034, 1037 }, // 109
  { 1, 100, 102, 1103, 1106 }, // 110
  { 1, 100, 102, 1106, 1110 }, // 111
  { 1, 102, 106, 1110, 1115 }, // 112
  { 1, 102, 106, 1115, 1121 }, // 113
  { 1, 100, 102, 1121, 1125 }, // 114
  { 1, 100, 102, 1125, 1130 }, // 115
  { 1, 102, 106, 1130, 1136 }, // 116
  { 1, 102, 106, 1136, 1143 }, // 117
  { 1, 43, 45, 938, 940 }, // 118
  { 1, 98, 100, 940, 942 }, // 119
  { 1, 43, 45, 1011, 1013 }, // 120
  { 1, 43, 45, 1013, 1015 }, // 121
  { 1, 43, 45, 562, 565 }, // 122
  { 1, 57, 60, 565, 568 }, // 123
  { 1, 43, 45, 546, 548 }, // 124
  { 1, 45, 48, 548, 550 }, // 125
  { 1, 54, 57, 556, 558 }, // 126
  { 1, 51, 54, 552, 554 }, // 127
  { 1, 0, 0, 0, 0 }, // 128
  { 1, 54, 57, 560, 562 }, // 129
  { 1, 43, 45, 558, 560 }, // 130
  { 1, 48, 51, 550, 552 }, // 131
  { 1, 0, 0, 0, 0 }, // 132
  { 1, 43, 45, 554, 556 }, // 133
  { 1, 66, 69, 582, 585 }, // 134
  { 1, 69, 72, 585, 588 }, // 135
  { 1, 72, 75, 602, 604 }, // 136
  { 1, 72, 75, 604, 606 }, // 137
  { 0, 75, 80, 606, 610 }, // 138
  { 0, 75, 80, 610, 615 }, // 139
  { 1, 43, 45, 574, 578 }, // 140
  { 1, 63, 66, 578, 582 }, // 141
  { 1, 43, 45, 599, 602 }, // 142
  { 1, 43, 45, 594, 597 }, // 143
  { 1, 43, 45, 592, 594 }, // 144
  { 1, 43, 45, 597, 599 }, // 145
  { 1, 43, 45, 568, 571 }, // 146
  { 1, 60, 63, 571, 574 }, // 147
  { 1, 63, 66, 588, 590 }, // 148
  { 1, 69, 72, 590, 592 }, // 149
  { 1, 41, 43, 541, 542 }, // 150
  { 1, 72, 75, 615, 617 }, // 151
  { 1, 72, 75, 617, 619 }, // 152
  { 0, 75, 80, 619, 623 }, // 153
  { 0, 75, 80, 623, 628 }, // 154
  { 1, 43, 45, 542, 544 }, // 155
  { 1, 45, 48, 544, 546 }, // 156
  { 1, 13, 14, 314, 316 }, // 157
  { 1, 13, 14, 316, 319 }, // 158
  { 1, 13, 14, 319, 322 }, // 159
  { 1, 13, 14, 322, 325 }, // 160
  { 1, 13, 14, 325, 329 }, // 161
  { 1, 13, 14, 0, 0 }, // 162
  { 1, 13, 14, 329, 331 }, // 163
  { 1, 13, 14, 331, 334 }, // 164
  { 1, 13, 14, 334, 337 }, // 165
  { 1, 13, 14, 337, 341 }, // 166
  { 1, 13, 14, 381, 382 }, // 167
  { 1, 14, 16, 389, 391 }, // 168
  { 1, 13, 14, 382, 384 }, // 169
  { 1, 13, 14, 384, 386 }, // 170
  { 1, 13, 14, 386, 389 }, // 171
  { 1, 13, 14, 354, 355 }, // 172
  { 1, 13, 14, 355, 357 }, // 173
  { 1, 13, 14, 357, 359 }, // 174
  { 1, 13, 14, 359, 362 }, // 175
  { 1, 13, 14, 347, 350 }, // 176
  { 1, 13, 14, 350, 354 }, // 177
  { 1, 13, 14, 345, 347 }, // 178
  { 1, 25, 27, 423, 425 }, // 179
  { 1, 25, 27, 445, 448 }, // 180
  { 1, 25, 27, 430, 433 }, // 181
  { 1, 25, 27, 452, 456 }, // 182
  { 1, 27, 29, 439, 442 }, // 183
  { 1, 29, 31, 464, 468 }, // 184
  { 1, 25, 27, 425, 427 }, // 185
  { 1, 25, 27, 433, 436 }, // 186
  { 1, 25, 27, 456, 460 }, // 187
  { 1, 25, 27, 421, 423 }, // 188
  { 1, 25, 27, 442, 445 }, // 189
  { 0, 31, 33, 468, 473 }, // 190
  { 0, 35, 38, 478, 483 }, // 191
  { 0, 33, 35, 473, 478 }, // 192
  { 1, 25, 27, 427, 430 }, // 193
  { 1, 25, 27, 448, 452 }, // 194
  { 1, 27, 29, 436, 439 }, // 195
  { 1, 29, 31, 460, 464 }, // 196
  { 1, 38, 41, 489, 491 }, // 197
  { 1, 23, 24, 402, 406 }, // 198
  { 1, 23, 24, 409, 413 }, // 199
  { 1, 24, 25, 417, 421 }, // 200
  { 1, 13, 14, 370, 371 }, // 201
  { 1, 14, 16, 378, 379 }, // 202
  { 1, 16, 19, 379, 380 }, // 203
  { 1, 19, 22, 380, 381 }, // 204
  { 1, 13, 14, 371, 373 }, // 205
  { 1, 13, 14, 373, 375 }, // 206
  { 1, 13, 14, 375, 378 }, // 207
  { 1, 22, 23, 399, 402 }, // 208
  { 1, 23, 24, 406, 409 }, // 209
  { 1, 24, 25, 413, 417 }, // 210
  { 1, 13, 14, 391, 392 }, // 211
  { 1, 13, 14, 392, 394 }, // 212
  { 1, 13, 14, 394, 396 }, // 213
  { 1, 13, 14, 396, 399 }, // 214
  { 0, 33, 35, 483, 486 }, // 215
  { 0, 35, 38, 486, 489 }, // 216
  { 1, 25, 27, 493, 495 }, // 217
  { 1, 25, 27, 515, 518 }, // 218
  { 1, 25, 27, 500, 503 }, // 219
  { 1, 25, 27, 522, 526 }, // 220
  { 1, 29, 31, 509, 512 }, // 221
  { 1, 29, 31, 534, 538 }, // 222
  { 1, 25, 27, 495, 497 }, // 223
  { 1, 25, 27, 503, 506 }, // 224
  { 1, 25, 27, 526, 530 }, // 225
  { 1, 25, 27, 491, 493 }, // 226
  { 1, 25, 27, 512, 515 }, // 227
  { 0, 31, 33, 0, 0 }, // 228
  { 0, 31, 33, 538, 539 }, // 229
  { 1, 25, 27, 497, 500 }, // 230
  { 1, 25, 27, 518, 522 }, // 231
  { 1, 29, 31, 506, 509 }, // 232
  { 1, 29, 31, 530, 534 }, // 233
  { 1, 13, 14, 362, 363 }, // 234
  { 1, 13, 14, 363, 365 }, // 235
  { 1, 13, 14, 365, 367 }, // 236
  { 1, 13, 14, 367, 370 }, // 237
  { 1, 13, 14, 341, 343 }, // 238
  { 1, 13, 14, 343, 345 }, // 239
  { 1, 0, 0, 0, 0 }, // 240
  { 1, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary CortexA9Itineraries[] = {
  { 1, 177, 180, 0, 0 }, // 0
  { 1, 176, 177, 1369, 1371 }, // 1
  { 1, 283, 288, 1820, 1824 }, // 2
  { 1, 293, 298, 1824, 1828 }, // 3
  { 1, 283, 288, 1888, 1891 }, // 4
  { 1, 288, 293, 1897, 1900 }, // 5
  { 1, 283, 288, 1802, 1805 }, // 6
  { 1, 283, 288, 1805, 1808 }, // 7
  { 1, 283, 288, 1778, 1781 }, // 8
  { 1, 283, 288, 1781, 1784 }, // 9
  { 1, 283, 288, 1814, 1817 }, // 10
  { 1, 288, 293, 1817, 1820 }, // 11
  { 1, 283, 288, 1929, 1932 }, // 12
  { 1, 288, 293, 1932, 1935 }, // 13
  { 1, 283, 288, 1894, 1897 }, // 14
  { 1, 318, 323, 1900, 1903 }, // 15
  { 1, 241, 247, 1460, 1462 }, // 16
  { 1, 241, 247, 1502, 1504 }, // 17
  { 1, 241, 247, 1504, 1508 }, // 18
  { 1, 247, 253, 1492, 1496 }, // 19
  { 1, 247, 253, 1496, 1502 }, // 20
  { 1, 241, 247, 1474, 1477 }, // 21
  { 1, 241, 247, 1462, 1465 }, // 22
  { 1, 241, 247, 1477, 1481 }, // 23
  { 1, 247, 253, 1465, 1469 }, // 24
  { 1, 247, 253, 1481, 1486 }, // 25
  { 1, 247, 253, 1469, 1474 }, // 26
  { 1, 247, 253, 1486, 1492 }, // 27
  { 1, 241, 247, 1508, 1511 }, // 28
  { 1, 241, 247, 1542, 1545 }, // 29
  { 1, 241, 247, 1545, 1550 }, // 30
  { 1, 247, 253, 1516, 1522 }, // 31
  { 1, 247, 253, 1534, 1542 }, // 32
  { 1, 241, 247, 1522, 1528 }, // 33
  { 1, 247, 253, 1511, 1516 }, // 34
  { 1, 247, 253, 1528, 1534 }, // 35
  { 1, 253, 259, 1550, 1554 }, // 36
  { 1, 247, 253, 1577, 1581 }, // 37
  { 1, 247, 253, 1581, 1587 }, // 38
  { 1, 259, 265, 1554, 1562 }, // 39
  { 1, 259, 265, 1567, 1577 }, // 40
  { 1, 253, 259, 1562, 1567 }, // 41
  { 1, 253, 259, 1587, 1592 }, // 42
  { 1, 247, 253, 1620, 1625 }, // 43
  { 1, 247, 253, 1625, 1632 }, // 44
  { 1, 259, 265, 1592, 1602 }, // 45
  { 1, 259, 265, 1608, 1620 }, // 46
  { 1, 253, 259, 1602, 1608 }, // 47
  { 1, 288, 293, 1903, 1907 }, // 48
  { 1, 298, 303, 1907, 1911 }, // 49
  { 1, 283, 288, 1846, 1850 }, // 50
  { 1, 288, 293, 1854, 1858 }, // 51
  { 1, 288, 293, 1850, 1854 }, // 52
  { 1, 298, 303, 1858, 1862 }, // 53
  { 1, 303, 308, 1862, 1864 }, // 54
  { 1, 283, 288, 1865, 1867 }, // 55
  { 1, 308, 313, 1876, 1879 }, // 56
  { 1, 308, 313, 1871, 1874 }, // 57
  { 1, 308, 313, 1869, 1871 }, // 58
  { 1, 313, 318, 1879, 1882 }, // 59
  { 1, 283, 288, 1864, 1865 }, // 60
  { 1, 283, 288, 1882, 1884 }, // 61
  { 1, 283, 288, 1867, 1869 }, // 62
  { 1, 308, 313, 1874, 1876 }, // 63
  { 1, 283, 288, 1834, 1837 }, // 64
  { 1, 288, 293, 1837, 1840 }, // 65
  { 1, 288, 293, 1840, 1843 }, // 66
  { 1, 298, 303, 1843, 1846 }, // 67
  { 1, 283, 288, 1828, 1831 }, // 68
  { 1, 293, 298, 1831, 1834 }, // 69
  { 1, 283, 288, 1891, 1894 }, // 70
  { 1, 283, 288, 1917, 1921 }, // 71
  { 1, 288, 293, 1921, 1925 }, // 72
  { 1, 333, 338, 1925, 1929 }, // 73
  { 1, 283, 288, 1774, 1776 }, // 74
  { 1, 283, 288, 1776, 1778 }, // 75
  { 1, 323, 328, 1911, 1914 }, // 76
  { 1, 328, 333, 1914, 1917 }, // 77
  { 1, 283, 288, 1796, 1799 }, // 78
  { 1, 283, 288, 1799, 1802 }, // 79
  { 1, 283, 288, 1790, 1793 }, // 80
  { 1, 283, 288, 1793, 1796 }, // 81
  { 1, 265, 271, 1632, 1635 }, // 82
  { 1, 265, 271, 1676, 1679 }, // 83
  { 1, 271, 277, 1679, 1684 }, // 84
  { 1, 265, 271, 1650, 1655 }, // 85
  { 1, 265, 271, 1635, 1639 }, // 86
  { 1, 265, 271, 1655, 1661 }, // 87
  { 1, 271, 277, 1639, 1644 }, // 88
  { 1, 277, 283, 1661, 1668 }, // 89
  { 1, 271, 277, 1644, 1650 }, // 90
  { 1, 271, 277, 1668, 1676 }, // 91
  { 1, 265, 271, 1684, 1688 }, // 92
  { 1, 265, 271, 1708, 1712 }, // 93
  { 1, 271, 277, 1712, 1718 }, // 94
  { 1, 265, 271, 1694, 1700 }, // 95
  { 1, 271, 277, 1688, 1694 }, // 96
  { 1, 271, 277, 1700, 1708 }, // 97
  { 1, 271, 277, 1718, 1723 }, // 98
  { 1, 271, 277, 1730, 1735 }, // 99
  { 1, 271, 277, 1735, 1742 }, // 100
  { 1, 271, 277, 1723, 1730 }, // 101
  { 1, 271, 277, 1742, 1748 }, // 102
  { 1, 271, 277, 1756, 1762 }, // 103
  { 1, 271, 277, 1762, 1770 }, // 104
  { 1, 271, 277, 1748, 1756 }, // 105
  { 1, 283, 288, 1808, 1811 }, // 106
  { 1, 283, 288, 1811, 1814 }, // 107
  { 1, 283, 288, 1784, 1787 }, // 108
  { 1, 283, 288, 1787, 1790 }, // 109
  { 1, 288, 293, 1935, 1938 }, // 110
  { 1, 338, 343, 1938, 1942 }, // 111
  { 1, 343, 348, 1942, 1947 }, // 112
  { 1, 333, 338, 1947, 1953 }, // 113
  { 1, 288, 293, 1953, 1957 }, // 114
  { 1, 288, 293, 1957, 1962 }, // 115
  { 1, 333, 338, 1962, 1968 }, // 116
  { 1, 348, 353, 1968, 1975 }, // 117
  { 1, 283, 288, 1884, 1886 }, // 118
  { 1, 288, 293, 1886, 1888 }, // 119
  { 1, 283, 288, 1770, 1772 }, // 120
  { 1, 283, 288, 1772, 1774 }, // 121
  { 1, 190, 195, 1396, 1399 }, // 122
  { 1, 190, 195, 1399, 1402 }, // 123
  { 1, 190, 195, 1376, 1378 }, // 124
  { 1, 190, 195, 1378, 1380 }, // 125
  { 1, 190, 195, 1390, 1392 }, // 126
  { 1, 190, 195, 1382, 1384 }, // 127
  { 1, 185, 190, 1386, 1388 }, // 128
  { 1, 190, 195, 1394, 1396 }, // 129
  { 1, 190, 195, 1392, 1394 }, // 130
  { 1, 190, 195, 1380, 1382 }, // 131
  { 1, 190, 195, 1384, 1386 }, // 132
  { 1, 190, 195, 1388, 1390 }, // 133
  { 1, 215, 220, 1416, 1419 }, // 134
  { 1, 220, 225, 1419, 1422 }, // 135
  { 1, 235, 241, 1436, 1438 }, // 136
  { 1, 235, 241, 1438, 1440 }, // 137
  { 0, 235, 241, 1440, 1444 }, // 138
  { 0, 235, 241, 1444, 1448 }, // 139
  { 1, 205, 210, 1408, 1412 }, // 140
  { 1, 210, 215, 1412, 1416 }, // 141
  { 1, 180, 185, 1433, 1436 }, // 142
  { 1, 185, 190, 1428, 1431 }, // 143
  { 1, 185, 190, 1426, 1428 }, // 144
  { 1, 180, 185, 1431, 1433 }, // 145
  { 1, 195, 200, 1402, 1405 }, // 146
  { 1, 200, 205, 1405, 1408 }, // 147
  { 1, 225, 230, 1422, 1424 }, // 148
  { 1, 230, 235, 1424, 1426 }, // 149
  { 1, 180, 185, 1371, 1372 }, // 150
  { 1, 235, 241, 1448, 1450 }, // 151
  { 1, 235, 241, 1450, 1452 }, // 152
  { 0, 235, 241, 1452, 1456 }, // 153
  { 0, 235, 241, 1456, 1460 }, // 154
  { 1, 185, 190, 1372, 1374 }, // 155
  { 1, 185, 190, 1374, 1376 }, // 156
  { 1, 110, 112, 1162, 1164 }, // 157
  { 1, 110, 112, 1164, 1167 }, // 158
  { 1, 112, 114, 1167, 1170 }, // 159
  { 1, 112, 114, 1170, 1173 }, // 160
  { 1, 127, 129, 1173, 1177 }, // 161
  { 1, 110, 112, 0, 0 }, // 162
  { 1, 110, 112, 1177, 1179 }, // 163
  { 1, 110, 112, 1179, 1182 }, // 164
  { 1, 112, 114, 1182, 1185 }, // 165
  { 1, 127, 129, 1185, 1189 }, // 166
  { 1, 110, 112, 1218, 1219 }, // 167
  { 1, 129, 133, 1226, 1227 }, // 168
  { 1, 110, 112, 1219, 1221 }, // 169
  { 1, 110, 112, 1221, 1223 }, // 170
  { 1, 112, 114, 1223, 1226 }, // 171
  { 1, 110, 112, 1202, 1203 }, // 172
  { 1, 110, 112, 1203, 1205 }, // 173
  { 1, 112, 114, 1205, 1207 }, // 174
  { 1, 127, 129, 1207, 1210 }, // 175
  { 1, 112, 114, 1195, 1198 }, // 176
  { 1, 127, 129, 1198, 1202 }, // 177
  { 1, 110, 112, 1193, 1195 }, // 178
  { 1, 141, 145, 1251, 1253 }, // 179
  { 1, 141, 145, 1275, 1278 }, // 180
  { 1, 141, 145, 1259, 1262 }, // 181
  { 1, 141, 145, 1282, 1286 }, // 182
  { 1, 141, 145, 1269, 1272 }, // 183
  { 1, 141, 145, 1294, 1298 }, // 184
  { 1, 141, 145, 1253, 1256 }, // 185
  { 1, 141, 145, 1262, 1266 }, // 186
  { 1, 141, 145, 1286, 1290 }, // 187
  { 1, 137, 141, 1249, 1251 }, // 188
  { 1, 137, 141, 1272, 1275 }, // 189
  { 0, 149, 153, 1298, 1303 }, // 190
  { 0, 153, 158, 1308, 1313 }, // 191
  { 0, 149, 153, 1303, 1308 }, // 192
  { 1, 137, 141, 1256, 1259 }, // 193
  { 1, 137, 141, 1278, 1282 }, // 194
  { 1, 145, 149, 1266, 1269 }, // 195
  { 1, 137, 141, 1290, 1294 }, // 196
  { 1, 163, 168, 1319, 1321 }, // 197
  { 1, 133, 135, 1230, 1234 }, // 198
  { 1, 133, 135, 1237, 1241 }, // 199
  { 1, 135, 137, 1245, 1249 }, // 200
  { 1, 110, 112, 1143, 1144 }, // 201
  { 1, 114, 117, 1151, 1152 }, // 202
  { 1, 117, 121, 1152, 1153 }, // 203
  { 1, 121, 127, 1153, 1154 }, // 204
  { 1, 110, 112, 1144, 1146 }, // 205
  { 1, 110, 112, 1146, 1148 }, // 206
  { 1, 112, 114, 1148, 1151 }, // 207
  { 1, 133, 135, 1227, 1230 }, // 208
  { 1, 133, 135, 1234, 1237 }, // 209
  { 1, 135, 137, 1241, 1245 }, // 210
  { 1, 110, 112, 1154, 1155 }, // 211
  { 1, 110, 112, 1155, 1157 }, // 212
  { 1, 112, 114, 1157, 1159 }, // 213
  { 1, 127, 129, 1159, 1162 }, // 214
  { 0, 149, 153, 1313, 1316 }, // 215
  { 0, 158, 163, 1316, 1319 }, // 216
  { 1, 168, 172, 1323, 1325 }, // 217
  { 1, 168, 172, 1345, 1348 }, // 218
  { 1, 168, 172, 1330, 1333 }, // 219
  { 1, 168, 172, 1352, 1356 }, // 220
  { 1, 168, 172, 1339, 1342 }, // 221
  { 1, 168, 172, 1364, 1368 }, // 222
  { 1, 168, 172, 1325, 1327 }, // 223
  { 1, 168, 172, 1333, 1336 }, // 224
  { 1, 168, 172, 1356, 1360 }, // 225
  { 1, 137, 141, 1321, 1323 }, // 226
  { 1, 137, 141, 1342, 1345 }, // 227
  { 0, 172, 176, 0, 0 }, // 228
  { 0, 172, 176, 1368, 1369 }, // 229
  { 1, 137, 141, 1327, 1330 }, // 230
  { 1, 137, 141, 1348, 1352 }, // 231
  { 1, 137, 141, 1336, 1339 }, // 232
  { 1, 137, 141, 1360, 1364 }, // 233
  { 1, 110, 112, 1210, 1211 }, // 234
  { 1, 110, 112, 1211, 1213 }, // 235
  { 1, 112, 114, 1213, 1215 }, // 236
  { 1, 127, 129, 1215, 1218 }, // 237
  { 1, 110, 112, 1189, 1191 }, // 238
  { 1, 112, 114, 1191, 1193 }, // 239
  { 1, 0, 0, 0, 0 }, // 240
  { 1, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary GenericItineraries[] = {
  { 1, 0, 0, 0, 0 }, // 0
  { 1, 0, 0, 0, 0 }, // 1
  { 1, 0, 0, 0, 0 }, // 2
  { 1, 0, 0, 0, 0 }, // 3
  { 1, 0, 0, 0, 0 }, // 4
  { 1, 0, 0, 0, 0 }, // 5
  { 1, 0, 0, 0, 0 }, // 6
  { 1, 0, 0, 0, 0 }, // 7
  { 1, 0, 0, 0, 0 }, // 8
  { 1, 0, 0, 0, 0 }, // 9
  { 1, 0, 0, 0, 0 }, // 10
  { 1, 0, 0, 0, 0 }, // 11
  { 1, 0, 0, 0, 0 }, // 12
  { 1, 0, 0, 0, 0 }, // 13
  { 1, 0, 0, 0, 0 }, // 14
  { 1, 0, 0, 0, 0 }, // 15
  { 1, 0, 0, 0, 0 }, // 16
  { 1, 0, 0, 0, 0 }, // 17
  { 1, 0, 0, 0, 0 }, // 18
  { 1, 0, 0, 0, 0 }, // 19
  { 1, 0, 0, 0, 0 }, // 20
  { 1, 0, 0, 0, 0 }, // 21
  { 1, 0, 0, 0, 0 }, // 22
  { 1, 0, 0, 0, 0 }, // 23
  { 1, 0, 0, 0, 0 }, // 24
  { 1, 0, 0, 0, 0 }, // 25
  { 1, 0, 0, 0, 0 }, // 26
  { 1, 0, 0, 0, 0 }, // 27
  { 1, 0, 0, 0, 0 }, // 28
  { 1, 0, 0, 0, 0 }, // 29
  { 1, 0, 0, 0, 0 }, // 30
  { 1, 0, 0, 0, 0 }, // 31
  { 1, 0, 0, 0, 0 }, // 32
  { 1, 0, 0, 0, 0 }, // 33
  { 1, 0, 0, 0, 0 }, // 34
  { 1, 0, 0, 0, 0 }, // 35
  { 1, 0, 0, 0, 0 }, // 36
  { 1, 0, 0, 0, 0 }, // 37
  { 1, 0, 0, 0, 0 }, // 38
  { 1, 0, 0, 0, 0 }, // 39
  { 1, 0, 0, 0, 0 }, // 40
  { 1, 0, 0, 0, 0 }, // 41
  { 1, 0, 0, 0, 0 }, // 42
  { 1, 0, 0, 0, 0 }, // 43
  { 1, 0, 0, 0, 0 }, // 44
  { 1, 0, 0, 0, 0 }, // 45
  { 1, 0, 0, 0, 0 }, // 46
  { 1, 0, 0, 0, 0 }, // 47
  { 1, 0, 0, 0, 0 }, // 48
  { 1, 0, 0, 0, 0 }, // 49
  { 1, 0, 0, 0, 0 }, // 50
  { 1, 0, 0, 0, 0 }, // 51
  { 1, 0, 0, 0, 0 }, // 52
  { 1, 0, 0, 0, 0 }, // 53
  { 1, 0, 0, 0, 0 }, // 54
  { 1, 0, 0, 0, 0 }, // 55
  { 1, 0, 0, 0, 0 }, // 56
  { 1, 0, 0, 0, 0 }, // 57
  { 1, 0, 0, 0, 0 }, // 58
  { 1, 0, 0, 0, 0 }, // 59
  { 1, 0, 0, 0, 0 }, // 60
  { 1, 0, 0, 0, 0 }, // 61
  { 1, 0, 0, 0, 0 }, // 62
  { 1, 0, 0, 0, 0 }, // 63
  { 1, 0, 0, 0, 0 }, // 64
  { 1, 0, 0, 0, 0 }, // 65
  { 1, 0, 0, 0, 0 }, // 66
  { 1, 0, 0, 0, 0 }, // 67
  { 1, 0, 0, 0, 0 }, // 68
  { 1, 0, 0, 0, 0 }, // 69
  { 1, 0, 0, 0, 0 }, // 70
  { 1, 0, 0, 0, 0 }, // 71
  { 1, 0, 0, 0, 0 }, // 72
  { 1, 0, 0, 0, 0 }, // 73
  { 1, 0, 0, 0, 0 }, // 74
  { 1, 0, 0, 0, 0 }, // 75
  { 1, 0, 0, 0, 0 }, // 76
  { 1, 0, 0, 0, 0 }, // 77
  { 1, 0, 0, 0, 0 }, // 78
  { 1, 0, 0, 0, 0 }, // 79
  { 1, 0, 0, 0, 0 }, // 80
  { 1, 0, 0, 0, 0 }, // 81
  { 1, 0, 0, 0, 0 }, // 82
  { 1, 0, 0, 0, 0 }, // 83
  { 1, 0, 0, 0, 0 }, // 84
  { 1, 0, 0, 0, 0 }, // 85
  { 1, 0, 0, 0, 0 }, // 86
  { 1, 0, 0, 0, 0 }, // 87
  { 1, 0, 0, 0, 0 }, // 88
  { 1, 0, 0, 0, 0 }, // 89
  { 1, 0, 0, 0, 0 }, // 90
  { 1, 0, 0, 0, 0 }, // 91
  { 1, 0, 0, 0, 0 }, // 92
  { 1, 0, 0, 0, 0 }, // 93
  { 1, 0, 0, 0, 0 }, // 94
  { 1, 0, 0, 0, 0 }, // 95
  { 1, 0, 0, 0, 0 }, // 96
  { 1, 0, 0, 0, 0 }, // 97
  { 1, 0, 0, 0, 0 }, // 98
  { 1, 0, 0, 0, 0 }, // 99
  { 1, 0, 0, 0, 0 }, // 100
  { 1, 0, 0, 0, 0 }, // 101
  { 1, 0, 0, 0, 0 }, // 102
  { 1, 0, 0, 0, 0 }, // 103
  { 1, 0, 0, 0, 0 }, // 104
  { 1, 0, 0, 0, 0 }, // 105
  { 1, 0, 0, 0, 0 }, // 106
  { 1, 0, 0, 0, 0 }, // 107
  { 1, 0, 0, 0, 0 }, // 108
  { 1, 0, 0, 0, 0 }, // 109
  { 1, 0, 0, 0, 0 }, // 110
  { 1, 0, 0, 0, 0 }, // 111
  { 1, 0, 0, 0, 0 }, // 112
  { 1, 0, 0, 0, 0 }, // 113
  { 1, 0, 0, 0, 0 }, // 114
  { 1, 0, 0, 0, 0 }, // 115
  { 1, 0, 0, 0, 0 }, // 116
  { 1, 0, 0, 0, 0 }, // 117
  { 1, 0, 0, 0, 0 }, // 118
  { 1, 0, 0, 0, 0 }, // 119
  { 1, 0, 0, 0, 0 }, // 120
  { 1, 0, 0, 0, 0 }, // 121
  { 1, 0, 0, 0, 0 }, // 122
  { 1, 0, 0, 0, 0 }, // 123
  { 1, 0, 0, 0, 0 }, // 124
  { 1, 0, 0, 0, 0 }, // 125
  { 1, 0, 0, 0, 0 }, // 126
  { 1, 0, 0, 0, 0 }, // 127
  { 1, 0, 0, 0, 0 }, // 128
  { 1, 0, 0, 0, 0 }, // 129
  { 1, 0, 0, 0, 0 }, // 130
  { 1, 0, 0, 0, 0 }, // 131
  { 1, 0, 0, 0, 0 }, // 132
  { 1, 0, 0, 0, 0 }, // 133
  { 1, 0, 0, 0, 0 }, // 134
  { 1, 0, 0, 0, 0 }, // 135
  { 1, 0, 0, 0, 0 }, // 136
  { 1, 0, 0, 0, 0 }, // 137
  { 1, 0, 0, 0, 0 }, // 138
  { 1, 0, 0, 0, 0 }, // 139
  { 1, 0, 0, 0, 0 }, // 140
  { 1, 0, 0, 0, 0 }, // 141
  { 1, 0, 0, 0, 0 }, // 142
  { 1, 0, 0, 0, 0 }, // 143
  { 1, 0, 0, 0, 0 }, // 144
  { 1, 0, 0, 0, 0 }, // 145
  { 1, 0, 0, 0, 0 }, // 146
  { 1, 0, 0, 0, 0 }, // 147
  { 1, 0, 0, 0, 0 }, // 148
  { 1, 0, 0, 0, 0 }, // 149
  { 1, 0, 0, 0, 0 }, // 150
  { 1, 0, 0, 0, 0 }, // 151
  { 1, 0, 0, 0, 0 }, // 152
  { 1, 0, 0, 0, 0 }, // 153
  { 1, 0, 0, 0, 0 }, // 154
  { 1, 0, 0, 0, 0 }, // 155
  { 1, 0, 0, 0, 0 }, // 156
  { 1, 0, 0, 0, 0 }, // 157
  { 1, 0, 0, 0, 0 }, // 158
  { 1, 0, 0, 0, 0 }, // 159
  { 1, 0, 0, 0, 0 }, // 160
  { 1, 0, 0, 0, 0 }, // 161
  { 1, 0, 0, 0, 0 }, // 162
  { 1, 0, 0, 0, 0 }, // 163
  { 1, 0, 0, 0, 0 }, // 164
  { 1, 0, 0, 0, 0 }, // 165
  { 1, 0, 0, 0, 0 }, // 166
  { 1, 0, 0, 0, 0 }, // 167
  { 1, 0, 0, 0, 0 }, // 168
  { 1, 0, 0, 0, 0 }, // 169
  { 1, 0, 0, 0, 0 }, // 170
  { 1, 0, 0, 0, 0 }, // 171
  { 1, 0, 0, 0, 0 }, // 172
  { 1, 0, 0, 0, 0 }, // 173
  { 1, 0, 0, 0, 0 }, // 174
  { 1, 0, 0, 0, 0 }, // 175
  { 1, 0, 0, 0, 0 }, // 176
  { 1, 0, 0, 0, 0 }, // 177
  { 1, 0, 0, 0, 0 }, // 178
  { 1, 0, 0, 0, 0 }, // 179
  { 1, 0, 0, 0, 0 }, // 180
  { 1, 0, 0, 0, 0 }, // 181
  { 1, 0, 0, 0, 0 }, // 182
  { 1, 0, 0, 0, 0 }, // 183
  { 1, 0, 0, 0, 0 }, // 184
  { 1, 0, 0, 0, 0 }, // 185
  { 1, 0, 0, 0, 0 }, // 186
  { 1, 0, 0, 0, 0 }, // 187
  { 1, 0, 0, 0, 0 }, // 188
  { 1, 0, 0, 0, 0 }, // 189
  { 1, 0, 0, 0, 0 }, // 190
  { 1, 0, 0, 0, 0 }, // 191
  { 1, 0, 0, 0, 0 }, // 192
  { 1, 0, 0, 0, 0 }, // 193
  { 1, 0, 0, 0, 0 }, // 194
  { 1, 0, 0, 0, 0 }, // 195
  { 1, 0, 0, 0, 0 }, // 196
  { 1, 0, 0, 0, 0 }, // 197
  { 1, 0, 0, 0, 0 }, // 198
  { 1, 0, 0, 0, 0 }, // 199
  { 1, 0, 0, 0, 0 }, // 200
  { 1, 0, 0, 0, 0 }, // 201
  { 1, 0, 0, 0, 0 }, // 202
  { 1, 0, 0, 0, 0 }, // 203
  { 1, 0, 0, 0, 0 }, // 204
  { 1, 0, 0, 0, 0 }, // 205
  { 1, 0, 0, 0, 0 }, // 206
  { 1, 0, 0, 0, 0 }, // 207
  { 1, 0, 0, 0, 0 }, // 208
  { 1, 0, 0, 0, 0 }, // 209
  { 1, 0, 0, 0, 0 }, // 210
  { 1, 0, 0, 0, 0 }, // 211
  { 1, 0, 0, 0, 0 }, // 212
  { 1, 0, 0, 0, 0 }, // 213
  { 1, 0, 0, 0, 0 }, // 214
  { 1, 0, 0, 0, 0 }, // 215
  { 1, 0, 0, 0, 0 }, // 216
  { 1, 0, 0, 0, 0 }, // 217
  { 1, 0, 0, 0, 0 }, // 218
  { 1, 0, 0, 0, 0 }, // 219
  { 1, 0, 0, 0, 0 }, // 220
  { 1, 0, 0, 0, 0 }, // 221
  { 1, 0, 0, 0, 0 }, // 222
  { 1, 0, 0, 0, 0 }, // 223
  { 1, 0, 0, 0, 0 }, // 224
  { 1, 0, 0, 0, 0 }, // 225
  { 1, 0, 0, 0, 0 }, // 226
  { 1, 0, 0, 0, 0 }, // 227
  { 1, 0, 0, 0, 0 }, // 228
  { 1, 0, 0, 0, 0 }, // 229
  { 1, 0, 0, 0, 0 }, // 230
  { 1, 0, 0, 0, 0 }, // 231
  { 1, 0, 0, 0, 0 }, // 232
  { 1, 0, 0, 0, 0 }, // 233
  { 1, 0, 0, 0, 0 }, // 234
  { 1, 0, 0, 0, 0 }, // 235
  { 1, 0, 0, 0, 0 }, // 236
  { 1, 0, 0, 0, 0 }, // 237
  { 1, 0, 0, 0, 0 }, // 238
  { 1, 0, 0, 0, 0 }, // 239
  { 1, 0, 0, 0, 0 }, // 240
  { 1, ~0U, ~0U, ~0U, ~0U } // end marker
};

// Sorted (by key) array of itineraries for CPU subtype.
static const llvm::SubtargetInfoKV ProcItinKV[] = {
  { "arm1020e", (void *)&GenericItineraries },
  { "arm1020t", (void *)&GenericItineraries },
  { "arm1022e", (void *)&GenericItineraries },
  { "arm10e", (void *)&GenericItineraries },
  { "arm10tdmi", (void *)&GenericItineraries },
  { "arm1136j-s", (void *)&ARMV6Itineraries },
  { "arm1136jf-s", (void *)&ARMV6Itineraries },
  { "arm1156t2-s", (void *)&ARMV6Itineraries },
  { "arm1156t2f-s", (void *)&ARMV6Itineraries },
  { "arm1176jz-s", (void *)&ARMV6Itineraries },
  { "arm1176jzf-s", (void *)&ARMV6Itineraries },
  { "arm710t", (void *)&GenericItineraries },
  { "arm720t", (void *)&GenericItineraries },
  { "arm7tdmi", (void *)&GenericItineraries },
  { "arm7tdmi-s", (void *)&GenericItineraries },
  { "arm8", (void *)&GenericItineraries },
  { "arm810", (void *)&GenericItineraries },
  { "arm9", (void *)&GenericItineraries },
  { "arm920", (void *)&GenericItineraries },
  { "arm920t", (void *)&GenericItineraries },
  { "arm922t", (void *)&GenericItineraries },
  { "arm926ej-s", (void *)&GenericItineraries },
  { "arm940t", (void *)&GenericItineraries },
  { "arm946e-s", (void *)&GenericItineraries },
  { "arm966e-s", (void *)&GenericItineraries },
  { "arm968e-s", (void *)&GenericItineraries },
  { "arm9e", (void *)&GenericItineraries },
  { "arm9tdmi", (void *)&GenericItineraries },
  { "cortex-a8", (void *)&CortexA8Itineraries },
  { "cortex-a9", (void *)&CortexA9Itineraries },
  { "cortex-m0", (void *)&ARMV6Itineraries },
  { "cortex-m3", (void *)&GenericItineraries },
  { "cortex-m4", (void *)&GenericItineraries },
  { "ep9312", (void *)&GenericItineraries },
  { "generic", (void *)&GenericItineraries },
  { "iwmmxt", (void *)&GenericItineraries },
  { "mpcore", (void *)&ARMV6Itineraries },
  { "mpcorenovfp", (void *)&ARMV6Itineraries },
  { "strongarm", (void *)&GenericItineraries },
  { "strongarm110", (void *)&GenericItineraries },
  { "strongarm1100", (void *)&GenericItineraries },
  { "strongarm1110", (void *)&GenericItineraries },
  { "xscale", (void *)&GenericItineraries }
};

enum {
  ProcItinKVSize = sizeof(ProcItinKV)/sizeof(llvm::SubtargetInfoKV)
};

// ParseSubtargetFeatures - Parses features string setting specified
// subtarget options.
std::string llvm::ARMSubtarget::ParseSubtargetFeatures(const std::string &FS,
                                  const std::string &CPU) {
  DEBUG(dbgs() << "\nFeatures:" << FS);
  DEBUG(dbgs() << "\nCPU:" << CPU);
  SubtargetFeatures Features(FS);
  Features.setCPUIfNone(CPU);
  uint32_t Bits =  Features.getBits(SubTypeKV, SubTypeKVSize,
                                    FeatureKV, FeatureKVSize);
  if ((Bits & ArchV4T) != 0 && ARMArchVersion < V4T) ARMArchVersion = V4T;
  if ((Bits & ArchV5T) != 0 && ARMArchVersion < V5T) ARMArchVersion = V5T;
  if ((Bits & ArchV5TE) != 0 && ARMArchVersion < V5TE) ARMArchVersion = V5TE;
  if ((Bits & ArchV6) != 0 && ARMArchVersion < V6) ARMArchVersion = V6;
  if ((Bits & ArchV6M) != 0 && ARMArchVersion < V6M) ARMArchVersion = V6M;
  if ((Bits & ArchV6T2) != 0 && ARMArchVersion < V6T2) ARMArchVersion = V6T2;
  if ((Bits & ArchV7A) != 0 && ARMArchVersion < V7A) ARMArchVersion = V7A;
  if ((Bits & ArchV7M) != 0 && ARMArchVersion < V7M) ARMArchVersion = V7M;
  if ((Bits & FeatureD16) != 0) HasD16 = true;
  if ((Bits & FeatureDB) != 0) HasDataBarrier = true;
  if ((Bits & FeatureFP16) != 0) HasFP16 = true;
  if ((Bits & FeatureHWDiv) != 0) HasHardwareDivide = true;
  if ((Bits & FeatureHasSlowFPVMLx) != 0) SlowFPVMLx = true;
  if ((Bits & FeatureMP) != 0) HasMPExtension = true;
  if ((Bits & FeatureNEON) != 0 && ARMFPUType < NEON) ARMFPUType = NEON;
  if ((Bits & FeatureNEONForFP) != 0) UseNEONForSinglePrecisionFP = true;
  if ((Bits & FeatureNoARM) != 0) NoARM = true;
  if ((Bits & FeaturePref32BitThumb) != 0) Pref32BitThumb = true;
  if ((Bits & FeatureSlowFPBrcc) != 0) SlowFPBrcc = true;
  if ((Bits & FeatureT2XtPk) != 0) HasT2ExtractPack = true;
  if ((Bits & FeatureThumb2) != 0 && ThumbMode < Thumb2) ThumbMode = Thumb2;
  if ((Bits & FeatureVFP2) != 0 && ARMFPUType < VFPv2) ARMFPUType = VFPv2;
  if ((Bits & FeatureVFP3) != 0 && ARMFPUType < VFPv3) ARMFPUType = VFPv3;
  if ((Bits & FeatureVFPOnlySP) != 0) FPOnlySP = true;
  if ((Bits & ProcA8) != 0 && ARMProcFamily < CortexA8) ARMProcFamily = CortexA8;
  if ((Bits & ProcA9) != 0 && ARMProcFamily < CortexA9) ARMProcFamily = CortexA9;
  if ((Bits & ProcOthers) != 0 && ARMProcFamily < Others) ARMProcFamily = Others;

  InstrItinerary *Itinerary = (InstrItinerary *)Features.getInfo(ProcItinKV, ProcItinKVSize);
  InstrItins = InstrItineraryData(Stages, OperandCycles, ForwardingPathes, Itinerary);
  return Features.getCPU();
}
