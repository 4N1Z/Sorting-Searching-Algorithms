#include<iostream>
using namespace std;

int partition(int *arr, int start, int end) {
    int pivot = arr[start];
    int count = 0;
    for (int i = start + 1; i <= end; i++) if (arr[i] <= pivot) count++;

    int pivotIndex = start + count;
    swap(arr[start], arr[pivotIndex]);

    int i = start;
    int j = end;
    while (i < pivotIndex && j > pivotIndex) {
        while (arr[i] <= arr[pivotIndex]) i++;
        while (arr[j] > arr[pivotIndex]) j--;
        if (i < pivotIndex && j > pivotIndex) 
            swap(arr[i++], arr[j--]);
    }

    return pivotIndex;
}

void quickSort(int *arr, int start, int end) {
    if (start >= end) return;
    int p = partition(arr, start, end);
    quickSort(arr, start, p - 1);
    quickSort(arr, p + 1, end);
}

int main() {
    int n;
    cout << "Enter the length:\t";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ":\t";
        cin >> arr[i];
    }
    
    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << "\n";

    return 0;
}