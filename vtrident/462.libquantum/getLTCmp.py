#! /usr/bin/python

import sys, os, subprocess

irPath = sys.argv[1]

print "Generating a list of loop-terminating CMPs in loop_terminating_cmp_list.txt"

os.system("rm loop_terminating_cmp_list.txt")

command = ["/home/gpli/llvm-2.9-build/bin/opt", "-S", "-load", "/home/gpli/llvm-2.9-build/lib/CMPTYPE.so", "-loop-dep", irPath, "-o", "null"]
p = subprocess.Popen(command, stdout=subprocess.PIPE, stderr=subprocess.STDOUT)
diffLines = p.stdout.read()

with open("loop_terminating_cmp_list.txt", 'w') as rf:
	for line in diffLines:
		rf.write(line)
		
os.system("rm null")


