// Java program for implementation of Selection Sort
class SelectionSort
{
void sort(int arr[])
{
int n = arr.length;
// One by one move boundary of unsorted subarray
for (int i = 0; i < n-1; i++)
{
// Find the minimum element in unsorted array
int min_idx = i;
for (int j = i+1; j < n; j++)
if (arr[j] < arr[min_idx])
min_idx = j;