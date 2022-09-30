#linear searching in python
"""
Linear searching refers to sequential searching

starting from one end it searches for the desired element
till the pointer reaches the end of the array
"""
"""
  * LINEAR SEARCH -
     * Start searching from the first element till you find the element in an array
     * and return the index.
     * 
     * -if value doesnt exist then return -1.
     * -max comparisons in the worst case will be 'N'(big-oh(N))
 """

def linear_search(array, N, target):
  
  for i in range(0, N):
    if target == array[i]:
      return i
    return -1
  
N = len(array)

  
