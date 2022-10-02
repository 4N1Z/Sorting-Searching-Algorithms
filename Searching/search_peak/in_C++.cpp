#include<iostream>
using namespace std;
int peak(int arr[],int n)
{
    if(n==1)
        return arr[0];
    if(arr[0]>arr[1])
        return arr[1];
    if(arr[n-1]>arr[n-2])
        return arr[n-1];
    for(int i=0;i<n;i++){
        if(arr[i]>=arr[i-1]&&arr[i]>arr[i+1])
            return arr[i];
    } 
    return -1;
}
int main()
{
    int arr[]={1,2,45,6,7,8,6};
    int n=7;
    int answer=peak(arr,n);
    cout<<"the peak element is :"<<answer;
    return 0;
}
