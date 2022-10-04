
// Quick Sort algorithm follows the divide and conquer approach. Divide and conquer is a technique of breaking down 
// the algorithms into subproblems, then solving the subproblems, and combining the results back together to solve 
// the original problem.

// Quicksort picks an element as pivot, and then it partitions the given array around the picked pivot element.

// Picking a good pivot is necessary for the fast implementation of quicksort. However, it is typical to determine 
// a good pivot. Some of the ways of choosing a pivot are as follows -
    // 1. Pivot can be random, i.e. select the random pivot from the given array.
    // 2. Pivot can either be the rightmost element of the leftmost element of the given array.
    // 3. Select median as the pivot element.

// C++ implementation of QuickSort


// Time Complexity: -
    // Best Case: O(n*logn)
    // Average Case: O(n*logn)
    // Worst Case: O(n2)

// Space Complexity: - O(n*logn)

#include<iostream>
using namespace std;

int partition(int *arr, int start, int end) {

    // pivot
    int pivot = arr[start];
    int count = 0;
    for (int i = start + 1; i <= end; i++) 
    {
        // If current element is smaller
		// than or equal to the pivot
        if (arr[i] <= pivot)
        {
            // Increment the count
            count++;
        }
    }

    int pivotIndex = start + count;

    // Calling Swap Function To Swap An Two Elements
    swap(arr[start], arr[pivotIndex]);

    int i = start;
    int j = end;

    // while start is less than and 
    // end is greater than pivot index
    
    while (i < pivotIndex && j > pivotIndex) {
        while (arr[i] <= arr[pivotIndex]) i++;
        while (arr[j] > arr[pivotIndex]) j--;
        if (i < pivotIndex && j > pivotIndex) 
            swap(arr[i++], arr[j--]);
    }

    return pivotIndex;
}

void quickSort(int *arr, int start, int end) {
    if (start >= end) return;

    // p is partitioning index, arr[p]
    int p = partition(arr, start, end);

    // Separately sort elements before
	// partition and after partition

    quickSort(arr, start, p - 1);
    quickSort(arr, p + 1, end);
}

// Driver Code
int main() {
    int n;
    
    // Accepting an length of the array
    cout << "Enter the length:\t";
    cin >> n;
    int arr[n];

    // Accepting Array Elements
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ":\t";
        cin >> arr[i];
    }
    
    // Calling Quick Sort Function
    quickSort(arr, 0, n - 1);

    // Printing an sorted array
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << "\n";

    return 0;
}
