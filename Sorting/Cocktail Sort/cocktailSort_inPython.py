# Cocktail sort traverses the array in both directions alternatively. This algorithm traverses in forward as well as backward direction in one iteration. So it is like a bi-directional bubble sort.

# Time Complexity
#     Best Case--	O(n)
#     Average Case--	O(n2)
#     Worst Case--	O(n2)
#     Space--	O(1) Auxiliary Space




# Following is the Pyhton code for cocktail sort.
def cocktailSort(a):
	n = len(a)
	changed = True
	start = 0
	end = n-1
	while (changed == True):

		# we have to reset the changed flag on entering the loop
		# to avoid it having a different value from the previous iteration
		changed = False

		# looping from left to right now
		for i in range(start, end):
			if (a[i] > a[i + 1]):
				a[i], a[i + 1] = a[i + 1], a[i]
				changed = True

		# if nothing moved, then that means our array is sorted.
		if (changed == False):
			break

		# otherwise, reset the changed flag so that it
		# can be used in the next stage
		changed = False

		# update the end point as last item is at its correct position
		end = end-1

		# looping from right to left now since
		#cocktail sort traverses in both directions
		for i in range(end-1, start-1, -1):
			if (a[i] > a[i + 1]):
				a[i], a[i + 1] = a[i + 1], a[i]
				changed = True

		#updating the starting point
		start = start + 1


# Driver code
a = [3,7,1,5,2]
cocktailSort(a)
print("Sorted array is:")
for i in range(len(a)):
	print("% d" % a[i])
