# Python program for implementation of Shell Sort
#Time Complexity: O(n2)
#Auxiliary Space: O(1)

def shellSort(arr):

	n = len(arr)
	gap = n/2

	while gap > 0:

		for i in range(gap,n):

			temp = arr[i]

			j = i
			while j >= gap and arr[j-gap] >temp:
				arr[j] = arr[j-gap]
				j -= gap

			arr[j] = temp
		gap /= 2

arr = [ 12, 34, 54, 2, 3]

n = len(arr)
print ("Array before sorting:")
for i in range(n):
	print(arr[i]),

shellSort(arr)

print ("\nArray after sorting:")
for i in range(n):
	print(arr[i]),

