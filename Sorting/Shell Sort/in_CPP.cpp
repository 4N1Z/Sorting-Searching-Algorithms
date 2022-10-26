//CPP Program of Shell Sort

/*
The shell sorting technique is based on the insertion sort. In the insertion sort 
sometimes we need to shift large block to insert item in the correct location. 
Using shell sort, we can avoid large number of shifting. The sorting is done with 
specific interval. After each pass the interval is reduced to make smaller interval.
*/

/*
Time Compelexity = O(n logn) for best case else dependent on gap
Space Complexity = O(1)
*/

#include<iostream>
using namespace std;

//swap the two numbers num1 and num2
void doSwap(int &num1, int &num2) {        
   int temp;
   temp = num1;
   num1 = num2;
   num2 = temp;
}

//print the array after sorting
void display(int *array, int n) {
   for(int i = 0; i<n; i++) {
      cout << array[i] << " ";
   }
   cout << endl;
}

//shell sort function
void shellSort(int *arr, int n) {
   int gap, j, k;
   for(gap = n/2; gap > 0; gap = gap / 2) {        
      
      for(j = gap; j<n; j++) {
         for(k = j-gap; k>=0; k -= gap) {
            if(arr[k+gap] >= arr[k])
               break;
            else
               doSwap(arr[k+gap], arr[k]);
         }
      }
   }
}

//main function
int main() {
   int n;
   cout << "Array size: ";
   cin >> n;
   int arr[n];     
   cout << "Enter numbers till above size:" << endl;
   for(int i = 0; i<n; i++) {
      cin >> arr[i];
   }
   cout << "Before Sorting: ";
   display(arr, n);
   shellSort(arr, n);
   cout << "After Sorting: ";
   display(arr, n);
}
