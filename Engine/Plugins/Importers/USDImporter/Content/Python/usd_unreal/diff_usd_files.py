# Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

import os, sys, string

def is_close_absolute(a, b, tolerance):
	return abs(a-b) <= tolerance

def numeric_values_equal(a, b, tolerance):
	try:
		return is_close_absolute(float(a), float(b), tolerance)
	except ValueError:
		return False

def values_equal(a, b, tolerance):
	if a == b:
		return True
	if len(a) == 0 or len(b) == 0:
		return False
	if a[0] != b[0]:
		return False

	if a[0] == "(" or a[0] == "[":
		split_a = a.strip('()[]').split(", ")
		split_b = b.strip('()[]').split(", ")

		if len(split_a) != len(split_b):
			return False
		if len(split_a) == 0 and len(split_b) == 0:
			return True

		for i in xrange(0, len(split_a)):
			if not values_equal(split_a[i], split_b[i], tolerance):
				return False

		return True
	elif a[0] == "\"":
		return a == b
	else:
		return numeric_values_equal(a, b, tolerance)

	return False

def lines_equal(lineA, lineB, tolerance):

	if lineA == lineB:
		return True
	if len(lineA) == 0 or len(lineB) == 0:
		return False
	if lineA[0] == "#":
		return False

	splitByEqualsA = lineA.split(" = ", 1)
	if len(splitByEqualsA) == 2:

		# ensure both lines have equals characters
		splitByEqualsB = lineB.split(" = ", 1)
		if len(splitByEqualsB) != 2:
			return False

		# ensure text before equals character matches
		if splitByEqualsA[0] != splitByEqualsB[0]:
			return False

		if values_equal(splitByEqualsA[1].rstrip("\n"), splitByEqualsB[1].rstrip("\n"), tolerance):
			return True

	return False

def diff_usd_files(fileA, fileB, tolerance=0.0001):

	baselineData = None
	comparisonData = None

	# Read the files.
	with open(fileA, "r") as f:
		baselineData = f.readlines()
	with open(fileB, "r") as f:
		comparisonData = f.readlines()

	if len(baselineData) != len(comparisonData):
		return "Different number of lines"

	for i in xrange(0, len(baselineData)):
		if lines_equal(baselineData[i], comparisonData[i], tolerance) == False:
			return ("@@ %d @@\n- %s+ %s" % (i + 1, baselineData[i], comparisonData[i]))

	return "EQUAL"

#result = diff_files("D:\\test\\TestExportLevel.usda", "D:\\test\\TestExportLevel-2.usda")
