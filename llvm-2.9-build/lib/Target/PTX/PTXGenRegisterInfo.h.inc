//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// Register Information Header Fragment
//
// Automatically generated file, do not edit!
//
//===----------------------------------------------------------------------===//

#include "llvm/Target/TargetRegisterInfo.h"
#include <string>

namespace llvm {

struct PTXGenRegisterInfo : public TargetRegisterInfo {
  explicit PTXGenRegisterInfo(int CallFrameSetupOpcode = -1, int CallFrameDestroyOpcode = -1);
  virtual int getDwarfRegNumFull(unsigned RegNum, unsigned Flavour) const;
  virtual int getDwarfRegNum(unsigned RegNum, bool isEH) const = 0;
  virtual bool needsStackRealignment(const MachineFunction &) const
     { return false; }
  unsigned getSubReg(unsigned RegNo, unsigned Index) const;
  unsigned getSubRegIndex(unsigned RegNo, unsigned SubRegNo) const;
  unsigned composeSubRegIndices(unsigned, unsigned) const;
};

namespace PTX { // Register classes
  enum {
    PredsRegClassID = 0,
    RRegf32RegClassID = 1,
    RRegf64RegClassID = 2,
    RRegu16RegClassID = 3,
    RRegu32RegClassID = 4,
    RRegu64RegClassID = 5
  };

  struct PredsClass : public TargetRegisterClass {
    PredsClass();
  };
  extern PredsClass	PredsRegClass;
  static TargetRegisterClass * const PredsRegisterClass = &PredsRegClass;
  struct RRegf32Class : public TargetRegisterClass {
    RRegf32Class();
  };
  extern RRegf32Class	RRegf32RegClass;
  static TargetRegisterClass * const RRegf32RegisterClass = &RRegf32RegClass;
  struct RRegf64Class : public TargetRegisterClass {
    RRegf64Class();
  };
  extern RRegf64Class	RRegf64RegClass;
  static TargetRegisterClass * const RRegf64RegisterClass = &RRegf64RegClass;
  struct RRegu16Class : public TargetRegisterClass {
    RRegu16Class();
  };
  extern RRegu16Class	RRegu16RegClass;
  static TargetRegisterClass * const RRegu16RegisterClass = &RRegu16RegClass;
  struct RRegu32Class : public TargetRegisterClass {
    RRegu32Class();
  };
  extern RRegu32Class	RRegu32RegClass;
  static TargetRegisterClass * const RRegu32RegisterClass = &RRegu32RegClass;
  struct RRegu64Class : public TargetRegisterClass {
    RRegu64Class();
  };
  extern RRegu64Class	RRegu64RegClass;
  static TargetRegisterClass * const RRegu64RegisterClass = &RRegu64RegClass;
} // end of namespace PTX

} // End llvm namespace 
