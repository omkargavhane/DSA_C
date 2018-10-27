//SE-A_IT_12.                BINARY SEARCH
//OMKAR GAVHANE.
#include<stdio.h>
#include<conio.h>
int arr[20],key,no,i,low,high,mid;
void main()
{
clrscr();
printf("enter no of element=");
scanf("%d",&no);
printf("enter no in ascending order\n");
for(i=0;i<no;i++)
{
printf("enter no=");
scanf("%d",&arr[i]);
}
printf("enter searching element=");
scanf("%d",&key);
low=0;high=no-1;
mid=(low+high)/2;
while(low<=high)
{
 if(key<arr[mid])
 high=mid-1;
 else if(key>arr[mid])
 low=mid+1;
 else if(key==arr[mid])
 {
 printf("%d is at %d position",key,mid+1);
 break;
 }
 mid=(low+high)/2;
}
getch();
}






