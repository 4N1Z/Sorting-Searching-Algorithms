//Time Complexity: O(log n)
//Auxiliary Space: O(log n)


#include<iostream>
using namespace std;

 
int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
 
        // If the element is present at the middle
        // itself
        if (arr[mid] == x)
            return mid;
 
        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
 
        // Else the element can only be present
        // in right subarray
        return binarySearch(arr, mid + 1, r, x);
    }
 
    // We reach here when element is not
    // present in array
    return -1;
}
 
int main(void)
{
    int arr[] = { 1,2,4,8,16,32,64 };
    int x = 32;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, 0, n - 1, x);
    (result == -1)? cout << "Element is not present in array" : cout << "Element is present at index " << result;
    return 0;

}