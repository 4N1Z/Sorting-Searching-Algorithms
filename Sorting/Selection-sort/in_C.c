/*

Selection Sort using C
The selection sort algorithm sorts an array by repeatedly finding the minimum element (considering ascending order) from the unsorted part and putting it at the beginning. 
Time complexity is O(n^2)
Follow the below steps to solve the problem:

* 1. Initialize minimum value(min) to the first location of unsorted part of the array(i=0).
* 2. Traverse the array to find the minimum element in the unsorted part of the array.
* 3. After finding, swap the minimum element(arr[min]) with arr[i]. Now location i is sorted.
* 4. Then, increment i to point to the next element.
* 5. Repeat the steps until the array is sorted.

*/

#include<stdio.h>
#include<stdlib.h>
void main()
{
    int arr[30],i,j,n,min=0,temp=05;
    printf("Enter the no. of items in list: ");
    scanf("%d",&n);
    printf("Enter the list: ");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Before Sorting the order of items in list is:\n");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    for(i=0;i<n-1;i++)
    {
        min=i; //Setting the first location of unsortrd array as the minimum
        for(j=i+1;j<n;j++) //Finding the smallest element in unsorted array
        {
            if(arr[j]<arr[min])
               min=j;
        }
        temp=arr[i]; //Swapping values to sort list
        arr[i]=arr[min];
        arr[min]=temp;
    }
    printf("\nAfter Sorting the order of items in list is:\n");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
}
