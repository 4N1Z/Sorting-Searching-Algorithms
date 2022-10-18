""" 

This script contains python program for implementation of Bubble Sort

Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in the wrong order. 
This algorithm is not suitable for large data sets as its average and worst-case time complexity is quite high.
Different complexities:
Worst complexity: n^2
Average complexity: n^2
Best complexity: n
Space complexity: 1
program
"""

def bubbleSort(arr):
	n = len(arr)
	swapped = False
	for i in range(n-1):
		
		for j in range(0, n-i-1):

	
			if arr[j] > arr[j + 1]:
				swapped = True
				arr[j], arr[j + 1] = arr[j + 1], arr[j]
		
		if not swapped:
		
			return


arr = [6, 34, 5, 12, 62, 11, 10]

bubbleSort(arr)

print("Sorted array is:")
for i in range(len(arr)):
	print("% d" % arr[i], end=" ")
