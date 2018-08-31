# <program_name> should be updated to original program name
~/llvm-2.9-build/bin/opt -S -load ~/llvm-2.9-build/lib/InstSampling.so -bishe_insert <program_name>-llfi_index.ll -o program_profile.ll
llvm-gcc -emit-llvm -S sampling.c -o sampling.ll
llvm-link program_profile.ll sampling.ll -o <program_name>_linked.ll
rm instCountResult.txt fi_breakdown.txt

# If program produces any output files replace their name with <output_file> and uncomment this line
# rm <output_file>

# Replace <program_input> with input command for program. For example, for blackscholes
# lli program_linked.ll 1 in_4.txt output.txt
lli program_linked.ll <program_input>
python convert_format.py
