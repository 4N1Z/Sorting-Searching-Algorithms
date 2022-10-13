/*

Bucket sort is a kind of sorting algorithm, which sorts the elements by grouping them into lists based on digits. 
Since the elements are grouped and put together in a specific list, this algorithm is known as Bucket sort. 
Since it groups based on the number of digits it is also known as radix sort or digital sort. This algorithm sorts 
the list by following the order starting from the least significant digit and continues upto most significant digit. 
The number of iterations is determined by the element with high digits.

Algorithm for bucket sort-
Step 1: To know the number of passes required first find the maximum element of the list and calculate its number of digits.

Step 2: Initialise buckets for all the digits starting from 0 to 9

Step 3: Perform sorting by initially considering the least significant bit (LSB) i.e., one's digit, 
        and insert the digit value in the respective bucket. for example, if LSB is 4 then the key is inserted in the 4th bucket, 
        if it is 2 then the digit value is inserted in the 2nd bucket.

Step 4: Now perform sorting by considering the second last digit and inserting the values in the respective bucket. 

Step 5: Repeat steps (4) and (5) for all the digits the digits are examined.
----------------------------------------------------------------------------------------

Time Complexity :-
      Best case - O(N)
      Average case : O(N + k)

Space Complexity :-
      O(N*k)
      
*/

#include<iostream>
using namespace std;
int findMax(int arr[], int n)
{
    int i,max=arr[0],cnt=0;
    for(i=1;i<n;i++)
    {
        if(arr[i]>max)
            max=arr[i];
    }
    while(max>0)
    {
        cnt++;
        max=max/10;
    }
   
    return cnt;
}

void bucketSort(int arr[],int *bucket[],int n)
{
    static int i,j[10],k,l,d=1;
    int c;
    c=findMax(arr,n);     // getting the max using findMax function and then will use it to loop
  
    for(int m=0;m<c;m++)
    {
        for(i=0;i<10;i++)
            j[i]=0;       // initialize the j array with 0's
        for(i=0;i<n;i++)
        {
            k=(arr[i]/d)%10;    // getting the last digit
            bucket[k][j[k]]=arr[i];
            j[k]++;         // storing frequency of the digit
        }
     
        l=0;
        for(i=0;i<10;i++)
        {
            for(k=0;k<j[i];k++)
            {
                arr[l]=bucket[i][k];
                l++;
            }
        }
        d*=10;
    }
}
int main()
{
    int n,*arr,i;
    int *bucket[10];
    cout<<"Enter no of element : ";
    cin>>n;
    arr=new int[n+1];
    for(i=0;i<10;i++)
        bucket[i]=new int[n];
    cout<<"Enter array element : ";
    for(i=0;i<n;i++)
        cin>>arr[i];
    bucketSort(arr,bucket,n);
   
    cout<<"Sorted array : ";
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}

/* Input - Output for above code

Enter no of element : 4
Enter array element : 7
2
5
4
Sorted array : 2 4 5 7 

*/
