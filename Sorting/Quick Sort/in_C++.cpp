/*
Quick Sort
* Based on Divide and conquer paradigm.
* It is not inplace or stable sort.
* It consumes releatively fewer resources during execution

Divide and Conquer:
1. Divide: It divides large array into small array e.g., A[p, r] is divided into A[p....q] & A[q+1....r] such that A[p...q] <= A[q+1....r]
2. Conquer: These two sub arrays are sorted by recursive calls to quicksort.
3. Combine: Since the subarrays are sorted inplace therefore no work is needed combine them as entire array is now sorted.

Quicksort uses partition algorithm in which pivot element can be:
1. First element
2. Last element
3. Random element
4. Median of elments

Space Complexity: IN BEST CASE & AVERAGE CASE: O(logn) and IN WORST CASE: O(n)

Time Complexity: BEST CASE: O(nlogn); AVERAGE CASE: O(nlogn); WORST CASE: O(n2)

*/

// Program to perform the quick sort
#include<iostream>

using namespace std;

// function to scan the array
void scan_Array(int array_1[], int size)
{
    cout << "Enter the elements of the array: \n";
    for(int i=0; i<size; i++)
    {
        cout << "Element [" << i << "]: ";
        cin >> array_1[i];
    }
}

// function to print the array
void print_Array(int array_1[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout << array_1[i] << " ";
    }
}

// function to swap the elements
void swap_Elements(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// function to perform partition in array
int partition(int array_1[], int p, int r)
{
    int i = p - 1;
    int x = array_1[r];
    for(int j = p; j < r; j++)
    {
        if(array_1[j] <= x)
        {
            i++;
            swap_Elements(&array_1[i], &array_1[j]);
        }
    }

    swap_Elements(&array_1[i+1], &array_1[r]);

    return i+1;
}

// function to perform quick sort
void quicksort(int array_1[], int p, int r)
{
    if(p < r)
    {
        int q = partition(array_1, p, r);
        quicksort(array_1, p, q-1);
        quicksort(array_1, q+1, r);
    }
}

int main()
{
    int size, array_1[100];

    // scanning the size of the array
    cout << "Enter the size of the array: ";
    cin >> size;

    // scanning the elements of the array
    scan_Array(array_1, size);

    // assigning the zeroth index to p
    int p = 0;

    // assigning the last index to r
    int r = size-1;

    // printing the scanned array
    cout << "\nArray: \n";
    print_Array(array_1, size);

    // calling the quicksort function
    quicksort(array_1, p, r);

    // printing the sorted array
    cout << "\nSorted Array: \n";
    print_Array(array_1, size);

    return 0;
}
