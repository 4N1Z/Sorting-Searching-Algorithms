#Time complexity =  O(d*(n+b))
# d = number of cycles
# b = base value

#Space Complexity = O(n+b)
# two auxiliary arrays of size b (base) and of size n (number of elements),

def countingSort(arr, exp1):

    # n = size of the array
    n = len(arr)

    # Initialize output array that will return sorted array
    output = [0] * (n)

    # count array that store occurrences
    count = [0] * (10)

    # Loop through and store the count of number into array
    for i in range(0, n):
        index = (arr[i]/exp1)
        count[int((index)%10)] += 1

    # Eg. count[0] will store counts of 0 in the array
    for i in range(1,10):
        count[i] += count[i-1]

    # Output array building
    i = n-1
    while i>=0:
        index = (arr[i]/exp1)
        output[ count[ int((index)%10) ] - 1] = arr[i]
        count[int((index)%10)] -= 1
        i -= 1

    # Copy array to output array
    i = 0
    for i in range(0,len(arr)):
        arr[i] = output[i]

def radixSort(arr):

    max1 = max(arr)

    #Do counting sort for every digit. exp is 10^i where i is current digit
    exp = 1
    while max1/exp > 0:
        countingSort(arr,exp)
        exp *= 10

# Driver code

# Using random generator to generate number ranging 1 - 30 and add into list
import random
randomlist = []
for i in range(0,5):
    n = random.randint(1,30)
    randomlist.append(n)

# Printing statement
print('Before sorting:', randomlist)

radixSort(randomlist)
print('After sorting:', randomlist)