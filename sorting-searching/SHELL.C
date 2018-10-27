//SE-A_IT_12.                 SHELL_SORT
//OMKAR GAVHANE.
#include<stdio.h>
#include<conio.h>
int arr[20],no,low,up;
void shell_sort(int,int);
void swap(int*,int*);
void main()
{
int i,t,gap,cp;
clrscr();
printf("\nenter no of element=");
scanf("%d",&no);
for(i=0;i<no;i++)
{
 printf("enter element=");
 scanf("%d",&arr[i]);
}
shell_sort(0,no-1);
for(i=0;i<no;i++)
printf("%d_",arr[i]);
getch();
}
/*find the gap then compare current element
with element eith GAP position ahead
here GAP divides the array into no of arrays
that no is gap reduce the gap till it reahes to 1.
IF THE ELEMENT GET SWAPPED then for that element
do checking with previous set of elements*/
void shell_sort(int low,int up)
{
int i,t,cp,gap=(low+up)/2;
while(gap>low)
{
 i=low;
while((i+gap)<=up)
{
if(arr[i]>arr[i+gap])
{
swap(&arr[i],&arr[i+gap]);
cp=i;
 while((i-gap)>=low)
 {
 if(arr[i-gap]>arr[i])
 swap(&arr[i],&arr[i-gap]);
 i--;
 }
i=cp;
}
i++;
}
 gap=gap/2;
}
}
void swap(int*x,int*y)
{
int t;
t=*x;
*x=*y;
*y=t;
}