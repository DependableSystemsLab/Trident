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
  Directive32 =  1 << 0,
  Directive64 =  1 << 1,
  Directive601 =  1 << 2,
  Directive602 =  1 << 3,
  Directive603 =  1 << 4,
  Directive604 =  1 << 5,
  Directive620 =  1 << 6,
  Directive750 =  1 << 7,
  Directive970 =  1 << 8,
  Directive7400 =  1 << 9,
  Feature64Bit =  1 << 10,
  Feature64BitRegs =  1 << 11,
  FeatureAltivec =  1 << 12,
  FeatureFSqrt =  1 << 13,
  FeatureGPUL =  1 << 14,
  FeatureSTFIWX =  1 << 15
};

// Sorted (by key) array of values for CPU features.
static const llvm::SubtargetFeatureKV FeatureKV[] = {
  { "64bit", "Enable 64-bit instructions", Feature64Bit, 0 },
  { "64bitregs", "Enable 64-bit registers usage for ppc32 [beta]", Feature64BitRegs, 0 },
  { "altivec", "Enable Altivec instructions", FeatureAltivec, 0 },
  { "fsqrt", "Enable the fsqrt instruction", FeatureFSqrt, 0 },
  { "gpul", "Enable GPUL instructions", FeatureGPUL, 0 },
  { "stfiwx", "Enable the stfiwx instruction", FeatureSTFIWX, 0 }
};

enum {
  FeatureKVSize = sizeof(FeatureKV)/sizeof(llvm::SubtargetFeatureKV)
};

// Sorted (by key) array of values for CPU subtype.
static const llvm::SubtargetFeatureKV SubTypeKV[] = {
  { "601", "Select the 601 processor", Directive601, 0 },
  { "602", "Select the 602 processor", Directive602, 0 },
  { "603", "Select the 603 processor", Directive603, 0 },
  { "603e", "Select the 603e processor", Directive603, 0 },
  { "603ev", "Select the 603ev processor", Directive603, 0 },
  { "604", "Select the 604 processor", Directive604, 0 },
  { "604e", "Select the 604e processor", Directive604, 0 },
  { "620", "Select the 620 processor", Directive620, 0 },
  { "7400", "Select the 7400 processor", Directive7400 | FeatureAltivec, 0 },
  { "7450", "Select the 7450 processor", Directive7400 | FeatureAltivec, 0 },
  { "750", "Select the 750 processor", Directive750 | FeatureAltivec, 0 },
  { "970", "Select the 970 processor", Directive970 | FeatureAltivec | FeatureGPUL | FeatureFSqrt | FeatureSTFIWX | Feature64Bit, 0 },
  { "g3", "Select the g3 processor", Directive7400, 0 },
  { "g4", "Select the g4 processor", Directive7400 | FeatureAltivec, 0 },
  { "g4+", "Select the g4+ processor", Directive750 | FeatureAltivec, 0 },
  { "g5", "Select the g5 processor", Directive970 | FeatureAltivec | FeatureGPUL | FeatureFSqrt | FeatureSTFIWX | Feature64Bit, 0 },
  { "generic", "Select the generic processor", Directive32, 0 },
  { "ppc", "Select the ppc processor", Directive32, 0 },
  { "ppc64", "Select the ppc64 processor", Directive64 | FeatureAltivec | FeatureGPUL | FeatureFSqrt | FeatureSTFIWX | Feature64Bit, 0 }
};

enum {
  SubTypeKVSize = sizeof(SubTypeKV)/sizeof(llvm::SubtargetFeatureKV)
};


enum {
  ItinClassesSize = 74
};

// Functional units for itineraries "G3Itineraries"
namespace G3ItinerariesFU {
  const unsigned IU1 = 1 << 0;
  const unsigned IU2 = 1 << 1;
  const unsigned FPU1 = 1 << 2;
  const unsigned BPU = 1 << 3;
  const unsigned SRU = 1 << 4;
  const unsigned SLU = 1 << 5;
}

// Functional units for itineraries "G4Itineraries"
namespace G4ItinerariesFU {
  const unsigned IU1 = 1 << 0;
  const unsigned IU2 = 1 << 1;
  const unsigned SLU = 1 << 2;
  const unsigned SRU = 1 << 3;
  const unsigned BPU = 1 << 4;
  const unsigned FPU1 = 1 << 5;
  const unsigned VIU1 = 1 << 6;
  const unsigned VIU2 = 1 << 7;
  const unsigned VPU = 1 << 8;
  const unsigned VFPU = 1 << 9;
}

