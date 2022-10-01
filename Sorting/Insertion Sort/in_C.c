#include <stdio.h>

/*
   INSERTION SORT
   - Works for both negtive as well as positive number
   - Duplicate numbers are also sorted.

*/
int insertion(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j > 0; j--)
        {
            int temp;
            if (arr[j] < arr[j - 1])
            {
                temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
            else
            {
                break;
            }
        }
    }
    
    // To print the sorted array
    for (int i = 0; i < n; ++i)
    {
        printf("%d ", arr[i]);
    }
}