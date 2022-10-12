# Insertion Sort using python 

"""
Insertion sort is a simple sorting algorithm that works similar to the way you sort playing cards in your hands. 
The array is virtually split into a sorted and an unsorted part. 
Values from the unsorted part are picked and placed at the correct position in the sorted part.

The worst case time complexity of Insertion sort is O(N^2)
The average case time complexity of Insertion sort is O(N^2)
The time complexity of the best case is O(N).
The space complexity is O(1)

"""


#insertion sort function to sort array
def insertionSort(arr):

	# Traverse through 1 to len(arr)
	for i in range(1, len(arr)):

		key = arr[i]

		# Moving elements of arr[0..i-1], that are greater than key, to one position ahead of their current position
		j = i-1
		while j >=0 and key < arr[j] :
				arr[j+1] = arr[j]
				j -= 1
		arr[j+1] = key


#creating array to sort using insertionSort
arr = [1, 4, 2, 15, 6]
# calling inserting sort function and passing arr ti it.
insertionSort(arr)
print("Sorted array is : ")
for i in range(len(arr)):
	print(arr[i])	 #printing sorted array elements

