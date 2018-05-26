//===- LAMPLoadProfile.h - Instrumentation passes --*- C++ -*-===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// Info...
//
//===----------------------------------------------------------------------===//
#ifndef LAMPLOADPROFILE_H
#define LAMPLOADPROFILE_H

namespace llvm {

  class ModulePass;
  class FunctionPass;
  class LoopPass;

  LoopPass *createLAMPBuildLoopMapPass();
  ModulePass *createLAMPLoadProfilePass();

  class LAMPBuildLoopMap : public LoopPass {
    static unsigned int loop_id;
    static bool IdInitFlag;
    
  public:
    std::map<unsigned int, BasicBlock*> IdToLoopMap;    // LoopID -> headerBB*
    std::map<BasicBlock*, unsigned int> LoopToIdMap;    // headerBB* -> LoopID
    static char ID;
    LAMPBuildLoopMap() : LoopPass(ID) {}

    virtual bool runOnLoop (Loop *L, LPPassManager &LPM);
    virtual void getAnalysisUsage(AnalysisUsage &AU) const;
  };  // LLVM Loop Pass can not be required => can not pass analysis info

  class LAMPLoadProfile : public ModulePass {
  public:
    std::map<unsigned int, Instruction*> IdToInstMap;   // Inst* -> InstId
    std::map<Instruction*, unsigned int> InstToIdMap;   // InstID -> Inst*
    std::map<unsigned int, BasicBlock*> IdToLoopMap;    // LoopID -> headerBB*
    std::map<BasicBlock*, unsigned int> LoopToIdMap;    // headerBB* -> LoopID
    std::map<std::pair<Instruction*, Instruction*>*, unsigned int> DepToTimesMap; 
    std::map<BasicBlock*, std::set<std::pair<Instruction*, Instruction*>* > > LoopToDepSetMap;
    std::map<BasicBlock*, unsigned int> LoopToMaxDepTimesMap;

    static unsigned int lamp_id;
    static char ID;
    LAMPLoadProfile() : ModulePass (ID) {}

    virtual bool runOnModule (Module &M);
    virtual void getAnalysisUsage(AnalysisUsage &AU) const;
  };
}
#endif 
