/* 
C++ code to linearly search x element in arr[]. 
If x is present then return its location, 
otherwise return -1

Time Complexity: 
Best Case: O(1)  [This occurs when the element to be find is at first position]
Average Case: O(N) [This occurs when the element to be find is at any position]
Worst Case: O(N) [This occurs when the element to be find is at last position]

Space Complexity = O(1) [It takes constant time as no extra memory allaction is required]

Approach:
Starting from first element of array keep checking the element you need, if x element available
then return that element otherwise keep checking till the end of the array. If element not found and 
its end of array then return -1;
*/

#include <iostream>
using namespace std;

int search(int arr[], int N, int x)
{
	int i;
	for (i = 0; i < N; i++)
		if (arr[i] == x)
			return i;
	return -1;
}


int main(void)
{
	int arr[] = { 2, 3, 4, 10, 40 };
	int key = 10;
	int N = sizeof(arr) / sizeof(arr[0]);

	// Function call
	int result = search(arr, N, key);

    if (result == -1) 
    {
	cout << "Element is not present in array";    
    }
	    
    else
    {
	    cout << "Element is present at index " << result;
    }
	return 0;
}
