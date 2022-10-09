import java.util.Arrays;

/**
 * Find the position of x in the sorted array using Exponential search.
 */
public class ExponentialSearch {

	public static void main(String[] args) {
		int arr[] = {2, 3, 4, 6, 10, 40};
		int x = 4;
		int result = exponentialSearch(arr, x);         
		System.out.println("Element "+ x +((result < 0) ? " is not present in array" : " is present at index " +  result));
	}

	/**
	 * Exponential search involves two steps: 
	 * 1. Find range where element is present.
	 * 2. Do Binary Search in above found range.
	 * 
	 * @param arr - sorted array
	 * @param x - value to search
	 * @return index of x
	 */
	static int exponentialSearch(int arr[], int x)
	{
		int n = arr.length;
		// If x is present at first location itself
		if (arr[0] == x)
			return 0;
		// Find range for binary search by repeated doubling
		int i = 1;
		while (i < n && arr[i] <= x) {
			i = i*2;
		}
		// Call binary search for the found range.
		return Arrays.binarySearch(arr, i/2,  Math.min(i, n-1), x);
	}
}
