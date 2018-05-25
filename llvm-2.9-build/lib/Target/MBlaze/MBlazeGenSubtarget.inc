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
  FeatureBarrel =  1 << 0,
  FeatureDiv =  1 << 1,
  FeatureEFSL =  1 << 2,
  FeatureESR =  1 << 3,
  FeatureException =  1 << 4,
  FeatureFPU =  1 << 5,
  FeatureFSL =  1 << 6,
  FeatureMMU =  1 << 7,
  FeatureMSRSet =  1 << 8,
  FeatureMul =  1 << 9,
  FeatureMul64 =  1 << 10,
  FeaturePVR =  1 << 11,
  FeaturePatCmp =  1 << 12,
  FeaturePipe3 =  1 << 13,
  FeatureSqrt =  1 << 14
};

// Sorted (by key) array of values for CPU features.
static const llvm::SubtargetFeatureKV FeatureKV[] = {
  { "barrel", "Implements barrel shifter", FeatureBarrel, 0 },
  { "div", "Implements hardware divider", FeatureDiv, 0 },
  { "efsl", "Implements extended FSL instructions", FeatureEFSL, 0 },
  { "esr", "Implements ESR and EAR registers", FeatureESR, 0 },
  { "exception", "Implements hardware exception support", FeatureException, 0 },
  { "fpu", "Implements floating point unit", FeatureFPU, 0 },
  { "fsl", "Implements FSL instructions", FeatureFSL, 0 },
  { "mmu", "Implements memory management unit", FeatureMMU, 0 },
  { "msrset", "Implements MSR register set and clear", FeatureMSRSet, 0 },
  { "mul", "Implements hardware multiplier", FeatureMul, 0 },
  { "mul64", "Implements multiplier with 64-bit result", FeatureMul64, 0 },
  { "patcmp", "Implements pattern compare instruction", FeaturePatCmp, 0 },
  { "pipe3", "Implements 3-stage pipeline", FeaturePipe3, 0 },
  { "pvr", "Implements processor version register", FeaturePVR, 0 },
  { "sqrt", "Implements sqrt and floating point convert", FeatureSqrt, 0 }
};

enum {
  FeatureKVSize = sizeof(FeatureKV)/sizeof(llvm::SubtargetFeatureKV)
};

// Sorted (by key) array of values for CPU subtype.
static const llvm::SubtargetFeatureKV SubTypeKV[] = {
  { "v400", "Select the v400 processor", 0, 0 },
  { "v500", "Select the v500 processor", 0, 0 },
  { "v600", "Select the v600 processor", 0, 0 },
  { "v700", "Select the v700 processor", 0, 0 },
  { "v710", "Select the v710 processor", 0, 0 }
};

enum {
  SubTypeKVSize = sizeof(SubTypeKV)/sizeof(llvm::SubtargetFeatureKV)
};


enum {
  ItinClassesSize = 21
};

// Functional units for itineraries "MBlazeGenericItineraries"
namespace MBlazeGenericItinerariesFU {
  const unsigned ALU = 1 << 0;
  const unsigned IMULDIV = 1 << 1;
}

