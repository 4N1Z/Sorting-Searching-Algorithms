public class mergesort {
   /*    What is merge sort?
   Merge sort is the sorting technique that follows the divide and conquer approach.
   he important part of the merge sort is the MERGE function. This function performs 
   the merging of two sorted sub-arrays that are A[beg…mid] and A[mid+1…end], 
   to build one sorted array A[beg…end]. So, the inputs of the MERGE function are A[], beg, mid, and end.
   
  Time Complexity

Best Case   	 O(n*logn)
Average Case	 O(n*logn)
Worst Case	   O(n*logn)   */
   
        //sorting method (to do step1(divide) & step2(sort parts))
        public static void mergeSort(int arr[], int si, int ei) { 
            if(si >= ei) {
                return;
            }
            int mid = si + (ei - si)/2; // or = (si + ei) / 2; 
            mergeSort(arr, si, mid);
            mergeSort(arr, mid+1, ei);
    
            merge(arr, si, mid, ei);
        }
    
        //merge method to merge the sorted parts
        public static void merge(int arr[], int si, int mid, int ei) {
            int temp[] = new int[ei-si+1];
            int i = si; //idx for 1st sorted part
            int j = mid+1; //idx for 2nd sorted part
            int k = 0; //idx for temp;
    
            while(i <= mid && j <= ei) {
                if(arr[i] < arr[j]) {
                    temp[k] = arr[i];
                    i++;
                } else {
                    temp[k] = arr[j];
                    j++;
                }
                k++;
            }
    
            //for leftover elements of 1st sorted part
            while(i <= mid) {
                temp[k++] = arr[i++];
            }
    
            //for leftover elements of 2nd sorted part
            while(j <= ei) {
                temp[k++] = arr[j++];
            }
    
            //copy temp to original array
            for(k=0, i=si; k<temp.length; k++, i++) {
                arr[i] = temp[k];
            }
        }
   
   //print
    
        public static void printArr(int arr[]) {
            for(int i=0; i<arr.length; i++) {
                System.out.print(arr[i] +" ");
            }
            System.out.println();
        }
   //call a function
        public static void main(String args[]) {
            int arr[] = {6, 3, 9, 5, 2, 8};
            mergeSort(arr, 0, arr.length-1);
            printArr(arr);
        }
    }

