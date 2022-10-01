/* InterpolationSearch
Algorithm 
The rest of the Interpolation algorithm is the same except for the above partition logic. 
Step1: In a loop, calculate the value of “pos” using the probe position formula. 
Step2: If it is a match, return the index of the item, and exit. 
Step3: If the item is less than arr[pos], calculate the probe position of the left sub-array. Otherwise, calculate the same in the right sub-array. 
Step4: Repeat until a match is found or the sub-array reduces to zero.
Below is the implementation of the algorithm. */

/*Linear Search finds the element in O(n) time, Jump Search takes O(√ n) time and Binary Search takes O(log n) time. 

Time Complexity: O(log2(log2 n)) for the average case, and O(n) for the worst case 
Auxiliary Space Complexity: O(1)
*/



#include <stdio.h>
#include <stdlib.h>

 
#define MAX 200
 
int interpolation_search(int a[], int bottom, int top, int item) 
{
	int mid;
	while (bottom <= top)
	{
		mid = bottom + (top - bottom) * ((item - a[bottom]) / (a[top] - a[bottom]));
		if (item == a[mid])
			return mid + 1;
		if (item < a[mid])
			top = mid - 1;
		else
			bottom = mid + 1;
	}
	return -1;
}
 
int main() 
{
	int arr[MAX];
	int i, num;
	int item, pos;
		
	printf("\nEnter total elements (num< %d) : ", MAX);
	scanf("%d", &num);
 
	printf("Enter %d Elements : ", num);
	for (i = 0; i < num; i++)
		scanf("%d", &arr[i]);
 
	printf("\nELEMENTS ARE\n: ");
	for (i = 0; i < num; i++)
		printf("%d\t", arr[i]);
 
	printf("\nSearch For : ");
	scanf("%d", &item);
	pos = interpolation_search(&arr[0], 0, num, item);
	if (pos == -1)
		printf("\nElement %d not found\n", item);
	else
		printf("\nElement %d found at position %d\n", item, pos);
	return 0;
}
