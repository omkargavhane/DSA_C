//SE-A_IT_12.                  LINEAR STACK
//OMKAR GAVHANE.
#include<stdio.h>
#include<conio.h>
#define size 5
void push();
void pop();
void disp();
void peek();
int arr[size],top=-1;
void main()
{
int ch=0;
clrscr();
while(ch<5)
{
printf("\n1.push\n2.pop\n3.display\n4.peek");
printf("\nenter choice=");
scanf("%d",&ch);
switch(ch)
{
case 1:push();
       break;
case 2:pop();
       break;
case 3:disp();
       break;
case 4:peek();
       break;
}
}
getch();
}
void push()
{
if(top==size-1)
printf("overflow");
else
{
printf("enter element=");
scanf("%d",&arr[++top]);
}
}
void pop()
{
if(top==-1)
printf("underflow");
else
printf("%d deleted",arr[top--]);
}
void peek()
{
if(top==-1)
printf("empty");
else
printf("%d is at top of stack",arr[top]);
}
void disp()
{
int i;
if(top==-1)
printf("empty");
else
{
for(i=top;i>=0;i--)
printf("%d_",arr[i]);
}
}
