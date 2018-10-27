//SE-A_IT_12.                  HEAP SORT
//OMKAR GAVHANE.
#include<stdio.h>
#include<conio.h>
void heapify(int,int);
void heapsort();
int arr[20],n;
void main()
{
int i;
clrscr();
printf("enter no of elements=");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
 printf("enter element=");
 scanf("%d",&arr[i]);
}
heapsort();
for(i=1;i<=n;i++)
printf("%d_",arr[i]);
getch();
}
void heapify(int n,int i)
{
int largest,l,r,t;
largest=i;
l=2*i;
r=l+1;
if(l<n&&arr[l]>arr[largest])
 largest=l;
if(r<n&&arr[r]>arr[largest])
 largest=r;
if(largest!=i)
{
 t=arr[largest];
 arr[largest]=arr[i];
 arr[i]=t;
 heapify(n,largest);
}
}
void heapsort()
{
int i,t;
//build max heap
for(i=n/2;i>0;i--)
 heapify(n,i);
for(i=n;i>0;i--)
{
 t=arr[i];
 arr[i]=arr[1];
 arr[1]=t;
 //heapify root element to get highest
 //element at root again
 heapify(i,1);
}
}



