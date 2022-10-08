#include<iostream>

using namespace std;
void merge(int arr[],int l,int mid,int r){
    int n1 = mid-l+1;
    int n2 = r-mid;

    int a[n1];
    int b[n2];


    for (int i = 0; i < n1; i++)
    {
        /* code */
        a[i] = arr[l+i];
    }
    for (int i = 0; i < n2; i++)
    {
        /* code */
        b[i] = arr[mid+i+1];
    }

    int i = 0;
    int j = 0;
    int k = l;
    while (i<n1 && j<n2)
    {
        /* code */
        if (a[i]<b[j])
        {
            /* code */
            a[k] = a[i];
            k++,i++;
        }
        else{
            a[k] = b[j];
            k++,j++;
        }
        
    }
    while (i<n1)
    {
        /* code */
        a[k] = a[i];
        k++,i++;
    }
    while (j<n2)
    {
        /* code */
        a[k] = b[j];
        k++,j++;
    }
    
    
    
    
    
}

void mergesort(int arr[],int l,int r){
    while (l<r)
    {
        /* code */
        int mid = (l+r)/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,r);

        merge(arr,l,mid,r);
    }
    
}



int main()
{
    int n;
    cin>>n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>arr[i];
    }
    mergesort(arr,0,n);
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }cout<<endl;
    
    

    
    return 0;
}