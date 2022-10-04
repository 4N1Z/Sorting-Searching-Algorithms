//                                      SELECTION SORT

//The selection sort algorithm sorts an array by repeatedly finding the minimum element (considering ascending order) 
//from the unsorted part and putting it at the beginning. 

//The algorithm maintains two subarrays in a given array.

//The subarray which already sorted. 
//The remaining subarray was unsorted.
//In every iteration of the selection sort, the minimum element (considering ascending order) 
//from the unsorted subarray is picked and moved to the sorted subarray. 

// Java program for implementation of Selection Sort

class SelectionSort
{
	void sort(int arr[])
	{
		int n = arr.length;

		// One by one move boundary of unsorted subarray
		for (int i = 0; i < n-1; i++)
		{
			// Find the minimum element in unsorted array
			int min_idx = i;
			for (int j = i+1; j < n; j++)
				if (arr[j] < arr[min_idx])
					min_idx = j;

			// Swap the found minimum element with the first
			// element
			int temp = arr[min_idx];
			arr[min_idx] = arr[i];
			arr[i] = temp;
		}
	}

	// Prints the array
	void printArray(int arr[])
	{
		int n = arr.length;
		for (int i=0; i<n; ++i)
			System.out.print(arr[i]+" ");
		System.out.println();
	}

	// Driver code to test above
	public static void main(String args[])
	{
		SelectionSort ob = new SelectionSort();
		int arr[] = {64,25,12,22,11};
		ob.sort(arr);
		System.out.println("Sorted array");
		ob.printArray(arr);
	}
}

//Time Complexity: The time complexity of Selection Sort is O(N2)
    
//Auxiliary Space: O(1) as the only extra memory used is for temporary variables while swapping two values in Array. 
//The selection sort never makes more than O(N) swaps and can be useful when memory write is a costly operation. 

