#! /usr/bin/python

import os, sys

os.system("rm simplified_inst_tuples.txt")
with open("inst_tuples.txt" ,'r') as itf:
	lines = itf.readlines()
	for line in lines:
		index = int(line.split(" ")[0])
		pR = float( line.split(" ")[1].split(",")[0].replace("<", "") )
		mR = float( line.split(" ")[1].split(",")[1] )
		cR = float( line.split(" ")[1].split(",")[2].replace(">", "").replace("\n", "") )
		with open("simplified_inst_tuples.txt", 'a') as sf:
			sf.write(`index` + " " + `pR` + " " + `mR` + " " + `cR` + "\n")
			sf.close()


	
