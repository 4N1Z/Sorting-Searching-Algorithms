import java.util.Arrays;

// Merge Sort algorithm in Java

public class MergeSort {
	
	public static void main(String[] args) {
		// Array of integers
		int[] arr = { 11, 30, 24, 7, 31, 16, 39, 41 };
	    
	    System.out.println("Before sorting the array: ");
	    System.out.println(Arrays.toString(arr));
	    
	    mergeSort(arr, arr.length);
	    
	    System.out.println("After sorting the array: ");
	    System.out.println(Arrays.toString(arr));
	}
	
	private static void mergeSort(int[] arr, int length) {
		// Can't divide less than 2 elements so return
		if (length < 2) {
			return;
		}
		
		// Middle index
		int mid = length / 2;
		
		// Create left and right array
		int[] leftArr = new int[mid];
		int[] rightArr = new int[length - mid];
		
		// Copy to left and right array
		for (int i = 0; i < mid; i++) {
			leftArr[i] = arr[i];
		}
		
		for (int j = 0; j < length - mid; j++) {
			rightArr[j] = arr[mid + j];
		}
		
		// Call itself
		mergeSort(leftArr, mid);
		mergeSort(rightArr, length - mid);
		merge(arr, leftArr, rightArr, mid, length - mid);
	}
	
	private static void merge(int[] arr, int[] leftArr, int[] rightArr, int leftLength, int rightLength) {
		int i = 0; // index for left array
		int j = 0; // index for right array
		int k = 0; // index for merged array
		
		// compare and merge
		while (i < leftLength && j < rightLength) {
			if (leftArr[i] <= rightArr[j]) {
				arr[k] = leftArr[i];
				i++;
			} else {
				arr[k] = rightArr[j];
				j++;
			}
			k++;
		}	
		
		while (i < leftLength) {
			arr[k] = leftArr[i];
			i++;
			k++;
		}
		
		while (j < rightLength) {
			arr[k] = rightArr[j];
			j++;
			k++;
		}
	}	
}