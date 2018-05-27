#! /usr/bin/python

import os, sys

#####################################
irPath = sys.argv[1]
#####################################

tuplePropDic = {}
tupleMaskingDic = {}
tupleCrashDic = {}
shiftAvDic = {}


# Read cmp_masking.txt
with open("cmp_masking.txt", "r") as cf:
	cmpLines = cf.readlines()
	for cmpLine in cmpLines:
		llfiIndex = int(cmpLine.split(" ")[0])
		maskingRate = float(cmpLine.split(" ")[1].replace("\n", ""))
		# We assume cmp does not cause crash
		propRate = 1-maskingRate
		tuplePropDic[llfiIndex] = propRate
		tupleMaskingDic[llfiIndex] = maskingRate
		tupleCrashDic[llfiIndex] = 0

# Read crash_rate.txt
with open("crash_rate.txt", "r") as rf:
	crashLines = rf.readlines()
	for crashLine in crashLines:
		llfiIndex = int(crashLine.split(" ")[0])
		crashRate = float(crashLine.split(" ")[1].replace("\n", ""))
		# We assume load/store has no masking in tuple - though stores have masking factor in mem dep. modeling.
		maskingRate = 0
		propRate = 1 - crashRate
		tuplePropDic[llfiIndex] = propRate
		tupleMaskingDic[llfiIndex] = maskingRate
		tupleCrashDic[llfiIndex] = crashRate

# Read profile_shift_value_result.txt
with open("profile_shift_value_result.txt", 'r') as psf:
	shiftLines = psf.readlines()
	for shiftLine in shiftLines:
		llfiIndex = int(shiftLine.split(": ")[0])
		aV = int(shiftLine.split(": ")[1].split(" ")[0])
		shiftAvDic[llfiIndex] = aV


# Read llfi indexed IR for the rest of insts		
with open(irPath, 'r') as irf:
	irLines = irf.readlines()
	for irLine in irLines:
		if "!llfi_index !" in irLine:
			llfiIndex = int(irLine.split("!llfi_index !")[1].replace("\n", ""))
			if llfiIndex not in tuplePropDic:
				propRate = 1
				crashRate = 0
				maskingRate = 0
				# For 'and', 'trunc', 'shl', 'lshr'
				if " and " in irLine:
					propRate = 0.1
					maskingRate = 0.9
				if ' trunc ' in irLine:
					# tmp36 = trunc i64 %tmp35 to i32	!llfi_index ...
					type1 = int(irLine.split(" trunc ")[1].split(" ")[0].replace("i", ""))
					type2 = int(irLine.split(" trunc ")[1].split(" ")[3].replace("i", "").replace(",", ""))
					maskingRate = (type1-type2)/float(type1)
					propRate = 1 - maskingRate
				if llfiIndex in shiftAvDic:
					# Only get the one for executed
					totalWidth = 0
					irLine = irLine.replace("nuw ", "").replace("nsw ", "")
					if ' shl ' in irLine:
						# %32 = shl i32 1, %18, !llfi_index !1423
						# %98 = shl nsw i64 %97, 4, !llfi_index !950
						if "i" in irLine.split(" shl ")[1].split(" ")[0]:
							totalWidth = int(irLine.split(" shl ")[1].split(" ")[0].replace("i", ""))
						else:
							totalWidth = int(irLine.split(" shl ")[1].split(" ")[1].replace("i", ""))
						shiftWidth = shiftAvDic[llfiIndex]
						maskingRate = shiftWidth*2 / float(totalWidth)
						propRate = 1 - maskingRate
					if ' lshr ' in irLine:
						# %26 = lshr i32 %24, %25, !llfi_index !1416
						if "i" in irLine.split(" lshr ")[1].split(" ")[0]:
							totalWidth = int(irLine.split(" lshr ")[1].split(" ")[0].replace("i", ""))
						else:
							totalWidth = int(irLine.split(" lshr ")[1].split(" ")[1].replace("i", ""))
						shiftWidth = shiftAvDic[llfiIndex]
						maskingRate = shiftWidth / float(totalWidth)
						propRate = 1 - maskingRate
					if ' ashr ' in irLine:
						# %28 = ashr i32 %pat2.0.lcssa, %width, !llfi_index !754
						if "i" in irLine.split(" ashr ")[1].split(" ")[0]:
							totalWidth = int(irLine.split(" ashr ")[1].split(" ")[0].replace("i", ""))
						else:
							totalWidth = int(irLine.split(" ashr ")[1].split(" ")[1].replace("i", ""))
						shiftWidth = shiftAvDic[llfiIndex]
						maskingRate = (shiftWidth*2-1) / float(totalWidth)
						propRate = 1 - maskingRate
					
					
 
				# Assume the rest insts have prop rate of 1
				tuplePropDic[llfiIndex] = propRate
				tupleMaskingDic[llfiIndex] = maskingRate
				tupleCrashDic[llfiIndex] = crashRate
				

# Write to inst_tuples.txt
os.system("rm inst_tuples.txt")
with open("inst_tuples.txt", "w") as wf:
	for index in tuplePropDic:
		wf.write(`index` + " <" + `tuplePropDic[index]` + "," + `tupleMaskingDic[index]` + "," + `tupleCrashDic[index]` + ">\n")









