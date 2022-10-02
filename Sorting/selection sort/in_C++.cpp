#include<iostream>
using namespace std;
void swap(int arr[],int n)
{
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++)
            if(arr[j]<arr[min])
                min=j;
                swap(arr[min],arr[i]);
    }   
}
int main()
{
    int arr[]={1,23,4546,77,89,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    swap(arr,n);
    cout<<n<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
}  
return 0;
}
