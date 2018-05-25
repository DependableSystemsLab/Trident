~/llvm-2.9-build/bin/opt -S -load ~/llvm-2.9-build/lib/InstSampling.so -bishe_insert blackscholes-llfi_index.ll -o blackscholes_profile.ll
llvm-gcc -emit-llvm -S sampling.c -o sampling.ll
llvm-link blackscholes_profile.ll sampling.ll -o blackscholes_linked.ll
rm output.txt instCountResult.txt fi_breakdown.txt
lli blackscholes_linked.ll 1 in_4.txt output.txt
python convert_format.py
