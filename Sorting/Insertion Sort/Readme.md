# Insertion sort
## Introduction
<p align="right">
<img src="https://upload.wikimedia.org/wikipedia/commons/4/42/Insertion_sort.gif" width="300" style="float: right; margin: 10px 10px">
</p>
Insertion sort is a simple sorting algorithm that builds the final sorted array (or list) one item at a time by comparisons. It is much less efficient on large lists than more advanced algorithms such as quicksort, heapsort, or merge sort. However, insertion sort provides several advantages:

- Simple implementation
- Efficient for (quite) small data sets, much like other quadratic (i.e., O(n2)) sorting algorithms
- More efficient in practice than most other simple quadratic algorithms such as selection sort or bubble sort
- Adaptive, i.e., efficient for data sets that are already substantially sorted: the time complexity is O(kn) when each element in the input is no more than k places away from its sorted position
- Stable; i.e., does not change the relative order of elements with equal keys
- In-place; i.e., only requires a constant amount O(1) of additional memory space
- Online; i.e., can sort a list as it receives it

## Algorithm

Insertion sort iterates, consuming one input element each repetition, and grows a sorted output list. At each iteration, insertion sort removes one element from the input data, finds the location it belongs within the sorted list, and inserts it there. It repeats until no input elements remain.

Sorting is typically done in-place, by iterating up the array, growing the sorted list behind it. At each array-position, it checks the value there against the largest value in the sorted list (which happens to be next to it, in the previous array-position checked). If larger, it leaves the element in place and moves to the next. If smaller, it finds the correct position within the sorted list, shifts all the larger values up to make a space, and inserts into that correct position.

The resulting array after k iterations has the property where the first k + 1 entries are sorted ("+1" because the first entry is skipped). In each iteration the first remaining entry of the input is removed, and inserted into the result at the correct position, thus extending the result:

![image](https://upload.wikimedia.org/wikipedia/commons/3/32/Insertionsort-before.png)

becomes

![image](https://upload.wikimedia.org/wikipedia/commons/d/d9/Insertionsort-after.png)

with each element greater than x copied to the right as it is compared against x.

The most common variant of insertion sort, which operates on arrays, can be described as follows:

Suppose there exists a function called Insert designed to insert a value into a sorted sequence at the beginning of an array. It operates by beginning at the end of the sequence and shifting each element one place to the right until a suitable position is found for the new element. The function has the side effect of overwriting the value stored immediately after the sorted sequence in the array.
To perform an insertion sort, begin at the left-most element of the array and invoke Insert to insert each element encountered into its correct position. The ordered sequence into which the element is inserted is stored at the beginning of the array in the set of indices already examined. Each insertion overwrites a single value: the value being inserted.
Pseudocode of the complete algorithm follows, where the arrays are zero-based:
### Loop method 
``` 
i ← 1
while i < length(A)
    j ← i
    while j > 0 and A[j-1] > A[j]
        swap A[j] and A[j-1]
        j ← j - 1
    end while
    i ← i + 1
end while 
```
The outer loop runs over all the elements except the first one, because the single-element prefix A[0:1] is trivially sorted, so the invariant that the first i entries are sorted is true from the start. The inner loop moves element A[i] to its correct place so that after the loop, the first i+1 elements are sorted. Note that the and-operator in the test must use short-circuit evaluation, otherwise the test might result in an array bounds error, when j=0 and it tries to evaluate A[j-1] > A[j] (i.e. accessing A[-1] fails).

### Recursive method
The algorithm can also be implemented in a recursive way. The recursion just replaces the outer loop, calling itself and storing successively smaller values of n on the stack until n equals 0, where the function then returns up the call chain to execute the code after each recursive call starting with n equal to 1, with n increasing by 1 as each instance of the function returns to the prior instance. The initial call would be insertionSortR(A, length(A)-1).

```
function insertionSortR(array A, int n)
    if n > 0
        insertionSortR(A, n-1)
        x ← A[n]
        j ← n-1
        while j >= 0 and A[j] > x
            A[j+1] ← A[j]
            j ← j-1
        end while
        A[j+1] ← x
    end if
end function
```
## Best, worst, and average cases

The best case input is an array that is already sorted. In this case insertion sort has a linear running time (i.e., O(n)). During each iteration, the first remaining element of the input is only compared with the right-most element of the sorted subsection of the array.

The simplest worst case input is an array sorted in reverse order. The set of all worst case inputs consists of all arrays where each element is the smallest or second-smallest of the elements before it. In these cases every iteration of the inner loop will scan and shift the entire sorted subsection of the array before inserting the next element. This gives insertion sort a quadratic running time (i.e., O(n2)).

The average case is also quadratic,which makes insertion sort impractical for sorting large arrays. However, insertion sort is one of the fastest algorithms for sorting very small arrays, even faster than quicksort; indeed, good quicksort implementations use insertion sort for arrays smaller than a certain threshold, also when arising as subproblems; the exact threshold must be determined experimentally and depends on the machine, but is commonly around ten.