// Functional units for itineraries "G4PlusItineraries"
namespace G4PlusItinerariesFU {
  const unsigned IU1 = 1 << 0;
  const unsigned IU2 = 1 << 1;
  const unsigned IU3 = 1 << 2;
  const unsigned IU4 = 1 << 3;
  const unsigned BPU = 1 << 4;
  const unsigned SLU = 1 << 5;
  const unsigned FPU1 = 1 << 6;
  const unsigned VFPU = 1 << 7;
  const unsigned VIU1 = 1 << 8;
  const unsigned VIU2 = 1 << 9;
  const unsigned VPU = 1 << 10;
}

// Functional units for itineraries "G5Itineraries"
namespace G5ItinerariesFU {
  const unsigned IU1 = 1 << 0;
  const unsigned IU2 = 1 << 1;
  const unsigned SLU = 1 << 2;
  const unsigned BPU = 1 << 3;
  const unsigned FPU1 = 1 << 4;
  const unsigned FPU2 = 1 << 5;
  const unsigned VFPU = 1 << 6;
  const unsigned VIU1 = 1 << 7;
  const unsigned VIU2 = 1 << 8;
  const unsigned VPU = 1 << 9;
}

static const llvm::InstrStage Stages[] = {
  { 0, 0, 0, llvm::InstrStage::Required }, // No itinerary
  { 1, G3ItinerariesFU::IU1 | G3ItinerariesFU::IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 1
  { 19, G3ItinerariesFU::IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 2
  { 1, G3ItinerariesFU::FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 3
  { 3, G3ItinerariesFU::FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 4
  { 5, G3ItinerariesFU::IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 5
  { 6, G3ItinerariesFU::IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 6
  { 3, G3ItinerariesFU::IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 7
  { 2, G3ItinerariesFU::IU1 | G3ItinerariesFU::IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 8
  { 1, G3ItinerariesFU::BPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 9
  { 1, G3ItinerariesFU::SRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 10
  { 2, G3ItinerariesFU::SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 11
  { 3, G3ItinerariesFU::SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 12
  { 34, G3ItinerariesFU::SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 13
  { 8, G3ItinerariesFU::SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 14
  { 2, G3ItinerariesFU::SRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 15
  { 3, G3ItinerariesFU::SRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 16
  { 31, G3ItinerariesFU::FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 17
  { 17, G3ItinerariesFU::FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 18
  { 2, G3ItinerariesFU::FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 19
  { 10, G3ItinerariesFU::FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 20
  { 1, G4ItinerariesFU::IU1 | G4ItinerariesFU::IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 21
  { 19, G4ItinerariesFU::IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 22
  { 3, G4ItinerariesFU::FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 23
  { 1, G4ItinerariesFU::VIU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 24
  { 5, G4ItinerariesFU::IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 25
  { 6, G4ItinerariesFU::IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 26
  { 3, G4ItinerariesFU::IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 27
  { 2, G4ItinerariesFU::IU1 | G4ItinerariesFU::IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 28
  { 1, G4ItinerariesFU::BPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 29
  { 1, G4ItinerariesFU::SRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 30
  { 2, G4ItinerariesFU::SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 31
  { 34, G4ItinerariesFU::SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 32
  { 3, G4ItinerariesFU::SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 33
  { 5, G4ItinerariesFU::SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 34
  { 8, G4ItinerariesFU::SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 35
  { 2, G4ItinerariesFU::SRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 36
  { 3, G4ItinerariesFU::SRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 37
  { 8, G4ItinerariesFU::SRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 38
  { 1, G4ItinerariesFU::FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 39
  { 31, G4ItinerariesFU::FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 40
  { 17, G4ItinerariesFU::FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 41
  { 10, G4ItinerariesFU::FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 42
  { 4, G4ItinerariesFU::VFPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 43
  { 3, G4ItinerariesFU::VIU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 44
  { 1, G4ItinerariesFU::VPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 45
  { 1, G4PlusItinerariesFU::IU1 | G4PlusItinerariesFU::IU2 | G4PlusItinerariesFU::IU3 | G4PlusItinerariesFU::IU4, -1, (llvm::InstrStage::ReservationKinds)0 }, // 46
  { 23, G4PlusItinerariesFU::IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 47
  { 5, G4PlusItinerariesFU::FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 48
  { 2, G4PlusItinerariesFU::VFPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 49
  { 4, G4PlusItinerariesFU::IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 50
  { 3, G4PlusItinerariesFU::IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 51
  { 2, G4PlusItinerariesFU::IU1 | G4PlusItinerariesFU::IU2 | G4PlusItinerariesFU::IU3 | G4PlusItinerariesFU::IU4, -1, (llvm::InstrStage::ReservationKinds)0 }, // 52
  { 1, G4PlusItinerariesFU::BPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 53
  { 2, G4PlusItinerariesFU::IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 54
  { 3, G4PlusItinerariesFU::SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 55
  { 4, G4PlusItinerariesFU::SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 56
  { 37, G4PlusItinerariesFU::SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 57
  { 35, G4PlusItinerariesFU::SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 58
  { 0, G4PlusItinerariesFU::IU1 | G4PlusItinerariesFU::IU2 | G4PlusItinerariesFU::IU3 | G4PlusItinerariesFU::IU4, -1, (llvm::InstrStage::ReservationKinds)0 }, // 59
  { 5, G4PlusItinerariesFU::IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 60
  { 35, G4PlusItinerariesFU::FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 61
  { 21, G4PlusItinerariesFU::FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 62
  { 14, G4PlusItinerariesFU::FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 63
  { 1, G4PlusItinerariesFU::VIU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 64
  { 4, G4PlusItinerariesFU::VFPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 65
  { 4, G4PlusItinerariesFU::VIU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 66
  { 2, G4PlusItinerariesFU::VPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 67
  { 4, G4PlusItinerariesFU::VIU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 68
  { 2, G5ItinerariesFU::IU1 | G5ItinerariesFU::IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 69
  { 3, G5ItinerariesFU::IU1 | G5ItinerariesFU::IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 70
  { 68, G5ItinerariesFU::IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 71
  { 36, G5ItinerariesFU::IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 72
  { 6, G5ItinerariesFU::IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 73
  { 1, G5ItinerariesFU::VFPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 74
  { 6, G5ItinerariesFU::FPU1 | G5ItinerariesFU::FPU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 75
  { 7, G5ItinerariesFU::IU1 | G5ItinerariesFU::IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 76
  { 5, G5ItinerariesFU::IU1 | G5ItinerariesFU::IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 77
  { 4, G5ItinerariesFU::IU1 | G5ItinerariesFU::IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 78
  { 1, G5ItinerariesFU::IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 79
  { 1, G5ItinerariesFU::IU1 | G5ItinerariesFU::IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 80
  { 1, G5ItinerariesFU::BPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 81
  { 4, G5ItinerariesFU::BPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 82
  { 2, G5ItinerariesFU::BPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 83
  { 3, G5ItinerariesFU::BPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 84
  { 3, G5ItinerariesFU::SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 85
  { 10, G5ItinerariesFU::SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 86
  { 40, G5ItinerariesFU::SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 87
  { 4, G5ItinerariesFU::SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 88
  { 11, G5ItinerariesFU::SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 89
  { 5, G5ItinerariesFU::SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 90
  { 64, G5ItinerariesFU::SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 91
  { 2, G5ItinerariesFU::SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 92
  { 35, G5ItinerariesFU::SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 93
  { 2, G5ItinerariesFU::IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 94
  { 3, G5ItinerariesFU::IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 95
  { 10, G5ItinerariesFU::IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 96
  { 8, G5ItinerariesFU::IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 97
  { 8, G5ItinerariesFU::FPU1 | G5ItinerariesFU::FPU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 98
  { 33, G5ItinerariesFU::FPU1 | G5ItinerariesFU::FPU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 99
  { 40, G5ItinerariesFU::FPU1 | G5ItinerariesFU::FPU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 100
  { 2, G5ItinerariesFU::VIU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 101
  { 8, G5ItinerariesFU::VFPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 102
  { 2, G5ItinerariesFU::VFPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 103
  { 5, G5ItinerariesFU::VIU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 104
  { 3, G5ItinerariesFU::VPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 105
  { 0, 0, 0, llvm::InstrStage::Required } // End itinerary
};
static const unsigned OperandCycles[] = {
  0, // No itinerary
  0 // End itinerary
};
static const unsigned ForwardingPathes[] = {
  0, // No itinerary
  0 // End itinerary
};

enum {
  StagesSize = sizeof(Stages)/sizeof(llvm::InstrStage),
  OperandCyclesSize = sizeof(OperandCycles)/sizeof(unsigned)
};

static const llvm::InstrItinerary G3Itineraries[] = {
  { 1, 9, 10, 0, 0 }, // 0
  { 1, 10, 11, 0, 0 }, // 1
  { 1, 10, 11, 0, 0 }, // 2
  { 1, 10, 11, 0, 0 }, // 3
  { 1, 3, 4, 0, 0 }, // 4
  { 1, 17, 18, 0, 0 }, // 5
  { 1, 18, 19, 0, 0 }, // 6
  { 1, 19, 20, 0, 0 }, // 7
  { 1, 3, 4, 0, 0 }, // 8
  { 1, 20, 21, 0, 0 }, // 9
  { 1, 0, 0, 0, 0 }, // 10
  { 1, 1, 2, 0, 0 }, // 11
  { 1, 0, 0, 0, 0 }, // 12
  { 1, 2, 3, 0, 0 }, // 13
  { 1, 1, 2, 0, 0 }, // 14
  { 1, 3, 4, 0, 0 }, // 15
  { 1, 0, 0, 0, 0 }, // 16
  { 1, 4, 5, 0, 0 }, // 17
  { 1, 0, 0, 0, 0 }, // 18
  { 1, 0, 0, 0, 0 }, // 19
  { 1, 5, 6, 0, 0 }, // 20
  { 1, 6, 7, 0, 0 }, // 21
  { 1, 7, 8, 0, 0 }, // 22
  { 1, 0, 0, 0, 0 }, // 23
  { 1, 1, 2, 0, 0 }, // 24
  { 1, 0, 0, 0, 0 }, // 25
  { 1, 1, 2, 0, 0 }, // 26
  { 1, 0, 0, 0, 0 }, // 27
  { 1, 8, 9, 0, 0 }, // 28
  { 1, 11, 12, 0, 0 }, // 29
  { 1, 12, 13, 0, 0 }, // 30
  { 1, 12, 13, 0, 0 }, // 31
  { 1, 0, 0, 0, 0 }, // 32
  { 1, 11, 12, 0, 0 }, // 33
  { 1, 12, 13, 0, 0 }, // 34
  { 1, 0, 0, 0, 0 }, // 35
  { 1, 0, 0, 0, 0 }, // 36
  { 1, 11, 12, 0, 0 }, // 37
  { 1, 11, 12, 0, 0 }, // 38
  { 1, 11, 12, 0, 0 }, // 39
  { 1, 13, 14, 0, 0 }, // 40
  { 1, 0, 0, 0, 0 }, // 41
  { 1, 0, 0, 0, 0 }, // 42
  { 1, 12, 13, 0, 0 }, // 43
  { 1, 0, 0, 0, 0 }, // 44
  { 1, 0, 0, 0, 0 }, // 45
  { 1, 0, 0, 0, 0 }, // 46
  { 1, 0, 0, 0, 0 }, // 47
  { 1, 0, 0, 0, 0 }, // 48
  { 1, 14, 15, 0, 0 }, // 49
  { 1, 12, 13, 0, 0 }, // 50
  { 1, 11, 12, 0, 0 }, // 51
  { 1, 0, 0, 0, 0 }, // 52
  { 1, 15, 16, 0, 0 }, // 53
  { 1, 10, 11, 0, 0 }, // 54
  { 1, 10, 11, 0, 0 }, // 55
  { 1, 16, 17, 0, 0 }, // 56
  { 1, 16, 17, 0, 0 }, // 57
  { 1, 16, 17, 0, 0 }, // 58
  { 1, 10, 11, 0, 0 }, // 59
  { 1, 15, 16, 0, 0 }, // 60
  { 1, 15, 16, 0, 0 }, // 61
  { 1, 15, 16, 0, 0 }, // 62
  { 1, 15, 16, 0, 0 }, // 63
  { 1, 15, 16, 0, 0 }, // 64
  { 1, 16, 17, 0, 0 }, // 65
  { 1, 0, 0, 0, 0 }, // 66
  { 1, 0, 0, 0, 0 }, // 67
  { 1, 0, 0, 0, 0 }, // 68
  { 1, 0, 0, 0, 0 }, // 69
  { 1, 0, 0, 0, 0 }, // 70
  { 1, 0, 0, 0, 0 }, // 71
  { 1, 0, 0, 0, 0 }, // 72
  { 1, 0, 0, 0, 0 }, // 73
  { 1, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary G4Itineraries[] = {
  { 1, 29, 30, 0, 0 }, // 0
  { 1, 30, 31, 0, 0 }, // 1
  { 1, 30, 31, 0, 0 }, // 2
  { 1, 30, 31, 0, 0 }, // 3
  { 1, 39, 40, 0, 0 }, // 4
  { 1, 40, 41, 0, 0 }, // 5
  { 1, 41, 42, 0, 0 }, // 6
  { 1, 39, 40, 0, 0 }, // 7
  { 1, 39, 40, 0, 0 }, // 8
  { 1, 42, 43, 0, 0 }, // 9
  { 1, 0, 0, 0, 0 }, // 10
  { 1, 21, 22, 0, 0 }, // 11
  { 1, 0, 0, 0, 0 }, // 12
  { 1, 22, 23, 0, 0 }, // 13
  { 1, 21, 22, 0, 0 }, // 14
  { 1, 23, 24, 0, 0 }, // 15
  { 1, 24, 25, 0, 0 }, // 16
  { 1, 23, 24, 0, 0 }, // 17
  { 1, 0, 0, 0, 0 }, // 18
  { 1, 0, 0, 0, 0 }, // 19
  { 1, 25, 26, 0, 0 }, // 20
  { 1, 26, 27, 0, 0 }, // 21
  { 1, 27, 28, 0, 0 }, // 22
  { 1, 0, 0, 0, 0 }, // 23
  { 1, 21, 22, 0, 0 }, // 24
  { 1, 0, 0, 0, 0 }, // 25
  { 1, 21, 22, 0, 0 }, // 26
  { 1, 0, 0, 0, 0 }, // 27
  { 1, 28, 29, 0, 0 }, // 28
  { 1, 0, 0, 0, 0 }, // 29
  { 1, 31, 32, 0, 0 }, // 30
  { 1, 31, 32, 0, 0 }, // 31
  { 1, 31, 32, 0, 0 }, // 32
  { 1, 31, 32, 0, 0 }, // 33
  { 1, 31, 32, 0, 0 }, // 34
  { 1, 0, 0, 0, 0 }, // 35
  { 1, 0, 0, 0, 0 }, // 36
  { 1, 31, 32, 0, 0 }, // 37
  { 1, 31, 32, 0, 0 }, // 38
  { 1, 31, 32, 0, 0 }, // 39
  { 1, 32, 33, 0, 0 }, // 40
  { 1, 31, 32, 0, 0 }, // 41
  { 1, 0, 0, 0, 0 }, // 42
  { 1, 33, 34, 0, 0 }, // 43
  { 1, 0, 0, 0, 0 }, // 44
  { 1, 0, 0, 0, 0 }, // 45
  { 1, 0, 0, 0, 0 }, // 46
  { 1, 0, 0, 0, 0 }, // 47
  { 1, 31, 32, 0, 0 }, // 48
  { 1, 34, 35, 0, 0 }, // 49
  { 1, 35, 36, 0, 0 }, // 50
  { 1, 31, 32, 0, 0 }, // 51
  { 1, 0, 0, 0, 0 }, // 52
  { 1, 36, 37, 0, 0 }, // 53
  { 1, 30, 31, 0, 0 }, // 54
  { 1, 30, 31, 0, 0 }, // 55
  { 1, 37, 38, 0, 0 }, // 56
  { 1, 37, 38, 0, 0 }, // 57
  { 1, 30, 31, 0, 0 }, // 58
  { 1, 30, 31, 0, 0 }, // 59
  { 1, 36, 37, 0, 0 }, // 60
  { 1, 36, 37, 0, 0 }, // 61
  { 1, 36, 37, 0, 0 }, // 62
  { 1, 36, 37, 0, 0 }, // 63
  { 1, 36, 37, 0, 0 }, // 64
  { 1, 38, 39, 0, 0 }, // 65
  { 1, 44, 45, 0, 0 }, // 66
  { 1, 43, 44, 0, 0 }, // 67
  { 1, 24, 25, 0, 0 }, // 68
  { 1, 43, 44, 0, 0 }, // 69
  { 1, 24, 25, 0, 0 }, // 70
  { 1, 45, 46, 0, 0 }, // 71
  { 1, 24, 25, 0, 0 }, // 72
  { 1, 24, 25, 0, 0 }, // 73
  { 1, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary G4PlusItineraries[] = {
  { 1, 53, 54, 0, 0 }, // 0
  { 1, 54, 55, 0, 0 }, // 1
  { 1, 54, 55, 0, 0 }, // 2
  { 1, 54, 55, 0, 0 }, // 3
  { 1, 48, 49, 0, 0 }, // 4
  { 1, 61, 62, 0, 0 }, // 5
  { 1, 62, 63, 0, 0 }, // 6
  { 1, 48, 49, 0, 0 }, // 7
  { 1, 48, 49, 0, 0 }, // 8
  { 1, 63, 64, 0, 0 }, // 9
  { 1, 0, 0, 0, 0 }, // 10
  { 1, 46, 47, 0, 0 }, // 11
  { 1, 0, 0, 0, 0 }, // 12
  { 1, 47, 48, 0, 0 }, // 13
  { 1, 46, 47, 0, 0 }, // 14
  { 1, 48, 49, 0, 0 }, // 15
  { 1, 49, 50, 0, 0 }, // 16
  { 1, 48, 49, 0, 0 }, // 17
  { 1, 0, 0, 0, 0 }, // 18
  { 1, 0, 0, 0, 0 }, // 19
  { 1, 50, 51, 0, 0 }, // 20
  { 1, 50, 51, 0, 0 }, // 21
  { 1, 51, 52, 0, 0 }, // 22
  { 1, 0, 0, 0, 0 }, // 23
  { 1, 46, 47, 0, 0 }, // 24
  { 1, 0, 0, 0, 0 }, // 25
  { 1, 52, 53, 0, 0 }, // 26
  { 1, 0, 0, 0, 0 }, // 27
  { 1, 52, 53, 0, 0 }, // 28
  { 1, 0, 0, 0, 0 }, // 29
  { 1, 55, 56, 0, 0 }, // 30
  { 1, 55, 56, 0, 0 }, // 31
  { 1, 55, 56, 0, 0 }, // 32
  { 1, 55, 56, 0, 0 }, // 33
  { 1, 51, 52, 0, 0 }, // 34
  { 1, 0, 0, 0, 0 }, // 35
  { 1, 0, 0, 0, 0 }, // 36
  { 1, 56, 57, 0, 0 }, // 37
  { 1, 56, 57, 0, 0 }, // 38
  { 1, 55, 56, 0, 0 }, // 39
  { 1, 57, 58, 0, 0 }, // 40
  { 1, 55, 56, 0, 0 }, // 41
  { 1, 55, 56, 0, 0 }, // 42
  { 1, 55, 56, 0, 0 }, // 43
  { 1, 0, 0, 0, 0 }, // 44
  { 1, 0, 0, 0, 0 }, // 45
  { 1, 55, 56, 0, 0 }, // 46
  { 1, 55, 56, 0, 0 }, // 47
  { 1, 55, 56, 0, 0 }, // 48
  { 1, 55, 56, 0, 0 }, // 49
  { 1, 58, 59, 0, 0 }, // 50
  { 1, 55, 56, 0, 0 }, // 51
  { 1, 0, 0, 0, 0 }, // 52
  { 1, 59, 60, 0, 0 }, // 53
  { 1, 54, 55, 0, 0 }, // 54
  { 1, 51, 52, 0, 0 }, // 55
  { 1, 50, 51, 0, 0 }, // 56
  { 1, 50, 51, 0, 0 }, // 57
  { 1, 60, 61, 0, 0 }, // 58
  { 1, 54, 55, 0, 0 }, // 59
  { 1, 54, 55, 0, 0 }, // 60
  { 1, 54, 55, 0, 0 }, // 61
  { 1, 54, 55, 0, 0 }, // 62
  { 1, 46, 47, 0, 0 }, // 63
  { 1, 59, 60, 0, 0 }, // 64
  { 1, 55, 56, 0, 0 }, // 65
  { 1, 66, 67, 0, 0 }, // 66
  { 1, 65, 66, 0, 0 }, // 67
  { 1, 49, 50, 0, 0 }, // 68
  { 1, 68, 69, 0, 0 }, // 69
  { 1, 64, 65, 0, 0 }, // 70
  { 1, 67, 68, 0, 0 }, // 71
  { 1, 67, 68, 0, 0 }, // 72
  { 1, 67, 68, 0, 0 }, // 73
  { 1, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary G5Itineraries[] = {
  { 1, 81, 82, 0, 0 }, // 0
  { 1, 82, 83, 0, 0 }, // 1
  { 1, 83, 84, 0, 0 }, // 2
  { 1, 84, 85, 0, 0 }, // 3
  { 1, 98, 99, 0, 0 }, // 4
  { 1, 99, 100, 0, 0 }, // 5
  { 1, 99, 100, 0, 0 }, // 6
  { 1, 75, 76, 0, 0 }, // 7
  { 1, 75, 76, 0, 0 }, // 8
  { 1, 75, 76, 0, 0 }, // 9
  { 1, 100, 101, 0, 0 }, // 10
  { 1, 70, 71, 0, 0 }, // 11
  { 1, 71, 72, 0, 0 }, // 12
  { 1, 72, 73, 0, 0 }, // 13
  { 1, 69, 70, 0, 0 }, // 14
  { 1, 73, 74, 0, 0 }, // 15
  { 1, 74, 75, 0, 0 }, // 16
  { 1, 75, 76, 0, 0 }, // 17
  { 1, 0, 0, 0, 0 }, // 18
  { 1, 76, 77, 0, 0 }, // 19
  { 1, 77, 78, 0, 0 }, // 20
  { 1, 77, 78, 0, 0 }, // 21
  { 1, 78, 79, 0, 0 }, // 22
  { 1, 79, 80, 0, 0 }, // 23
  { 1, 78, 79, 0, 0 }, // 24
  { 1, 69, 70, 0, 0 }, // 25
  { 1, 69, 70, 0, 0 }, // 26
  { 1, 80, 81, 0, 0 }, // 27
  { 1, 80, 81, 0, 0 }, // 28
  { 1, 0, 0, 0, 0 }, // 29
  { 1, 85, 86, 0, 0 }, // 30
  { 1, 0, 0, 0, 0 }, // 31
  { 1, 86, 87, 0, 0 }, // 32
  { 1, 85, 86, 0, 0 }, // 33
  { 1, 87, 88, 0, 0 }, // 34
  { 1, 85, 86, 0, 0 }, // 35
  { 1, 89, 90, 0, 0 }, // 36
  { 1, 85, 86, 0, 0 }, // 37
  { 1, 90, 91, 0, 0 }, // 38
  { 1, 90, 91, 0, 0 }, // 39
  { 1, 91, 92, 0, 0 }, // 40
  { 1, 85, 86, 0, 0 }, // 41
  { 1, 90, 91, 0, 0 }, // 42
  { 1, 89, 90, 0, 0 }, // 43
  { 1, 87, 88, 0, 0 }, // 44
  { 1, 92, 93, 0, 0 }, // 45
  { 1, 85, 86, 0, 0 }, // 46
  { 1, 89, 90, 0, 0 }, // 47
  { 1, 90, 91, 0, 0 }, // 48
  { 1, 89, 90, 0, 0 }, // 49
  { 1, 93, 94, 0, 0 }, // 50
  { 1, 88, 89, 0, 0 }, // 51
  { 1, 0, 0, 0, 0 }, // 52
  { 1, 87, 88, 0, 0 }, // 53
  { 1, 94, 95, 0, 0 }, // 54
  { 1, 95, 96, 0, 0 }, // 55
  { 1, 95, 96, 0, 0 }, // 56
  { 1, 85, 86, 0, 0 }, // 57
  { 1, 96, 97, 0, 0 }, // 58
  { 1, 85, 86, 0, 0 }, // 59
  { 1, 97, 98, 0, 0 }, // 60
  { 1, 85, 86, 0, 0 }, // 61
  { 1, 0, 0, 0, 0 }, // 62
  { 1, 0, 0, 0, 0 }, // 63
  { 1, 79, 80, 0, 0 }, // 64
  { 1, 85, 86, 0, 0 }, // 65
  { 1, 104, 105, 0, 0 }, // 66
  { 1, 102, 103, 0, 0 }, // 67
  { 1, 103, 104, 0, 0 }, // 68
  { 1, 102, 103, 0, 0 }, // 69
  { 1, 101, 102, 0, 0 }, // 70
  { 1, 105, 106, 0, 0 }, // 71
  { 1, 101, 102, 0, 0 }, // 72
  { 1, 105, 106, 0, 0 }, // 73
  { 1, ~0U, ~0U, ~0U, ~0U } // end marker
};

// Sorted (by key) array of itineraries for CPU subtype.
static const llvm::SubtargetInfoKV ProcItinKV[] = {
  { "601", (void *)&G3Itineraries },
  { "602", (void *)&G3Itineraries },
  { "603", (void *)&G3Itineraries },
  { "603e", (void *)&G3Itineraries },
  { "603ev", (void *)&G3Itineraries },
  { "604", (void *)&G3Itineraries },
  { "604e", (void *)&G3Itineraries },
  { "620", (void *)&G3Itineraries },
  { "7400", (void *)&G4Itineraries },
  { "7450", (void *)&G4PlusItineraries },
  { "750", (void *)&G4Itineraries },
  { "970", (void *)&G5Itineraries },
  { "g3", (void *)&G3Itineraries },
  { "g4", (void *)&G4Itineraries },
  { "g4+", (void *)&G4PlusItineraries },
  { "g5", (void *)&G5Itineraries },
  { "generic", (void *)&G3Itineraries },
  { "ppc", (void *)&G3Itineraries },
  { "ppc64", (void *)&G5Itineraries }
};

enum {
  ProcItinKVSize = sizeof(ProcItinKV)/sizeof(llvm::SubtargetInfoKV)
};

// ParseSubtargetFeatures - Parses features string setting specified
// subtarget options.
std::string llvm::PPCSubtarget::ParseSubtargetFeatures(const std::string &FS,
                                  const std::string &CPU) {
  DEBUG(dbgs() << "\nFeatures:" << FS);
  DEBUG(dbgs() << "\nCPU:" << CPU);
  SubtargetFeatures Features(FS);
  Features.setCPUIfNone(CPU);
  uint32_t Bits =  Features.getBits(SubTypeKV, SubTypeKVSize,
                                    FeatureKV, FeatureKVSize);
  if ((Bits & Directive32) != 0 && DarwinDirective < PPC::DIR_32) DarwinDirective = PPC::DIR_32;
  if ((Bits & Directive64) != 0 && DarwinDirective < PPC::DIR_64) DarwinDirective = PPC::DIR_64;
  if ((Bits & Directive601) != 0 && DarwinDirective < PPC::DIR_601) DarwinDirective = PPC::DIR_601;
  if ((Bits & Directive602) != 0 && DarwinDirective < PPC::DIR_602) DarwinDirective = PPC::DIR_602;
  if ((Bits & Directive603) != 0 && DarwinDirective < PPC::DIR_603) DarwinDirective = PPC::DIR_603;
  if ((Bits & Directive604) != 0 && DarwinDirective < PPC::DIR_603) DarwinDirective = PPC::DIR_603;
  if ((Bits & Directive620) != 0 && DarwinDirective < PPC::DIR_603) DarwinDirective = PPC::DIR_603;
  if ((Bits & Directive750) != 0 && DarwinDirective < PPC::DIR_750) DarwinDirective = PPC::DIR_750;
  if ((Bits & Directive970) != 0 && DarwinDirective < PPC::DIR_970) DarwinDirective = PPC::DIR_970;
  if ((Bits & Directive7400) != 0 && DarwinDirective < PPC::DIR_7400) DarwinDirective = PPC::DIR_7400;
  if ((Bits & Feature64Bit) != 0) Has64BitSupport = true;
  if ((Bits & Feature64BitRegs) != 0) Use64BitRegs = true;
  if ((Bits & FeatureAltivec) != 0) HasAltivec = true;
  if ((Bits & FeatureFSqrt) != 0) HasFSQRT = true;
  if ((Bits & FeatureGPUL) != 0) IsGigaProcessor = true;
  if ((Bits & FeatureSTFIWX) != 0) HasSTFIWX = true;

  InstrItinerary *Itinerary = (InstrItinerary *)Features.getInfo(ProcItinKV, ProcItinKVSize);
  InstrItins = InstrItineraryData(Stages, OperandCycles, ForwardingPathes, Itinerary);
  return Features.getCPU();
}
