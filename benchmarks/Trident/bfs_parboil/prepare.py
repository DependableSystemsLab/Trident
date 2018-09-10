#! /usr/bin/python

import os, sys

####################################################
bmName = sys.argv[1]
irPath = bmName + "-llfi_index.ll"
inputCommand = sys.argv[2]
####################################################
OPT = "~/llvm-2.9-build/bin/opt"
LLVMGCC = "llvm-gcc"
LLVMLINK = "llvm-link"
LLVMPASS_FOLDER = "~/llvm-2.9-build/lib/"
LLI = "lli"
PYTHON = "python"
####################################################

# For profile_call_prob_result.txt
print "\n*********************************\nGenerating profile_call_prob_result.txt ...\n\n"
os.system("rm profile_call_prob_result.txt")
os.system( OPT + " -S -load " + LLVMPASS_FOLDER + "/LLVMCALLP.so -bishe_insert " + irPath +" -o " + bmName + "_profile.ll")
os.system(LLVMGCC + " -S -emit-llvm profile_call_prob.c -o profile_call_prob.ll")
os.system(LLVMLINK + " " + bmName + "_profile.ll profile_call_prob.ll -o " + bmName+"_profile_linked.ll")
os.system(LLI + " " + bmName + "_profile_linked.ll " + inputCommand)

# For profile_cmp_prob_result.txt
print "\n*********************************\nGenerating profile_cmp_prob_result.txt ...\n\n"
os.system("rm profile_cmp_prob_result.txt")
os.system(OPT + " -S -load " + LLVMPASS_FOLDER + "/LLVMCP.so -bishe_insert " + irPath + " -o " + bmName + "_profile.ll")
os.system(LLVMGCC + " -S -emit-llvm profile_cmp_prob.c -o profile_cmp_prob.ll")
os.system(LLVMLINK + " " + bmName + "_profile.ll profile_cmp_prob.ll -o " + bmName + "_profile_linked.ll")
os.system(LLI + " " + bmName + "_profile_linked.ll " + inputCommand)

# For profile_cmp_value_result.txt
print "\n*********************************\nGenerating profile_cmp_prob_value.txt ...\n\n"
os.system("rm profile_cmp_value_result.txt")
os.system(OPT + " -S -load " + LLVMPASS_FOLDER + "/LLVMCPV.so -bishe_insert " + irPath + " -o " + bmName + "_profile.ll")
os.system(LLVMGCC + " -S -emit-llvm profile_cmp_value.c -o profile_cmp_value.ll")
os.system(LLVMLINK + " " + bmName + "_profile.ll profile_cmp_value.ll -o " + bmName + "_profile_linked.ll")
os.system(LLI + " " + bmName + "_profile_linked.ll " + inputCommand)
os.system(PYTHON + " resolveCmpProb.py " + irPath)

# For crash_rate.txt
print "\n*********************************\nGenerating crash_rate.txt ...\n\n"
os.system("rm crash_rate.txt")
os.system(OPT + " -S -load " + LLVMPASS_FOLDER + "/LLVMVMS.so -bishe_insert " + irPath + " -o " + bmName + "_profile.ll")
os.system(LLVMGCC + " -S -emit-llvm profile_vmsize.c -o profile_vmsize.ll")
os.system(LLVMLINK + " " + bmName + "_profile.ll profile_vmsize.ll -o " + bmName + "_profile_linked.ll")
os.system(LLI + " " + bmName + "_profile_linked.ll " + inputCommand)
os.system(PYTHON + " getCrashRate.py " + irPath)

# For profile_shift_value_result.txt
print "\n*********************************\nGenerating profile_shift_value_result.txt ...\n\n"
os.system("rm profile_shift_value_result.txt")
os.system(OPT + " -S -load " + LLVMPASS_FOLDER + "/LLVMSP.so -bishe_insert " + irPath + " -o " + bmName + "_profile.ll")
os.system(LLVMGCC + " -S -emit-llvm profile_shift_value.c -o profile_shift_value.ll")
os.system(LLVMLINK + " " + bmName + "_profile.ll profile_shift_value.ll -o " + bmName + "_profile_linked.ll")
os.system(LLI + " " + bmName + "_profile_linked.ll " + inputCommand)

# For inst_tuples.txt
print "\n*********************************\nGenerating inst_tuples.txt ...\n\n"
os.system("rm inst_tuples.txt")
os.system(PYTHON + " getInstTuples.py " + bmName + "-llfi_index.ll ")

# For profile_mem_result.txt
print "\n*********************************\nGenerating profile_mem_result.txt ...\n\n"
os.system("rm profile_mem_result.txt")
os.system(OPT + " -S -load " + LLVMPASS_FOLDER + "/LLVMMM.so -bishe_insert " + irPath + " -o " + bmName + "_profile.ll")
os.system(LLVMGCC + " -S -emit-llvm profile_mem.c -o profile_mem.ll")
os.system(LLVMLINK + " " + bmName + "_profile.ll profile_mem.ll -o " + bmName + "_profile_linked.ll")
os.system(LLI + " " + bmName + "_profile_linked.ll " + inputCommand)

# For loop_terminating_cmp_list.txt
print "\n*********************************\nGenerating loop_terminating_cmp_list.txt ...\n\n"
os.system("rm loop_terminating_cmp_list.txt")
os.system(PYTHON + " getLTCmp.py " + irPath)

# For simplified_inst_tuples.txt
print "\n*********************************\nGenerating simplified_inst_tuples.txt ...\n\n"
os.system("rm simplified_inst_tuples.txt")
os.system(PYTHON + " simplifyInstTuples.py")




print "\n\n\n ######### Profiling Phase Done ######## \n\n\n"





# For tracing memory-level propagation
print "\n*********************************\nTracing memory level propagation ...\n\n"
os.system(PYTHON + " getStoreMaskingRate.py " + irPath)

# Validating model at 3 level
print "\n*********************************\nValiadating model at 3 levels, fi_breakdown.txt must be in place for the input. Results will be in prediction.results ...\n\n"
os.system(PYTHON + " validateModel.py " + irPath + " > prediction.results ")



