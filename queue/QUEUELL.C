//SE-A_IT_12.	       QUEUE USING LL
//OMKAR GAVHANE
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct node
{
int data;
struct node *link;
}node;
node *front,*rear;
void insert();
void del();
void disp();
void main()
{
int ch=0;
clrscr();
while(ch<4)
{
printf("\n1.insert\n2.delete\n3.dispaly");
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
node *tmp=(node*)malloc(sizeof(node));
printf("enter data=");
scanf("%d",&tmp->data);
tmp->link=NULL;
if(front==NULL)
front=rear=tmp;
else
{
rear->link=tmp;
rear=tmp;
}
}
void del()
{
node *t=front;
if(front==NULL)
printf("empty");
else
{
 printf("\n%d deleted",front->data);
 front=front->link;
 free(t);
}
}
void disp()
{
node *t=front;
if(t==NULL) printf("empty");
else
{
 while(t!=rear)
 {
 printf("%d_",t->data);
 t=t->link;
 }
printf("%d_",t->data);
}
}