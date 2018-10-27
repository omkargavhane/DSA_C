//SE-A_IT_12_QUICK SORT.
//OMKAR GAVHANE.
#include<stdio.h>
#include<conio.h>
void quicksort(int,int);
int partition(int,int);
void swap(int*,int*);
int arr[20],no;
void main()
{
int i,j,t;
clrscr();
printf("enter no of elements=");
scanf("%d",&no);
for(i=0;i<no;i++)
{
printf("enter no=");
scanf("%d",&arr[i]);
}
quicksort(0,no-1);
for(i=0;i<no;i++)
printf("%d_",arr[i]);
getch();
}
void quicksort(int low,int up)
{
int p;
if(low<up)
{
p=partition(low,up);
quicksort(low,p-1);
quicksort(p+1,up);
}
}
int partition(int low,int up)
{
int j,i=low-1;
for(j=low;j<up;j++)
{
 if(arr[j]<arr[up])
 swap(&arr[++i],&arr[j]);
}
swap(&arr[++i],&arr[up]);
return(i);
}
void swap(int *x,int *y)
{
int t;
t=*x;
*x=*y;
*y=t;
}