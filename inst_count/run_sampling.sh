# Update the path for LLVM GCC binary and checkput path of Trident
LLVMGCC="llvm-gcc"
ROOT= ""

OPT=$ROOT"llvm-2.9-build/bin/opt" 
LLVMGCC="llvm-gcc" 
LLVMLINK=$ROOT"llvm-2.9-build/bin/llvm-link"
LLVMPASS_FOLDER=$ROOT"llvm-2.9-build/lib" 
LLI=$ROOT"llvm-2.9-build/bin/lli"
PYTHON="python"
TRANS_NAME="/InstSampling.so"
TRANSFORM_PATH=$LLVMPASS_FOLDER$TRANS_NAME

# <program_name> should be updated to original program name
$OPT -S -load $TRANSFORM_PATH -bishe_insert <program_name>-llfi_index.ll -o program_profile.ll
$LLVMGCC -emit-llvm -S sampling.c -o sampling.ll
$LLVMLINK program_profile.ll sampling.ll -o program_linked.ll
rm instCountResult.txt fi_breakdown.txt

# If program produces any output files replace their name with <output_file> and uncomment this line
# rm <output_file>

# Replace <program_input> with input command for program. For example, for blackscholes
# $LLI program_linked.ll 1 in_4.txt output.txt
$LLI program_linked.ll <program_input>
$PYTHON convert_format.py
