//SE-A_IT_12.     BUBBLE & INSERTION
//OMKAR GAVHANE
#include<stdio.h>
#include<conio.h>
void insertion();
void bubble();
int arr[100],n;
int main()
{
int i,ch;
clrscr();
printf("enter no of element=");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter element=");
scanf("%d",&arr[i]);
}
printf("1.bubble sort\n2.insertion sort\nenter your choice:-");
scanf("%d",&ch);
if(ch==2)
insertion();
else if(ch==1)
bubble();
for(i=0;i<n;i++)
printf("%d_",arr[i]);
getch();
return 0;
}
void bubble()
{
printf("algorithm-bubble sort\n");
int i,j,t;
for(i=n-1;i>0;i--)
{
for(j=0;j<i;j++)
{
if(arr[j+1]<arr[j])
{
t=arr[j];
arr[j]=arr[j+1];
arr[j+1]=t;
}
}
}
}
void insertion()
{
printf("algorithm-insertion sort\n");
int i,j,k,t;
for(i=1;i<n;i++)
{
t=arr[i];
for(j=0;j<i;j++)
{
 if(arr[j]>arr[i])
 {
 for(k=i-1;k>=j;k--)
 arr[k+1]=arr[k];
 arr[j]=t;
 break;
 }
}
}
}
