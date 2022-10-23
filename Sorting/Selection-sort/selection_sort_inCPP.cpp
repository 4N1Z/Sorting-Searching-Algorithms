/*
The selection sort algorithm sorts
an array by repeatedly finding the
minimum element (considering ascending order)
from the unsorted part and putting it at the
beginning.
*/


//worst case:n^2
//best case:n^2
#include<iostream>
using namespace std;
void swap_fun(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
void selection_sort(int a[],int size)
{   int min;
    for(int i=0;i<size-1;i++)
    {   min=i;
        for(int j=i+1;j<size;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        swap_fun(a[i],a[min]);
    }
}
void print_array(int b[],int z)
{   cout<<"required array"<<endl;
    for(int i=0;i<z;i++)
    {
        cout<<b[i]<<endl;
    }

}
int main()
{
    int n;
    cout<<"please enter the size of array"<<endl;
    cin>>n;
    int input[n];
    cout<<"please enter the numbers in the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>input[i];
    }
    selection_sort(input,n);
    print_array(input,n);
}
