"""
Contributed by Deepanshu Arya <deepanshu.da85@gmail.com>
bogosort (also known as permutation sort, stupid sort, or slowsort) is a sorting algorithm 
based on the generate and test paradigm. The function successively generates permutations 
of its input  until it finds one that is sorted. It is not considered useful for sorting, 
but may be used for educational purposes, to contrast it with more efficient algorithms.
"""
from random import shuffle

def is_sorted(data) -> bool:
    """Determine whether the data is sorted."""
    return all(a <= b for a, b in zip(data, data[1:]))

def bogosort(data) -> list:
    """Shuffle data until sorted."""
    while not is_sorted(data):
        shuffle(data)
    return data

#driver code
data = [int(x) for x in input().split()]
print(bogosort(data))
