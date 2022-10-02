#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={1,23,4,6,74},n=5;
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
     cout<<arr[i]<<" ";
    sort(arr,arr+n,greater<int>());
    cout<<endl;
    for(int x:arr)
    cout<<x<<" ";
    return 0;
}
