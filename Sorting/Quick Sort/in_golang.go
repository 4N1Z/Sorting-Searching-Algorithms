
// QuickSort is a Divide and Conquer algorithm. It picks an element as a pivot and partitions the given array around the picked pivot. There are many different versions of quickSort that pick pivot in different ways. 

// Always pick the first element as a pivot.
// Always pick the last element as a pivot (implemented below)
// Pick a random element as a pivot.
// Pick median as the pivot.
// The key process in quickSort is a partition(). The target of partitions is, given an array and an element x of an array as the pivot, put x at its correct position in a sorted array and put all smaller elements (smaller than x) before x, and put all greater elements (greater than x) after x. All this should be done in linear time.


// Algorithm:

// QUICKSORT (array A, start, end)     
// {  
//  1 if (start < end)     
//  2 {  
// 3 p = partition(A, start, end)  
// 4 QUICKSORT (A, start, p - 1)    
// 5 QUICKSORT (A, p + 1, end)    
// 6 }   
// }  

// Partition Algorithm:

// The partition algorithm rearranges the sub-arrays in a place.

// PARTITION (array A, start, end)     
// {  
//  1 pivot ? A[end]     
//  2 i ? start-1     
//  3 for j ? start to end -1 {  
//  4 do if (A[j] < pivot) {    
//  5 then i ? i + 1     
//  6 swap A[i] with A[j]   
//  7  }}   
//  8 swap A[i+1] with A[end]     
//  9 return i+1  
// }  

// Time complexity : O(n*log(n))
// Space Complexity: O(n)

package main

import (
	"fmt"
	"math/rand"
	"time"
)

func main() {

	slice := generateSlice(20)
	fmt.Println("\n--- Unsorted --- \n\n", slice)
	quicksort(slice)
	fmt.Println("\n--- Sorted ---\n\n", slice, "\n")
}

// Generates a slice of size, size filled with random numbers
func generateSlice(size int) []int {

	slice := make([]int, size, size)
	rand.Seed(time.Now().UnixNano())
	for i := 0; i < size; i++ {
		slice[i] = rand.Intn(999) - rand.Intn(999)
	}
	return slice
}
 
func quicksort(a []int) []int {
    if len(a) < 2 {
        return a
    }
     
    left, right := 0, len(a)-1
     
    pivot := rand.Int() % len(a)
     
    a[pivot], a[right] = a[right], a[pivot]
     
    for i, _ := range a {
        if a[i] < a[right] {
            a[left], a[i] = a[i], a[left]
            left++
        }
    }
     
    a[left], a[right] = a[right], a[left]
     
    quicksort(a[:left])
    quicksort(a[left+1:])
     
    return a
}