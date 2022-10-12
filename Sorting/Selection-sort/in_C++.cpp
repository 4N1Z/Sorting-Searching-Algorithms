//SELECTION SORT 
//TIME COMPLEXITY - O(N^2)
//SPACE COMPLEXITY - O(1)
#include<bits/stdc++.h>
using namespace std;
//function to swap the elements
void swap(int *p,int *q){
  int temp=*p;
  *p=*q;
  *q=temp;
}  
//SELECTION SORT
void selectionSort(vector<int> &v,int n){
  for(int i=0;i<n-1;i++){
    int x=i;
    for(int j=i+1;j<n;j++){
      if(v[j]<v[x])
        x=j;
      if(x!=i)
        swap(&v[x],&v[i]);
    }
  }
}
int main(){
  int n;
  cin>>n;
  vector<int> v(n,0);
  for(int i=0;i<n;i++){
    int a;
    cin>>a;
    v[i]=a;
  }
  selectionSort(v,n);
  for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
  }
  cout<<endl;
  return 0;
}
