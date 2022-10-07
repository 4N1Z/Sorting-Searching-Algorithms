
import java.util.*;

class Fibonacci {

	public static void main(String[] args)
		{
		int arr[] = { 10, 22, 35, 40, 45, 50,
					80, 82, 85, 90, 100,235};
		int n = 12;
		int x = 235;
		int ind = Search(arr, x, n);
		if(ind>=0)
		System.out.print("Found at index: "+ind);
		else
		System.out.print(x+" is not present in the array");
	}

	public static int min(int x, int y)
	{
		return (x > y) ? y : x;
	}


	public static int Search(int arr[], int x,int n)
	{
		
		int varMm2 = 0; 
		int varMm1 = 1; 
		int var = varMm2 + varMm1; 

		
		while (var < n) {
			varMm2 = varMm1;
			varMm1 = var;
			var = varMm2 + varMm1;
		}

		
		int offset = -1;

		while (var > 1) {
	
			int i = min(offset + varMm2, n - 1);

		
			if (arr[i] < x) {
				var = varMm1;
				varMm1 = varMm2;
				varMm2 = var - varMm1;
				offset = i;
			}

			
			else if (arr[i] > x) {
				var = varMm2;
				varMm1 = varMm1 - varMm2;
				varMm2 = var - varMm1;
			}
			else
				return i;
		}

		if (varMm1 == 1 && arr[n-1] == x)
			return n-1;

		return -1;
	}


	
}

/*
The Fibonacci search method, just like the Binary search method, is a comparison-based searching algorithm that is based on the divide and conquer technique. This search method works on an array that is sorted in the non-decreasing order.

he Fibonacci search technique is a method of searching a sorted array using a divide and conquer algorithm that narrows down possible locations with the aid of Fibonacci numbers. Compared to binary search, Fibonacci search examines locations whose addresses have lower dispersion. Therefore, when the elements being searched have non-uniform access memory storage (i.e., the time needed to access a storage location varies depending on the location previously accessed), the Fibonacci search has an advantage over binary search in slightly reducing the average time needed to access a storage location.

F(0) = 0 F(1) = 1 F(2) = F(1) + F(0) = 1 + 0 = 1 F(3) = F(2) + F(1) = 1 + 1 = 2 F(4) = F(3) + F(2) = 1 + 2 = 3 and so continues the series

Other searches like binary search also work for the similar principle on splitting the search space to a smaller space but what makes Fibonacci search different is that it divides the array in unequal parts and operations involved in this search are addition and subtraction only which means light arithmetic operations takes place and hence reducing the work load of the computing machine.

Algorithm Let the length of given array be n [0...n-1] and the element to be searched be x.

Then we use the following steps to find the element with minimum steps:

Find the smallest Fibonacci number greater than or equal to n. Let this number be fb(M) [m’th Fibonacci number]. Let the two Fibonacci numbers preceding it be fb(M-1) [(m-1)’th Fibonacci number] and fb(M-2) [(m-2)’th Fibonacci number].

While the array has elements to be checked: -> Compare x with the last element of the range covered by fb(M-2) -> If x matches, return index value -> Else if x is less than the element, move the third Fibonacci variable two Fibonacci down, indicating removal of approximately two-third of the unsearched array.

-> Else x is greater than the element, move the third Fibonacci variable one Fibonacci down. Reset offset to index. Together this results into removal of approximately front one-third of the unsearched array.

Since there might be a single element remaining for comparison, check if fbMm1 is '1'. If Yes, compare x with that remaining element. If match, return index value. From the above algorithm it is clear if we have to search the larger section of the array then the time taken will be more and will result into worst case and it's complexity wil be O(log n). If on the very first search, we get our element then it will be considered as the best case and complexcity will be O(1). When we consider the average case then case left and lies between the best and worst i when we have to search the element on the smaller section of the array and hence we get our average case complexity as O(log n).

*/
