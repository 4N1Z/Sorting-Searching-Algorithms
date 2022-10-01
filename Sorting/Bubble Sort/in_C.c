#include<stdio.h>

/*  Bubble Sort  
 - Give the array as well as n , which is the length of the array.
 - call the function, by specifying the array and the length of the array.
 - This code sorts in ascending order 

*/

int bubblesort(int arr[],int n){
    for(int i=0;i<n;++i)
    {
        for(int j=i+1;j<n;++j)
        {
            if(arr[i]>arr[j])
            {
            // swap(arr,i,j);
                int temp;
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}