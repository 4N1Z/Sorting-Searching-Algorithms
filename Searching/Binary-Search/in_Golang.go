// Binary Search is a searching algorithm used in a sorted array by repeatedly dividing the search interval in half. The idea of binary search is to use the information that the array is sorted and reduce the time complexity to O(Log n). 

// Binary Search Algorithm: The basic steps to perform Binary Search are:

// Begin with the mid element of the whole array as a search key.
// If the value of the search key is equal to the item then return an index of the search key.
// Or if the value of the search key is less than the item in the middle of the interval, narrow the interval to the lower half.
// Otherwise, narrow it to the upper half.
// Repeatedly check from the second point until the value is found or the interval is empty.



// Time Complexity: O(log n)
// Auxiliary Space: O(1)


package main
import "fmt"

func binarySearch(needle int, haystack []int) bool {

	low := 0
	high := len(haystack) - 1

	for low <= high{
		median := (low + high) / 2

		if haystack[median] < needle {
			low = median + 1
		}else{
			high = median - 1
		}
	}

	if low == len(haystack) || haystack[low] != needle {
		return false
	}

	return true
}


func main(){
	items := []int{1,2, 9, 20, 31, 45, 63, 70, 100}
	fmt.Println(binarySearch(63, items))
}