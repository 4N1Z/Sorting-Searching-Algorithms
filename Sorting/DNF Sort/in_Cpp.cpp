#include<iostream>
using namespace std;

// DNF = dutch national flag

/*
 * The algorithm is similar to “Segregate 0s and 1s in an array”.
 * The algorithm was posed with three colors, here `0′, `1′ and `2′. 
 * The array is divided into four sections: 
 *    arr[1] to arr[low – 1]
 *    arr[low] to arr[mid – 1]
 *    arr[mid] to arr[high – 1]
 *    arr[high] to arr[n]
 * If the ith element is 0 then swap the element to the low range.
 * Similarly, if the element is 1 then keep it as it is.
 * If the element is 2 then swap it with an element in high range.
*/

//Time complexity = O(n)

void swap(int arr[], int a, int b){
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void dnfSort(int arr[], int n){
    int l = 0, m = 0, h = n-1;

    while(m<=h){
        if(arr[m]==0){
            swap(arr, l , m);
            l++; m++;
        }
        else if(arr[m]==1){
            m++;
        }
        else{
            swap(arr, m,  h);
            h--; 
        }
    }
}

int main() {
    int arr[10] = {1, 0, 2, 1, 0, 2 , 0, 1, 1, 2};
    dnfSort(arr, 10);
    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<" ";
    } 
    cout<<endl;
    
    
    return 0;
}