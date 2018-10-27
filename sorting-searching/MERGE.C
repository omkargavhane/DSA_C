//SE-A_IT_12                 MERGE SORT
//OMKAR GAVHANE.
#include<stdio.h>
#include<conio.h>
void mergesort(int,int);
void merge(int,int,int,int);
void copy(int,int);
int arr[20],no,temp[20];
void main()
{
int i,j;
clrscr();
printf("enter no of elements=");
scanf("%d",&no);
for(i=0;i<no;i++)
{
printf("enter no=");
scanf("%d",&arr[i]);
}
mergesort(0,no-1);
for(i=0;i<no;i++)
printf("%d_",arr[i]);
getch();
}
void mergesort(int low,int up)
{
int mid;
if(low<up)
{
 mid=(low+up)/2;
 mergesort(low,mid);
 mergesort(mid+1,up);
 merge(low,mid,mid+1,up);
 copy(low,up);
}
}
void merge(int low1,int up1,int low2,int up2)
{
int ptr=low1;
while(low1<=up1&&low2<=up2)
{
 if(arr[low1]<arr[low2])
 temp[ptr++]=arr[low1++];
 else
 temp[ptr++]=arr[low2++];
}
 while(low1<=up1)
 temp[ptr++]=arr[low1++];
 while(low2<=up2)
 temp[ptr++]=arr[low2++];
}
void copy(int low,int up)
{
int i;
for(i=low;i<=up;i++)
arr[i]=temp[i];
}