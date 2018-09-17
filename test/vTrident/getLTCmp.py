#! /usr/bin/python

import sys, os, subprocess
from config import OPT,LLVMPASS_FOLDER

irPath = sys.argv[1]

print "Generating a list of loop-terminating CMPs in loop_terminating_cmp_list.txt"

os.system("rm loop_terminating_cmp_list.txt")

command = [OPT, "-S", "-load", LLVMPASS_FOLDER + "/CMPTYPE.so", "-loop-dep", irPath, "-o", "null"]
p = subprocess.Popen(command, stdout=subprocess.PIPE, stderr=subprocess.STDOUT)
diffLines = p.stdout.read()

with open("loop_terminating_cmp_list.txt", 'w') as rf:
	for line in diffLines:
		rf.write(line)
		
os.system("rm null")


