// Algorithm is based on the idea to sort array using minimum sub arrays reversals.
// Unlike tranditional sorting algorithms it is not a comparison based sorting algorithm.

// no. of flips O(n) {actually its 2n-3}

//worst case : O(n2) {when array has alternately arranged short and large nos.} 
//Avg case : O(n2)
//Best case : O(n)
//Space complexity : O(1)
//Inplace : yes
//stable : no


#include <bits/stdc++.h>
using namespace std;

//functinon to find maximum element in the arrays's index
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

// the pancake sort
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

//a function to display the output array
void displayArray(int *arr, int n)
{
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
}


//main function
int main(){
    int arr[] = { 9, 1, 5, 2, 8};
    int N = sizeof(arr) / sizeof(arr[0]);
    pancakeSort(arr, N);
    cout << "The Sorted array: \n";
    displayArray(arr, N);
    return 0;
}
