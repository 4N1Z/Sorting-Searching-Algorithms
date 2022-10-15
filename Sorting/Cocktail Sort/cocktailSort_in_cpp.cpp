//Language: C++
/*Cocktail sort traverses the array in both directions alternatively. This algorithm traverses in forward as well as backward direction in one iteration. 
So it is like a bi-directional bubble sort.*/

/*The first stage loops through the array from left to right, just like the Bubble Sort. During the loop, adjacent items are compared and if the value on the left is 
greater than the value on the right, then values are swapped. At the end of the first iteration, the largest number will reside at the end of the array.
The second stage loops through the array in opposite direction- starting from the item just before the most recently sorted item, and moving back to the start 
of the array. Here also, adjacent items are compared and are swapped if required.*/

/*Time Complexity
    Best Case--	O(n)
    Average Case--	O(n2)
    Worst Case--	O(n2)
    Space--	O(1) Auxiliary Space
*/


// Following is the C++ code for cocktail sort.
#include <bits/stdc++.h>
using namespace std;


void CocktailSort(int a[], int n){  //this function will sort the given array via the cocktail sort
	bool changed = true;
	int start = 0;
	int end = n - 1;

	while (changed) {
		// we have to reset the changed flag on entering the loop
		// to avoid it having a different value from the previous iteration
		changed = false;

		// looping from left to right now
		for (int i = start; i < end; ++i) {
			if (a[i] > a[i + 1]) {
				swap(a[i], a[i + 1]);
				changed = true;
			}
		}

		// if nothing moved, then that means our array is sorted.
		if (!changed)
			break;

		// else, we need to reset the changed flag for the next iteration
		changed = false;

		// update the end point as last item is at its correct position
		--end;

		// looping from right to left now since
        //cocktail sort traverses in both directions
		for (int i = end - 1; i >= start; --i) {
			if (a[i] > a[i + 1]) {
				swap(a[i], a[i + 1]);
				changed = true;
			}
		}

		// updating the starting point
		++start;
	}
}

/* A simple function to print out our array */
void printArray(int a[], int n)
{
	for (int i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");
}

// Driver code
int main()
{
    int n;
    cin>>n;
	int a[n];
    for(int i = 0; i<n; i++){//taking input of the array to be sorted
        cin>>a[i];
    }
	CocktailSort(a, n);//will sort the array
	printArray(a, n);//this will print our sorted array
	return 0;
}
