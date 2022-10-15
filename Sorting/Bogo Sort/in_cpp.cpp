// C++ implementation of Bogo Sort
// Bogo Sort -:
// BogoSort also known as permutation sort, stupid sort, slow sort, shotgun sort or monkey sort is a particularly ineffective algorithm one person can ever imagine. It is based on generate and test paradigm. The algorithm successively generates permutations of its input until it finds one that is sorted.(Wiki) For example, if bogosort is used to sort a deck of cards, it would consist of checking if the deck were in order, and if it were not, one would throw the deck into the air, pick the cards up at random, and repeat the process until the deck is sorted.

// Bogo Sort Algorithm
// Bogo sort uses 2 steps to sort elements of the array.
// 1. It throws the number randomly.
// 2. Check whether the number is sorted or not.
// 3. If sorted then return the sorted array.
// 4. Otherwise it again generate another randomization of the numbers until the array is sorted.

// Complexity ==>>

// Time Complexity: 

// Worst Case : O(∞) (since this algorithm has no upper bound)
// Average Case: O(n*n!)
// Best Case : O(n)(when array given is already sorted)

// Space Complexity: O(1)

// Code ==>
#include <bits/stdc++.h>
using namespace std;

// To check if array is sorted or not
bool isSorted(int a[], int n)
{
	while (--n > 0)
		if (a[n] < a[n - 1])
			return false;
	return true;
}

// To generate permutation of the array
void shuffle(int a[], int n)
{
	for (int i = 0; i < n; i++)
		swap(a[i], a[rand() % n]);
}

// Sorts array a[0..n-1] using Bogo sort
void bogosort(int a[], int n)
{
	// if array is not sorted then shuffle
	// the array again
	while (!isSorted(a, n))
		shuffle(a, n);
}

// prints the array
void printArray(int a[], int n)
{
	for (int i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");
}

// Driver code
int main()
{
	int a[] = { 3, 2, 5, 1, 0, 4 };
	int n = sizeof a / sizeof a[0];
	bogosort(a, n);
	printf("Sorted array :\n");
	printArray(a, n);
	return 0;
}
