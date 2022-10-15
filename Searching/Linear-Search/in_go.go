/* 
Problem Statement:
Go language code to linearly search x element in slice A. 
If x is present then return its location, 
otherwise return -1

Approach:
Starting from first element of array keep checking the element you need, if x element available
then return that element otherwise keep checking till the end of the array. If element not found and 
its end of array then return -1.

Time Complexity = O(N)
Space Complexity = O(1)
*/


package main
import "fmt"

func linearSearch(A []int, n int, x int) {
 for i := 0; i < n; i++ {
  if A[i] == x {
   fmt.Println("Number found at position : ", i+1)
   return
  }
 }

 fmt.Println("Number not found")
 return

}

func main() {
 fmt.Println("Enter the size of the array")
 var n int
 fmt.Scan(&n)

 var x int
 A := make([]int, n, 100)
fmt.Println("Enter elements of the array : ")

 for i := 0; i < n; i++ {
  fmt.Scan(&A[i])
 }

 fmt.Println("Enter the number to be searched")
 fmt.Scan(&x)

 linearSearch(A, n, x)

}
