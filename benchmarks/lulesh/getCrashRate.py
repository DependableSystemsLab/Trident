#! /usr/bin/python

import os, math

os.system("rm crash_rate.txt")

with open("vmsize_log.txt", 'r') as rf:
	lines = rf.readlines()
	for line in lines:
		llfiIndex = line.split("=")[0]
		vmsize = int(line.split("VmSize:")[1].split("kB")[0])
		benignBits = math.floor( math.log(vmsize, 2) )
		dataWidth = 64
		crashRate = (dataWidth - benignBits) / float(dataWidth)
		with open("crash_rate.txt", 'a') as wf:
			wf.write(llfiIndex + " " + `crashRate` + "\n")
			wf.close
			
