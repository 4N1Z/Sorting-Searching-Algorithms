#include <stdio.h>

// Linear Search allows you to find the index or position of any number in any order
/*

  * LINEAR SEARCH -
     * Start searching from the first element till you find the element in an aray
     * and return the index.
     * 
     * -if value doesnt exist then return -1.
     * -max comaprisons in the worst case will be 'N'(big-oh(N))
*/

int linearsearch(int arr[], int target, int n)
{

    int i, found = 0;
    for (i = 0; i < n - 1; ++i)
    {
        if (arr[i] == target)
        {
            return i;
            found = 1;
        }
        else
            found = 0;
    }
    if (found == 1)
    {
        printf("The ans is :- %d", i);
    }
    else
    {
        printf("Not found\n");
    }
}