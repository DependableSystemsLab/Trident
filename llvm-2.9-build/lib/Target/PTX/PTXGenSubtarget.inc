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
  Feature64Bit =  1 << 0,
  FeatureDouble =  1 << 1,
  FeaturePTX14 =  1 << 2,
  FeaturePTX20 =  1 << 3,
  FeaturePTX21 =  1 << 4,
  FeatureSM10 =  1 << 5,
  FeatureSM13 =  1 << 6,
  FeatureSM20 =  1 << 7
};

// Sorted (by key) array of values for CPU features.
static const llvm::SubtargetFeatureKV FeatureKV[] = {
  { "64bit", "Use 64-bit integer types for addresses.", Feature64Bit, 0 },
  { "double", "Do not demote .f64 to .f32", FeatureDouble, 0 },
  { "ptx14", "Use PTX Language Version 1.4", FeaturePTX14, 0 },
  { "ptx20", "Use PTX Language Version 2.0", FeaturePTX20, FeaturePTX14 },
  { "ptx21", "Use PTX Language Version 2.1", FeaturePTX21, FeaturePTX20 },
  { "sm10", "Enable Shader Model 1.0 compliance", FeatureSM10, 0 },
  { "sm13", "Enable Shader Model 1.3 compliance", FeatureSM13, FeatureSM10 | FeatureDouble },
  { "sm20", "Enable Shader Model 2.0 compliance", FeatureSM20, FeatureSM13 }
};

enum {
  FeatureKVSize = sizeof(FeatureKV)/sizeof(llvm::SubtargetFeatureKV)
};

// Sorted (by key) array of values for CPU subtype.
static const llvm::SubtargetFeatureKV SubTypeKV[] = {
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
std::string llvm::PTXSubtarget::ParseSubtargetFeatures(const std::string &FS,
                                  const std::string &CPU) {
  DEBUG(dbgs() << "\nFeatures:" << FS);
  DEBUG(dbgs() << "\nCPU:" << CPU);
  SubtargetFeatures Features(FS);
  Features.setCPUIfNone(CPU);
  uint32_t Bits =  Features.getBits(SubTypeKV, SubTypeKVSize,
                                    FeatureKV, FeatureKVSize);
  if ((Bits & Feature64Bit) != 0) Use64BitAddresses = true;
  if ((Bits & FeatureDouble) != 0) SupportsDouble = true;
  if ((Bits & FeaturePTX14) != 0 && PTXVersion < PTX_VERSION_1_4) PTXVersion = PTX_VERSION_1_4;
  if ((Bits & FeaturePTX20) != 0 && PTXVersion < PTX_VERSION_2_0) PTXVersion = PTX_VERSION_2_0;
  if ((Bits & FeaturePTX21) != 0 && PTXVersion < PTX_VERSION_2_1) PTXVersion = PTX_VERSION_2_1;
  if ((Bits & FeatureSM10) != 0 && PTXShaderModel < PTX_SM_1_0) PTXShaderModel = PTX_SM_1_0;
  if ((Bits & FeatureSM13) != 0 && PTXShaderModel < PTX_SM_1_3) PTXShaderModel = PTX_SM_1_3;
  if ((Bits & FeatureSM20) != 0 && PTXShaderModel < PTX_SM_2_0) PTXShaderModel = PTX_SM_2_0;
  return Features.getCPU();
}
