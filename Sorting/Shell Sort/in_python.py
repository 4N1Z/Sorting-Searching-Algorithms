#Implementation of Shell sort

'''
It is a sorting algorithm that is an extended version of insertion sort. 
Shell sort has improved the average time complexity of insertion sort. 
As similar to insertion sort, it is a comparison-based and in-place sorting algorithm. 
Shell sort is efficient for medium-sized data sets. In insertion sort, we move elements only one position ahead. 
When an element has to be moved far ahead, many movements are involved. The idea of ShellSort is to allow the exchange of far items. 
In Shell sort, we make the array h-sorted for a large value of h. We keep reducing the value of h until it becomes 1. 
An array is said to be h-sorted if all sublists of every h’th element are sorted.
'''

#Time Complexity
#->Best Case      O(n*logn)
#->Average Case   O(n*log(n)2)
#->Worst Case     O(n2)

#Space Complexity O(1)
#Stable N0




# function for shell sort
def shellsort(MyList): 
  n = len(MyList)
  gap = n // 2 
  while gap > 0: 
    for i in range(gap,n): 
      temp = MyList[i] 
      j = i 
      while  j >= gap and MyList[j-gap] > temp: 
        MyList[j] = MyList[j-gap] 
        j = j - gap 
      MyList[j] = temp 
    gap = gap // 2

# function to print list
def PrintList(MyList):
  for i in MyList:
    print(i, end=" ")
  print("\n")
  
# test the code                 
MyList = [10, 1, 23, 50, 4, 9, -4]
print("Original List")
PrintList(MyList)

shellsort(MyList)
print("Sorted List")
PrintList(MyList)

