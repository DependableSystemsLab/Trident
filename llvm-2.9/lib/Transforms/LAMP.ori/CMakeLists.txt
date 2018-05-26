set(LLVM_REQUIRES_EH 1)

add_llvm_loadable_module( libLAMP
  LAMPLoadProfile.cpp
  LAMPProfiling.cpp
  )
