
#include <bits/stdc++.h>
using namespace std;


//functinon to find maximum in array
int maximum(int *arr, int i)
{
    int max=0;
    for(int j=1; j<=i; j++)
    {
        if(arr[j] > arr[max])
        {
            max = j;
        }
    }
    return max;
}

//an simple function to reverse an array
void reversal(int *arr, int n)
{
    for(int i=0; i<n/2; i++)
    {
        swap(arr[i], arr[n-i-1]);
    }
}

// idea is to sort using reversal of sub arrays O(n^2) 
// no. of flips O(n)
// USE:- instead of comparison need to find sorted array in min possible reversals
void pancakeSort(int *arr, int n)
{
    int maxm;
    for(int i=n-1; i>0; i--)
    {
        maxm = maximum(arr, i);
        if(maxm != i)
        {
            reversal(arr, maxm+1);
            reversal(arr, i+1);
            cout << endl << endl;
        }
    }
}

void displayArray(int *arr, int n)
{
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
}


//main function
int main(){
    int arr[] = { 5, 1, 4, 2, 8};
    int N = sizeof(arr) / sizeof(arr[0]);
    pancakeSort(arr, N);
    cout << "The Sorted array: \n";
    displayArray(arr, N);
    return 0;
}
