/* C++ program to implement interpolation
 search.
 
The Interpolation Search is an improvement over Binary Search for instances, where the values in a sorted array are uniformly distributed.
Interpolation constructs new data points within the range of a discrete set of known data points. Binary Search always goes to the middle element to check.
On the other hand, interpolation search may go to different locations according to the value of the key being searched. 
For example, if the value of the key is closer to the last element, interpolation search is likely to start search toward the end side.
Time Complexity: O(log2(log2 n)) for the average case, and O(n) for the worst case 
Auxiliary Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int interpolationSearch(int arr[], int lo, int hi, int x)
{
	int pos;

	if (lo <= hi && x >= arr[lo] && x <= arr[hi]) {

		pos = lo
			+ (((double)(hi - lo) / (arr[hi] - arr[lo]))
				* (x - arr[lo]));
		if (arr[pos] == x)
			return pos;

		if (arr[pos] < x)
			return interpolationSearch(arr, pos + 1, hi, x);

		if (arr[pos] > x)
			return interpolationSearch(arr, lo, pos - 1, x);
	}
	return -1;
}

int main()
{

	int arr[] = { 10, 12, 13, 16, 18, 19, 20, 21,
				22, 23, 24, 33, 35, 42, 47 };

	int n = sizeof(arr) / sizeof(arr[0]);

	int x = 18;
	int index = interpolationSearch(arr, 0, n - 1, x);

	if (index != -1)
		cout << "Element found at index " << index;
	else
		cout << "Element not found.";

	return 0;
}

