//SE-A_IT_12.                       DEQUEUE
//OMKAR GAVHANE.
#include<stdio.h>
#include<conio.h>
#define size 5
void insert_left();
void insert_right();
void del_left();
void del_right();
void disp();
int arr[size],left=-1,right=-1,count;
void main()
{
int ch=0;
clrscr();
while(ch<6)
{
printf("\n1.insert at right\n2.delete from left\n3.delete from right");
printf("\n4insert at left\nenter choice=");
scanf("%d",&ch);
switch(ch)
{
case 1:insert_right();
       break;
case 2:del_left();
       break;
case 3:del_right();
       break;
case 4:insert_left();
       break;
case 5:disp();
       break;
}
}
getch();
}
void insert_right()
{
if(count==size)
printf("overflow");
else
{
if(right==size-1)
right=-1;
printf("enter data=");
scanf("%d",&arr[++right]);
count++;
}
}
void del_left()
{
if(count==0)
printf("underflow");
else
{
if(left==size-1)
left=-1;
printf("%d deleted",arr[++left]);
count--;
}
}
void del_right()
{
if(count==0)
printf("underflow");
else
{
if(right==-1)
right=size-1;
printf("%d deleted",arr[right--]);
count--;
}
}
void insert_left()
{
if(count==size)
printf("overflow");
else
{
if(left==-1)
left=size-1;
printf("enter data=");
scanf("%d",&arr[left--]);
count++;
}
}
void disp()
{
 int cnt=1;  //front=left&rear=right
 int i=left+1;
 if(count==0)
 printf("empty queue");
 while(cnt<=count)
 {
 printf("%d_",arr[i++]);
 if(i==size)
 i=0;
 cnt++;
 }
}

