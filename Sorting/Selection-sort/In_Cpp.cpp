//C++ Program to Sort the array using Selection Sort

//What Is a Selection Sort Algorithm?

//*Selection sort is an effective and efficient sort algorithm based on comparison operations.
//*It adds one element in each iteration.
//*You need to select the smallest element in the array and move it to the beginning of the array by swapping with the front element.
//*You can also accomplish this by selecting the most potent element and positioning it at the back end.
//*In each iteration, selection sort selects an element and places it in the appropriate position.


//*TIME COMPLEXITIES 
//1. Best Case Complexity occurs when there is no need for sorting, i.e., the array has already been sorted. The time complexity of selection sort in the best-case scenario is O(n^2)

//2.Average Case Complexity occurs when the array elements are arranged in a jumbled order that is neither ascending nor descending correctly. The selection sort has an average case time complexity of O(n^2)

//3.Worst-case complexity - Worst case occurs when array elements must be sorted in reverse order. Assume you need to sort the array elements in ascending order, but they are in descending order. Selection sort has a worst-case time complexity of O(n^2)


#include <iostream>
using namespace std;
void selection_sort(int a[], int size)
{
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        int minindex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (a[j] < a[minindex])
            {
                minindex = j;
            }
        }
        if (minindex != i)
        {
            temp = a[i];
            a[i] = a[minindex];
            a[minindex] = temp;
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << ",";
    }
}
int main()
{
    int arr[10] = {22, 55, 77, 44, 99, 11, 25, 35, 64, 21};
    selection_sort(arr, 10);

    return 0;
}
