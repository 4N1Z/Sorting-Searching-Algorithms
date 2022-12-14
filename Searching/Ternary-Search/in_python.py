#Ternary Search in python
'''
Ternary search, like binary search, is a divide-and-conquer algorithm. 
It is mandatory for the array (in which you will search for an element) to be sorted before you begin the search. 
In this search, after each iteration it neglects 1/3 part of the array and repeats the same operations on the remaining 2/3.
'''

#Time Complexity
#->Average Case   O(log N)
#->Best Case      O(LOG N)
#->Worst Case     O(1)

#Space Complexity O(1)

def ternarySearch(arr, to_find):
    left = 0
    right = len(arr) - 1
    while left <= right:
        temp2 = left + (right - left) // 3
        temp3 = left + 2 * (right - left) // 3
        if to_find == arr[left]:
            return left
        elif to_find == arr[right]:
            return right
        elif to_find < arr[left] or to_find > arr[right]:
            return -1
        elif to_find <= arr[temp2]:
            right = temp2
        elif to_find > arr[temp2] and to_find <= arr[temp3]:
            left = temp2 + 1
            right = temp3
        else:
            left = temp3 + 1
    return -1
def test(x):
    arr = [6, 15, 18, 44, 47, 87, 97]
    index = ternarySearch(arr, x)
    if index != -1:
        print ("The element", x, "is at the index", index)
    else:
        print ("Element", x, "not found!")
test(44)