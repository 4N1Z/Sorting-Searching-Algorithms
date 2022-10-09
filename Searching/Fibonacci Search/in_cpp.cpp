//Fibonacci Search in CPP
/*
Time Complexity = O(log N)
Space Complexity = O(N)


Important Points:

Work Only for Sorted Array
1. Fibonacci Search divides given array into unequal parts.
2. Binary Search uses a division operator to divide range. Fibonacci Search doesn’t use /, but uses + and -. 
   The division operator may be costly on some CPUs.
3. Fibonacci Search examines relatively closer elements in subsequent steps. So when the input array is big that
   cannot fit in CPU cache or even in RAM, Fibonacci Search can be useful.
*/


#include <bits/stdc++.h>
using namespace std;

int min(int x, int y) { 
    if(x>y) return x;
    else return y;
}


int fibMonaccianSearch(int arr[], int x, int n)
{
	int fibMMm2 = 0; 
	int fibMMm1 = 1; 
	int fibM = fibMMm2 + fibMMm1; 

	while (fibM < n) {
		fibMMm2 = fibMMm1;
		fibMMm1 = fibM;
		fibM = fibMMm2 + fibMMm1;
	}
	int offset = -1;

	while (fibM > 1) {
		int i = min(offset + fibMMm2, n - 1);

		if (arr[i] < x) {
			fibM = fibMMm1;
			fibMMm1 = fibMMm2;
			fibMMm2 = fibM - fibMMm1;
			offset = i;
		}

		else if (arr[i] > x) {
			fibM = fibMMm2;
			fibMMm1 = fibMMm1 - fibMMm2;
			fibMMm2 = fibM - fibMMm1;
		}

		else
			return i;
	}

	if (fibMMm1 && arr[offset + 1] == x)
		return offset + 1;

	return -1;
}

int main()
{
	int arr[]
		= { 10, 22, 35, 40, 45, 50, 80, 82, 85, 90, 100,235};
	int n = sizeof(arr) / sizeof(arr[0]);
	int x = 235;
	int ind = fibMonaccianSearch(arr, x, n);
if(ind>=0)
	cout << "Found at index: " << ind;
else
	cout << x << " isn't present in the array";

	return 0;
}

