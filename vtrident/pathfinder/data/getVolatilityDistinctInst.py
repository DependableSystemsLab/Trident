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
uniqStaticDic = {}
uniqVolStaticDic1 = {}
uniqVolStaticDic5 = {}
uniqVolStaticDic10 = {}
uniqVolStaticDic15 = {}
uniqVolStaticDic20 = {}
for x in range(minFileNo, maxFileNo+1):
	for y in range(x+1, maxFileNo+1):
#		print ""
#		print "INPUT:" + `x` + "," + `y`

		if x not in sdcIndexDic:
			continue
		for fiIndex in sdcIndexDic[x]:
			if y not in sdcIndexDic:
				continue

			if fiIndex in sdcIndexDic[y]:
				sdcX = sdcIndexDic[x][fiIndex]
				sdcY = sdcIndexDic[y][fiIndex]
#				print `fiIndex` + " " +`sdcX` + " " + `sdcY` + " " + `abs(sdcX-sdcY)` + " " + `float(dynPortionDic[x][fiIndex])/totalFiTimesDic[x]` + " " + `float(dynPortionDic[y][fiIndex])/totalFiTimesDic[y]`
				if fiIndex not in uniqStaticDic:
					uniqStaticDic[fiIndex] = 0 # 0 is placeholder, no meanings
				sdcDiff = abs(sdcX-sdcY)			

				if sdcDiff > 0.01:
					uniqVolStaticDic1[fiIndex] = 0
				if sdcDiff > 0.05:
					uniqVolStaticDic5[fiIndex] = 0
				if sdcDiff > 0.1:
					uniqVolStaticDic10[fiIndex] = 0
				if sdcDiff > 0.15:
					uniqVolStaticDic15[fiIndex] = 0
				if sdcDiff > 0.2:
					uniqVolStaticDic20[fiIndex] = 0

print "------"
print "In total:"
print "Total Static Insts Seen: " + `len(uniqStaticDic)`
print ">1%: " + `float(len(uniqVolStaticDic1)) / len(uniqStaticDic)`
print ">5%: " + `float(len(uniqVolStaticDic5)) / len(uniqStaticDic)`
print ">10%: " + `float(len(uniqVolStaticDic10)) / len(uniqStaticDic)`
print ">15%: " + `float(len(uniqVolStaticDic15)) / len(uniqStaticDic)`
print ">20%: " + `float(len(uniqVolStaticDic20)) / len(uniqStaticDic)`




