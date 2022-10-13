// C++ program for implementation of Heap Sort


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

#include <iostream>
using namespace std;

// To heapify a subtree rooted with node i
// which is an index in arr[].
// n is size of heap
void heapify(int arr[], int N, int i)
{

	// Initialize largest as root
	int largest = i;

	// left = 2*i + 1
	int l = 2 * i + 1;

	// right = 2*i + 2
	int r = 2 * i + 2;

	// If left child is larger than root
	if (l < N && arr[l] > arr[largest])
		largest = l;

	// If right child is larger than largest
	// so far
	if (r < N && arr[r] > arr[largest])
		largest = r;

	// If largest is not root
	if (largest != i) {
		swap(arr[i], arr[largest]);

		// Recursively heapify the affected
		// sub-tree
		heapify(arr, N, largest);
	}
}

// Main function to do heap sort
void heapSort(int arr[], int N)
{

	// Build heap (rearrange array)
	for (int i = N / 2 - 1; i >= 0; i--)
		heapify(arr, N, i);

	// One by one extract an element
	// from heap
	for (int i = N - 1; i > 0; i--) {

		// Move current root to end
		swap(arr[0], arr[i]);

		// call max heapify on the reduced heap
		heapify(arr, i, 0);
	}
}

// A utility function to print array of size n
void printArray(int arr[], int N)
{
	for (int i = 0; i < N; ++i)
		cout << arr[i] << " ";
	cout << "\n";
}

// Driver's code
int main()
{
	int arr[] = { 12, 11, 13, 5, 6, 7 };
	int N = sizeof(arr) / sizeof(arr[0]);

	// Function call
	heapSort(arr, N);

	cout << "Sorted array is \n";
	printArray(arr, N);
}
