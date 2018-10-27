//SE-A_IT_12.              STACK USING LL
//OMKAR GAVHANE.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *link;
};
struct node *top;
struct node typedef node;
void push();
void pop();
void stackTop();
void display();
void main()
{
int ch=0;
clrscr();
while(ch<=4)
{
printf("\n1.push\t2.pop\t3.stackTop\t4.display");
printf("\nenter choice=");
scanf("%d",&ch);
switch(ch)
{
case 1:push();
       break;
case 2:pop();
       break;
case 3:stackTop();
       break;
case 4:display();
       break;
default:printf("\nINVALID CHOICE");
}
}
getch();
}
void push()
{
node *tmp;
tmp=(node*)malloc(sizeof(node));
printf("enter data=");
scanf("%d",&tmp->data);
tmp->link=NULL;
if(top==NULL)
 top=tmp;
else
{
 tmp->link=top;
 top=tmp;
}
}
void pop()
{
node *tmp=top;
if(top==NULL)
{
 printf("STACK IS UNDERFLOW\n");
}
else
{
 printf("%d is removed from stack",tmp->data);
 top=top->link;
 free(tmp);
}
}
void display()
{
node *tmp=top;
if(tmp==NULL)
{
 printf("\nSTACK IS UNDERFLOW\n");
}
else
{
 while(tmp!=NULL)
 {
 printf("%d_",tmp->data);
 tmp=tmp->link;
 }
}
}
void stackTop()
{
if(top==NULL)
{
 printf("\nSTACK IS UNDERFLOW\n");
}
else
{
 printf("\ntop of stack=%d\n",top->data);}
}