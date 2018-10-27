//SE-A_IT_12.           SELECTION & LINEAR SEARCH
//OMKAR GAVHANE.
#include<stdio.h>
#include<conio.h>
void selection();
void linear_search();
int arr[20],no;
void main()
{
int i,j;
clrscr();
printf("enter no of element=");
scanf("%d",&no);
for(i=0;i<no;i++)
{
printf("enter element=");
scanf("%d",&arr[i]);
}
selection();
getch();
}
void selection()
{
int i,j,t;
for(i=0;i<no-1;i++)
{
for(j=i+1;j<no;j++)
{
 if(arr[j]<arr[i])
 {
 t=arr[i];
 arr[i]=arr[j];
 arr[j]=t;
 }
}
}
for(i=0;i<no;i++)
 printf("%d_",arr[i]);
linear_search();
}
void linear_search()
{
int key,i;
printf("\nenter no to be searched=");
scanf("%d",&key);
for(i=0;i<no;i++)
{
 if(arr[i]==key)
 {
 printf("%d found at %d position",key,i+1);
 break;
 }
}
if(i==no)
printf("element not found!!!");
}