//SE-A_IT_12.                    PRIORITY QUEUE_LL
//OMKAR GAVHANE.
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
typedef struct node
{
int data;
int p;
struct node *link;
}node;
node *start;
void insert();
void del();
void disp();
void main()
{
int ch;
clrscr();
printf("****PRIORITY QUEUE****");
while(ch<4)
{
printf("\n1.INSERT\n2.DELETE\n3.DISPLAY\n");
printf("enter choice=");
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
node *tmp;
tmp=(node*)malloc(sizeof(node));
printf("enter data & priority=");
scanf("%d%d",&tmp->data,&tmp->p);
tmp->link=NULL;
//FIRST NODE
if(start==NULL)
 start=tmp;
else
{
 node *pre,*t=start;
//AFTER WHILE LOOP T WILL BE AT
//PLACE WHERE PRIORITY > CURRENT NODE'S PRIORITY
//PRE FOLLOWS T
 while(t->p<=tmp->p&&t)
 {
  pre=t;
  t=t->link;
 }
//INSERT AT BEGIN
if(start==t)
{
 tmp->link=start;
 start=tmp;
}
//INSERT AT END
else if(pre->link==NULL)
 pre->link=tmp;
//INSERT IN BETWEEN
else
{
 tmp->link=pre->link;
 pre->link=tmp;
}
}
}
void del()
{
if(start==NULL)
 printf("EMPTY");
else
{
 printf("%d deleted with priority=%d\n",start->data,start->p);
 start=start->link;
}
}
void disp()
{
node *tmp=start;
while(tmp)
{
 printf("%d-%d_",tmp->data,tmp->p);
 tmp=tmp->link;
}
}






