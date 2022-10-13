/*
Counting sort is a stable sorting technique, 
which is used to sort objects according the keys that are small numbers. 
It counts the number of keys whose key values are same.

Time Complexity: O(n+r)
Space Complexity: O(n+r)
*/

#include <bits/stdc++.h>
using namespace std;
#define RANGE 255

void countSort(char arr[])
{
    char output[strlen(arr)];
  
    int count[RANGE + 1], i;
    memset(count, 0, sizeof(count));
  
    for (i = 0; arr[i]; ++i)
        ++count[arr[i]];
  
    for (i = 1; i <= RANGE; ++i)
        count[i] += count[i - 1];
  
    for (i = 0; arr[i]; ++i) {
        output[count[arr[i]] - 1] = arr[i];
        --count[arr[i]];
    }
  
    for (i = 0; arr[i]; ++i)
        arr[i] = output[i];
}


int main()
{
    char A[] = "WeAreLearningCountSort";
  
    countSort(A);
  
    cout << "Sorted character array is " << A;
    return 0;
}
