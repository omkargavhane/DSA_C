//SE-IT-12_CIRCULAR_QUEUE
#include<stdio.h>
#include<conio.h>
#define size 5
void insert();
void del();
void disp();
int cq[size],count,front=-1,rear=-1;
void  main()
{
 int ch;
 clrscr();
do
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
}while(ch<4);
getch();
}
void insert()
{
if(count==size)
 printf("\noverflow");
else
{
 if(rear==size-1)
 rear=-1;
 printf("\nenter data=");
 scanf("%d",&cq[++rear]);
 count++;
}
}
void del()
{
if(count==0)
 printf("\nunderflow");
else
{
 if(front==size-1)
 front=-1;
 printf("%d removed",cq[++front]);
 count--;
}
}
void disp()
{
 int cnt=1;
 int i=front+1;
 while(cnt<=count)
 {
 printf("%d_",cq[i++]);
 if(i==size)
 i=0;
 cnt++;
 }
}





