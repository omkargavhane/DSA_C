//SE-A_IT_12_15/11/17           CIRCULAR_SINGLE_LL
//OMKAR GAVHANE.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct node
{
int data;
struct node *link;
}node;
node *start,*tmp;
void create_ll();
void insert_begin();
void insert_end();
void insert_before();
void insert_after();
void del_begin();
void del_end();
void del_before();
void del_after();
void del();
void disp();
void main()
{
int ch;
clrscr();
while(ch<12)
{
printf("\n***CIRCULAR SINGLY LL***");
printf("\n1.create_ll 2.insert at begin");
printf("\n3.insert at end 4.insert before 5.insert after");
printf("\n6.delete begin 7.delete end\n8.delete before \n9.delete after");
printf("\n10.delete specific node 11.display");
printf("\nenter choice=");
scanf("%d",&ch);
switch(ch)
{
case 1:create_ll();
       break;
case 2:insert_begin();
       break;
case 3:insert_end();
       break;
case 4:insert_before();
       break;
case 5:insert_after();
       break;
case 6:del_begin();
       break;
case 7:del_end();
       break;
case 8:del_before();
       break;
case 9:del_after();
       break;
case 10:del();
	break;
case 11:disp();
	break;
}
}
getch();
}
void create_ll()
{
tmp=(node*)malloc(sizeof(node));
printf("enter data=");
scanf("%d",&tmp->data);
tmp->link=NULL;
if(start==NULL)
{
 start=tmp;
 tmp->link=start; //1.
}
}
void insert_begin() //2
{
node *t=start;
create_ll();
while(t->link!=start)
t=t->link;
t->link=tmp;
tmp->link=start;
start=tmp;
}
void insert_end()
{
node *t=start;
create_ll();
while(t->link!=start)
t=t->link;
tmp->link=t->link;   //3
t->link=tmp;
}
void insert_before()
{
int da;
node *pre,*t=start;
create_ll();
printf("enter the node before that node has to be inserted=");
scanf("%d",&da);
while(t->data!=da)
{
 pre=t;
 t=t->link;
}
tmp->link=t;
pre->link=tmp;
}
void insert_after()
{
int da;
node *post,*t=start;
create_ll();
printf("enter the node after that node has to be inserted=");
scanf("%d",&da);
while(t->data!=da)
 t=t->link;
post=t->link;
tmp->link=post;
t->link=tmp;
}
void del_begin()
{
node *t=start;
if(t==NULL) printf("empty list");
while(t->link!=start)   //3
 t=t->link;
t->link=start->link;
t=start;
printf("%d deleted",t->data);
start=start->link;
free(t);

}
void del_end()
{
node *pre,*t=start;
if(t==NULL) printf("empty list");
while(t->link!=start)
{
 pre=t;
 t=t->link;
}
printf("%d deleted",t->data);
pre->link=t->link;           //4
free(t);
}
void del_before()
{
int da;
node *pre,*t=start;
if(t==NULL) printf("empty list");
printf("enter node before which node has to be deleted=");
scanf("%d",&da);
while(t->link->data!=da)
{
pre=t;
t=t->link;
}
printf("%d deleted",t->data);
pre->link=t->link;
free(t);
}
void del_after()
{
node *pre=start,*t;
int da;
if(t==NULL) printf("empty list");
printf("enter node after that node is to be deleted=");
scanf("%d",&da);
while(pre->data!=da)
 pre=pre->link;
t=pre->link;
printf("%d deleted",t->data);
pre->link=t->link;
free(t);
}
void del()
{
node *pre,*t=start;
int da;
if(t==NULL) printf("empty list");
printf("enter node to be deleted=");
scanf("%d",&da);
while(t->data!=da)
{
 pre=t;
 t=t->link;
}
printf("%d deleted",t->data);
pre->link=t->link;
free(t);
}
void disp()
{
node *t=start;
while(t->link!=start)
{
printf("%d_",t->data);
t=t->link;
}
printf("%d_%d_",t->data,t->link->data);
}