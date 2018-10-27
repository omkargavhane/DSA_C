//SE-A_IT_12.                   LINEAR QUEUE
//OMKAR GAVHANE.
#include<stdio.h>
#include<conio.h>
#define size 5
void insert();
void del();
void disp();
int arr[size],front=-1,rear=-1;
void main()
{
int ch=0;
clrscr();
while(ch<4)
{
printf("\n1.insert\n2.delete\n3.display");
printf("\nenter choice=");
scanf("%d",&ch);
switch(ch)
{
case 1:insert();
break;
case 2:del();
break;
case 3:disp();
break;
}
}
getch();
}
void insert()
{
if(rear==size-1)
 printf("overflow");
else
{
 printf("enter data=");
 scanf("%d",&arr[++rear]);
}
}
void del()
{
if(front==rear)
 printf("underflow");
else
 printf("%d is deleted",arr[++front]);
}
void disp()
{
int i;
if(front==rear)
printf("queue is empty");
else
{
for(i=front+1;i<=rear;i++)
printf("%d_",arr[i]);
}
}