static const llvm::InstrStage Stages[] = {
  { 0, 0, 0, llvm::InstrStage::Required }, // No itinerary
  { 1, MBlazeGenericItinerariesFU::ALU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 1
  { 3, MBlazeGenericItinerariesFU::ALU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 2
  { 2, MBlazeGenericItinerariesFU::ALU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 3
  { 1, MBlazeGenericItinerariesFU::IMULDIV, -1, (llvm::InstrStage::ReservationKinds)0 }, // 4
  { 17, MBlazeGenericItinerariesFU::IMULDIV, -1, (llvm::InstrStage::ReservationKinds)0 }, // 5
  { 38, MBlazeGenericItinerariesFU::IMULDIV, -1, (llvm::InstrStage::ReservationKinds)0 }, // 6
  { 4, MBlazeGenericItinerariesFU::ALU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 7
  { 7, MBlazeGenericItinerariesFU::ALU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 8
  { 8, MBlazeGenericItinerariesFU::ALU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 9
  { 23, MBlazeGenericItinerariesFU::ALU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 10
  { 36, MBlazeGenericItinerariesFU::ALU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 11
  { 54, MBlazeGenericItinerariesFU::ALU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 12
  { 12, MBlazeGenericItinerariesFU::ALU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 13
  { 5, MBlazeGenericItinerariesFU::ALU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 14
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

static const llvm::InstrItinerary MBlazeGenericItineraries[] = {
  { 1, 1, 2, 0, 0 }, // 0
  { 1, 1, 2, 0, 0 }, // 1
  { 1, 7, 8, 0, 0 }, // 2
  { 1, 2, 3, 0, 0 }, // 3
  { 1, 1, 2, 0, 0 }, // 4
  { 1, 11, 12, 0, 0 }, // 5
  { 1, 10, 11, 0, 0 }, // 6
  { 1, 3, 4, 0, 0 }, // 7
  { 1, 9, 10, 0, 0 }, // 8
  { 1, 8, 9, 0, 0 }, // 9
  { 1, 14, 15, 0, 0 }, // 10
  { 1, 13, 14, 0, 0 }, // 11
  { 1, 12, 13, 0, 0 }, // 12
  { 1, 4, 5, 0, 0 }, // 13
  { 1, 6, 7, 0, 0 }, // 14
  { 1, 5, 6, 0, 0 }, // 15
  { 1, 2, 3, 0, 0 }, // 16
  { 1, 0, 0, 0, 0 }, // 17
  { 1, 1, 2, 0, 0 }, // 18
  { 1, 3, 4, 0, 0 }, // 19
  { 1, 0, 0, 0, 0 }, // 20
  { 1, ~0U, ~0U, ~0U, ~0U } // end marker
};

// Sorted (by key) array of itineraries for CPU subtype.
static const llvm::SubtargetInfoKV ProcItinKV[] = {
  { "v400", (void *)&MBlazeGenericItineraries },
  { "v500", (void *)&MBlazeGenericItineraries },
  { "v600", (void *)&MBlazeGenericItineraries },
  { "v700", (void *)&MBlazeGenericItineraries },
  { "v710", (void *)&MBlazeGenericItineraries }
};

enum {
  ProcItinKVSize = sizeof(ProcItinKV)/sizeof(llvm::SubtargetInfoKV)
};

// ParseSubtargetFeatures - Parses features string setting specified
// subtarget options.
std::string llvm::MBlazeSubtarget::ParseSubtargetFeatures(const std::string &FS,
                                  const std::string &CPU) {
  DEBUG(dbgs() << "\nFeatures:" << FS);
  DEBUG(dbgs() << "\nCPU:" << CPU);
  SubtargetFeatures Features(FS);
  Features.setCPUIfNone(CPU);
  uint32_t Bits =  Features.getBits(SubTypeKV, SubTypeKVSize,
                                    FeatureKV, FeatureKVSize);
  if ((Bits & FeatureBarrel) != 0) HasBarrel = true;
  if ((Bits & FeatureDiv) != 0) HasDiv = true;
  if ((Bits & FeatureEFSL) != 0) HasEFSL = true;
  if ((Bits & FeatureESR) != 0) HasESR = true;
  if ((Bits & FeatureException) != 0) HasException = true;
  if ((Bits & FeatureFPU) != 0) HasFPU = true;
  if ((Bits & FeatureFSL) != 0) HasFSL = true;
  if ((Bits & FeatureMMU) != 0) HasMMU = true;
  if ((Bits & FeatureMSRSet) != 0) HasMSRSet = true;
  if ((Bits & FeatureMul) != 0) HasMul = true;
  if ((Bits & FeatureMul64) != 0) HasMul64 = true;
  if ((Bits & FeaturePVR) != 0) HasPVR = true;
  if ((Bits & FeaturePatCmp) != 0) HasPatCmp = true;
  if ((Bits & FeaturePipe3) != 0) HasPipe3 = true;
  if ((Bits & FeatureSqrt) != 0) HasSqrt = true;

  InstrItinerary *Itinerary = (InstrItinerary *)Features.getInfo(ProcItinKV, ProcItinKVSize);
  InstrItins = InstrItineraryData(Stages, OperandCycles, ForwardingPathes, Itinerary);
  return Features.getCPU();
}
