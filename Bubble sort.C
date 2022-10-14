#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n,a[100],temp;
clrscr();
printf("enter n elements of array:");
scanf("%d",&n);
printf("enter unorganised array elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
for(j=0;j<n-1-i;j++)
{
if(a[j+1]<a[j])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
printf("after bubble sorting:");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
getch();
}
