// Shell sort is an efficient sorting algorithm. it is based on insertion sort. It has low usage of stack memory.
//Firstly in the algorithm far away elements are sorted. Then the gap becomes smaller and closer elements are compared. In this way elements that are not in a correct position can be positioned faster.
import java.util.Arrays;
class ShellSort {

  // elements rearranged at each n/2, n/4, n/8, ... intervals
  void shellSort(int array[], int n) {
  for (int interval = n / 2; interval > 0; interval /= 2) {
    for (int i = interval; i < n; i += 1) {
    int temp = array[i];
    int j;
    for (j = i; j >= interval && array[j - interval] > temp; j -= interval) 
      {
      array[j] = array[j - interval];
      }
      array[j] = temp;
      }
    }
  }
  public static void main(String args[]) {
  int[] arr = { 9, 8, 3, 7, 5, 6, 4, 1 };
  int size = arr.length;
  ShellSort ss = new ShellSort();
  ss.shellSort(arr, size);
  System.out.println("Sorted Array (Ascending Order): ");
  for (int i=0; i<arr.length; ++i)
            System.out.print(arr[i] + " ");
  }
}


// OUTPUT
//Sorted Array (Ascending Order): 1 3 4 5 6 7 8 9 

/* 
Time Complexity	 
  Best:-	O(nlog n)
  Worst:-	O(n2)
  Average:-	O(nlog n)
Space Complexity:-	O(1)
Stable algorithm:-	No 
*/

//Shellsort is used in the linux kernel because it does not use the call stack.
