'''
<<<<<<   Jump Search     >>>>>
EXPLAINATION

--->  Like Binary Search, Jump Search is a searching algorithm for sorted arrays.
--->  The basic idea is to check fewer elements (than linear search) by jumping ahead by fixed steps or skipping some elements in place of searching all elements.
--->  For example, suppose we have an array arr[] of size n and a block (to be jumped) of size m.
--->  Then we search in the indexes arr[0], arr[m],
      arr[2m]…..arr[km] and so on. Once we find the interval (arr[km] < x < arr[(k+1)m]), 
      we perform a linear search operation from the index km to find the element x.

Time Complexity : O(√n) 
Auxiliary Space : O(1)

'''

import math

def jump_search(A, item):
    print("Entering Jump Search")
    n = len(A)                          # Length of the array
    m = int(math.sqrt(n))               # Step length
    i = 0                               # Starting interval

    while i != len(A)-1 and A[i] < item:
        print("Processing Block - {}".format(A[i: i+m]))
        if A[i+m-1] == item:            # Found the search key
            return i+m-1
        elif A[i+m-1] > item:           # Linear search for key in block
            B = A[i: i+m-1]
            return linear_search(B, item, i)
        i += m

    B = A[i:i+m]                        # Step 5
    print("Processing Block - {}".format(B))
    return linear_search(B, item, i)


def linear_search(B, item, loc):
    print("\t Entering Linear Search")
    i = 0

    while i != len(B):
        if B[i] == item:
            return loc+i
        i += 1
    return -1    
