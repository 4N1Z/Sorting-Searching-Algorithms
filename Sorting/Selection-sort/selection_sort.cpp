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