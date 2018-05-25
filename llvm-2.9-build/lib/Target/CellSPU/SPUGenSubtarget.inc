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
  DefaultProc =  1 << 0,
  LargeMemFeature =  1 << 1
};

// Sorted (by key) array of values for CPU features.
static const llvm::SubtargetFeatureKV FeatureKV[] = {
  { "large_mem", "Use large (>256) LSA memory addressing [default = false]", LargeMemFeature, 0 }
};

enum {
  FeatureKVSize = sizeof(FeatureKV)/sizeof(llvm::SubtargetFeatureKV)
};

// Sorted (by key) array of values for CPU subtype.
static const llvm::SubtargetFeatureKV SubTypeKV[] = {
  { "v0", "Select the v0 processor", DefaultProc, 0 }
};

enum {
  SubTypeKVSize = sizeof(SubTypeKV)/sizeof(llvm::SubtargetFeatureKV)
};


enum {
  ItinClassesSize = 19
};

// Functional units for itineraries "SPUItineraries"
namespace SPUItinerariesFU {
  const unsigned ODD_UNIT = 1 << 0;
  const unsigned EVEN_UNIT = 1 << 1;
}

static const llvm::InstrStage Stages[] = {
  { 0, 0, 0, llvm::InstrStage::Required }, // No itinerary
  { 6, SPUItinerariesFU::ODD_UNIT, -1, (llvm::InstrStage::ReservationKinds)0 }, // 1
  { 4, SPUItinerariesFU::ODD_UNIT, -1, (llvm::InstrStage::ReservationKinds)0 }, // 2
  { 1, SPUItinerariesFU::ODD_UNIT, -1, (llvm::InstrStage::ReservationKinds)0 }, // 3
  { 1, SPUItinerariesFU::EVEN_UNIT, -1, (llvm::InstrStage::ReservationKinds)0 }, // 4
  { 6, SPUItinerariesFU::EVEN_UNIT, -1, (llvm::InstrStage::ReservationKinds)0 }, // 5
  { 13, SPUItinerariesFU::EVEN_UNIT, -1, (llvm::InstrStage::ReservationKinds)0 }, // 6
  { 2, SPUItinerariesFU::EVEN_UNIT, -1, (llvm::InstrStage::ReservationKinds)0 }, // 7
  { 4, SPUItinerariesFU::EVEN_UNIT, -1, (llvm::InstrStage::ReservationKinds)0 }, // 8
  { 7, SPUItinerariesFU::EVEN_UNIT, -1, (llvm::InstrStage::ReservationKinds)0 }, // 9
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

static const llvm::InstrItinerary SPUItineraries[] = {
  { 1, 1, 2, 0, 0 }, // 0
  { 1, 2, 3, 0, 0 }, // 1
  { 1, 8, 9, 0, 0 }, // 2
  { 1, 1, 2, 0, 0 }, // 3
  { 1, 6, 7, 0, 0 }, // 4
  { 1, 4, 5, 0, 0 }, // 5
  { 1, 7, 8, 0, 0 }, // 6
  { 1, 2, 3, 0, 0 }, // 7
  { 1, 7, 8, 0, 0 }, // 8
  { 1, 9, 10, 0, 0 }, // 9
  { 1, 7, 8, 0, 0 }, // 10
  { 1, 3, 4, 0, 0 }, // 11
  { 1, 1, 2, 0, 0 }, // 12
  { 1, 0, 0, 0, 0 }, // 13
  { 1, 2, 3, 0, 0 }, // 14
  { 1, 8, 9, 0, 0 }, // 15
  { 1, 5, 6, 0, 0 }, // 16
  { 1, 2, 3, 0, 0 }, // 17
  { 1, 2, 3, 0, 0 }, // 18
  { 1, ~0U, ~0U, ~0U, ~0U } // end marker
};

// Sorted (by key) array of itineraries for CPU subtype.
static const llvm::SubtargetInfoKV ProcItinKV[] = {
  { "v0", (void *)&SPUItineraries }
};

enum {
  ProcItinKVSize = sizeof(ProcItinKV)/sizeof(llvm::SubtargetInfoKV)
};

// ParseSubtargetFeatures - Parses features string setting specified
// subtarget options.
std::string llvm::SPUSubtarget::ParseSubtargetFeatures(const std::string &FS,
                                  const std::string &CPU) {
  DEBUG(dbgs() << "\nFeatures:" << FS);
  DEBUG(dbgs() << "\nCPU:" << CPU);
  SubtargetFeatures Features(FS);
  Features.setCPUIfNone(CPU);
  uint32_t Bits =  Features.getBits(SubTypeKV, SubTypeKVSize,
                                    FeatureKV, FeatureKVSize);
  if ((Bits & DefaultProc) != 0 && ProcDirective < SPU::DEFAULT_PROC) ProcDirective = SPU::DEFAULT_PROC;
  if ((Bits & LargeMemFeature) != 0) UseLargeMem = true;

  InstrItinerary *Itinerary = (InstrItinerary *)Features.getInfo(ProcItinKV, ProcItinKVSize);
  InstrItins = InstrItineraryData(Stages, OperandCycles, ForwardingPathes, Itinerary);
  return Features.getCPU();
}
