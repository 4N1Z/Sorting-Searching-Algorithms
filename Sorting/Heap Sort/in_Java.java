// JAVA program for implementation of Heap Sort


/* Heap Sort is a popular and efficient sorting algorithm in computer programming. Learning how to write the heap sort algorithm requires knowledge
of two types of data structures - arrays and trees. We basically reprsent our array in form of binary tree where root is at index 0 and has two children at 2*i+1 and
2*i+2, we modify our array in such a way that at root there is always the largest element present(max heap), then in our array we insert this largest element
at last position and delete this top element i.e. root element from the heap and using heapify function on rest of the array and it again converts the rest of the array
to max heap and we repeat this process till all the elements are deleted from the heap and we got sorted array. 
Time Complexity :-
Best	O(nlog n)
Worst	O(nlog n)
Average	O(nlog n)
Space Complexity :-
O(1) */



  
  public class HeapSort {
  
    public void sort(int arr[]) {
      int n = arr.length;
  
      //Building max heap 
      for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
      }
  
      //Implementation of heap sort
      for (int i = n - 1; i >= 0; i--) {
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;
  
        //Heapify the root element
        heapify(arr, i, 0);
      }
    }
  
    void heapify(int arr[], int n, int i) {
      // check which root is larger left child or right child
      int largest = i;
      int l = 2 * i + 1;
      int r = 2 * i + 2;
  
      if (l < n && arr[l] > arr[largest])
        largest = l;
  
      if (r < n && arr[r] > arr[largest])
        largest = r;
  
      
      if (largest != i) {
        int swap = arr[i];
        arr[i] = arr[largest];
        arr[largest] = swap;
  
        heapify(arr, n, largest);
      }
    }
  
    // print array function
    static void printArray(int arr[]) {
      int n = arr.length;
      for (int i = 0; i < n; ++i)
        System.out.print(arr[i] + " ");
      System.out.println();
    }
  
    
    public static void main(String args[]) {
      int arr[] = { 3, 19, 4, 78, 6, 10 };
  
      HeapSort sortHeap = new HeapSort();
      sortHeap.sort(arr);
  
      printArray(arr);
    }
  }
