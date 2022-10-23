/*
Bubble Sort is the simplest
sorting algorithm that works by repeatedly
swapping the adjacent elements if they are
in the wrong order.
*/

//worst case:n^2
//best case:n

#include <iostream>
using namespace std;
void swap_fun(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
void bubble_sort(int nums[],int size)
{
    int i=0;
    while(i< size)
    {
        for(int j=0;j< size-1;j++)
        {
            if(nums[j] > nums[j+1])
            {
                swap_fun(nums[j],nums[j+1]);
            }
        }
        i++;
    }
}
void print_array(int a[],int z)
{   cout<<"required array"<<endl;
    for(int i=0;i<z;i++)
    {
        cout<<a[i]<<endl;
    }

}
int main()
{   int n;
    cout<<"please enter the size of array"<<endl;
    cin>>n;
    int input[n];
    cout<<"please enter the numbers in the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>input[i];
    }
    bubble_sort(input,n);
    print_array(input,n);

}
