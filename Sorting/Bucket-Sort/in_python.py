#Bucket sort is mainly useful when input is uniformly distributed over a range. For example, consider the following problem. 
#A simple way is to apply a comparison based sorting algorithm. 
#The lower bound for Comparison based sorting algorithm (Merge Sort, Heap Sort, Quick-Sort .. etc) is Ω(n Log n), i.e., 
#they cannot do better than nLogn.

#Time Complexity	 
#Best	O(n+k)
#Worst	O(n2)
#Average	O(n)
#Space Complexity	O(n+k)
#Stability	Yes


# Bucket Sort in Python


def bucketSort(array):
    bucket = []

    # Create empty buckets
    for i in range(len(array)):
        bucket.append([])

    # Insert elements into their respective buckets
    for j in array:
        index_b = int(10 * j)
        bucket[index_b].append(j)

    # Sort the elements of each bucket
    for i in range(len(array)):
        bucket[i] = sorted(bucket[i])

    # Get the sorted elements
    k = 0
    for i in range(len(array)):
        for j in range(len(bucket[i])):
            array[k] = bucket[i][j]
            k += 1
    return array


array = [.42, .32, .33, .52, .37, .47, .51]
print("Sorted Array in descending order is")
print(bucketSort(array))