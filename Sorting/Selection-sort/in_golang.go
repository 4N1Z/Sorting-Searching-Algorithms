// The selection sort algorithm sorts an array by repeatedly finding the minimum element (considering ascending order) from the unsorted part and putting it at the beginning. 

// The algorithm maintains two subarrays in a given array.

// The subarray which already sorted. 
// The remaining subarray was unsorted.
// In every iteration of the selection sort, the minimum element (considering ascending order) from the unsorted subarray is picked and moved to the sorted subarray. 

// Follow the below steps to solve the problem:

// Initialize minimum value(min_idx) to location 0.
// Traverse the array to find the minimum element in the array.
// While traversing if any element smaller than min_idx is found then swap both the values.
// Then, increment min_idx to point to the next element.
// Repeat until the array is sorted.

// Time Complexity: The time complexity of Selection Sort is O(N2) as there are two nested loops:

// One loop to select an element of Array one by one = O(N)
// Another loop to compare that element with every other Array element = O(N)
// Therefore overall complexity = O(N) * O(N) = O(N*N) = O(N2)

// Auxiliary Space: O(1) as the only extra memory used is for temporary variables while swapping two values in Array. The selection sort never makes more than O(N) swaps and can be useful when memory write is a costly operation. 

package main
import "fmt"
func Selection_Sort(array[] int, size int) []int {
   var min_index int
   var temp int
   for i := 0; i < size - 1; i++ {
      min_index = i
      // Find index of minimum element
      for j := i + 1; j < size; j++ {
         if array[j] < array[min_index] {
            min_index = j
         }
      }
      temp = array[i]
      array[i] = array[min_index]
      array[min_index] = temp
   }
   return array
}
func main() {
   var num = 7
   array := []int{2,4,3,1,6,8,5}
   fmt.Println(Selection_Sort(array, num))
}