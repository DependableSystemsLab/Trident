import sys, os

##########################
#sys.argv[1]
##########################
minFileNo = 0
maxFileNo = 9
minFiTimes = 50


sdcIndexDic = {}
dynPortionDic = {}
totalFiTimesDic = {}

for x in range(minFileNo, maxFileNo+1):
	with open ("input_" + `x` + "-fi.txt", 'r') as rf:
		totalFiTimes = 0
		localDynPortionDic = {}

		lines = rf.readlines()
		for line in lines:
			if "FI: " in line:
				fiTimes = int(line.split("FI: ")[1].replace("\n", ""))
				totalFiTimes += fiTimes
				if fiTimes > minFiTimes:
					# Get index
					if "," in line:
						fiIndex = int( line.split(",")[0].replace("-- FI Index: ", "") )
						if x not in sdcIndexDic:
							sdcIndexDic[x] = {};
						if fiIndex not in sdcIndexDic[x]:
							sdcIndexDic[x][fiIndex] = {}

						localDynPortionDic[fiIndex] = fiTimes

						# Get SDC prob.
						sdcProb = float( line.split(",")[1].replace(" SDC: ", "") )
						sdcIndexDic[x][fiIndex] = sdcProb

		if x not in totalFiTimesDic:
			totalFiTimesDic[x] = totalFiTimes
		if x not in dynPortionDic:
			dynPortionDic[x] = localDynPortionDic

#print sdcIndexDic
for x in range(minFileNo, maxFileNo+1):
	if x not in sdcIndexDic:
		continue
	for y in range(x+1, maxFileNo+1):
		print ""
		print "INPUT:" + `x` + "," + `y`

		for fiIndex in sdcIndexDic[x]:
			if y not in sdcIndexDic:
				continue
			if fiIndex in sdcIndexDic[y]:
				sdcX = sdcIndexDic[x][fiIndex]
				sdcY = sdcIndexDic[y][fiIndex]
				print `fiIndex` + " " +`sdcX` + " " + `sdcY` + " " + `abs(sdcX-sdcY)` + " " + `float(dynPortionDic[x][fiIndex])/totalFiTimesDic[x]` + " " + `float(dynPortionDic[y][fiIndex])/totalFiTimesDic[y]`
