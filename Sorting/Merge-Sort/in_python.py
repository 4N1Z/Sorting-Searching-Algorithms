# Think of it as a recursive algorithm continuously splits the array in half until it cannot be further divided. 
# This means that if the array becomes empty or has only one element left, the dividing will stop, i.e. it is the base case to stop the recursion. 
# If the array has multiple elements, split the array into halves and recursively invoke the merge sort on each of the halves. Finally, 
# when both halves are sorted, the merge operation is applied. 
# Merge operation is the process of taking two smaller sorted arrays and combining them to eventually make a larger one.


# Time Complexity	 
# Best	O(n*log n)
# Worst	O(n*log n)
# Average	O(n*log n)
# Space Complexity	O(n)
# Stability	Yes


# MergeSort in Python


def mergeSort(array):
    if len(array) > 1:

        #  r is the point where the array is divided into two subarrays
        r = len(array)//2
        L = array[:r]
        M = array[r:]

        # Sort the two halves
        mergeSort(L)
        mergeSort(M)

        i = j = k = 0

        # Until we reach either end of either L or M, pick larger among
        # elements L and M and place them in the correct position at A[p..r]
        while i < len(L) and j < len(M):
            if L[i] < M[j]:
                array[k] = L[i]
                i += 1
            else:
                array[k] = M[j]
                j += 1
            k += 1

        # When we run out of elements in either L or M,
        # pick up the remaining elements and put in A[p..r]
        while i < len(L):
            array[k] = L[i]
            i += 1
            k += 1

        while j < len(M):
            array[k] = M[j]
            j += 1
            k += 1


# Print the array
def printList(array):
    for i in range(len(array)):
        print(array[i], end=" ")
    print()


# Driver program
if __name__ == '__main__':
    array = [6, 5, 12, 10, 9, 1]

    mergeSort(array)

    print("Sorted array is: ")
    printList(array)
