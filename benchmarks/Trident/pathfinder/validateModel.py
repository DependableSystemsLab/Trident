import sys, os, subprocess

irPath = sys.argv[1]

totalCount = 0 
accumSdc = 0
accumBenign = 0
accumCrash = 0
with open("fi_breakdown.txt", 'r') as rf:
	lines = rf.readlines()
	for line in lines:
		if "--" in line:
			index = int(line.split("FI Index: ")[1].split(",")[0])
			count = int(line.split("Total FI: ")[1].replace("\n", ""))
			totalCount += count

			command = ["python", "executeModel.py", irPath, `index`]
			p = subprocess.Popen(command, stdout=subprocess.PIPE, stderr=subprocess.STDOUT)
			diffLines = p.stdout.read()
			
			crashR = float(diffLines.split("\n")[-2].split(": ")[1].replace("\n", ""))
			maskingR = float(diffLines.split("\n")[-3].split(": ")[1].replace("\n", ""))
			sdcR = float(diffLines.split("\n")[-4].split(": ")[1].replace("\n", ""))

			accumSdc += sdcR * count
			accumBenign += maskingR * count
			accumCrash += crashR * count

			print "FI index: " + `index` + ", SDC: " + `sdcR` + ", Benign: " + `maskingR` + ", Crash: " + `crashR`

print "Aggregated SDC: " + ` accumSdc/ float(totalCount)` 
print "Aggregated Benign: " + `accumBenign / float(totalCount)` 
print "Aggregated Crash: " + `accumCrash / float(totalCount)` 
