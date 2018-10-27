//SE-A_IT_12_15/11/17.             DOUBLY LL
//OMKAR GAVHANE.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct node
{
struct node *pre;
int data;
struct node *next;
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
printf("\n***DOUBLY LL***");
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
tmp->pre=tmp->next=NULL;
if(start==NULL)
 start=tmp;
}
void insert_begin()
{
create_ll();
start->pre=tmp;
tmp->next=start;
start=tmp;
}
void insert_end()
{
node *t=start;
create_ll();
while(t->next!=NULL)
 t=t->next;
tmp->pre=t;
t->next=tmp;
}
void insert_before()
{
node *t=start;
int da;
create_ll();
printf("enter node before that the node has to be inserted=");
scanf("%d",&da);
while(t->data!=da)
 t=t->next;
tmp->next=t;
tmp->pre=t->pre;
t->pre->next=tmp;
t->pre=tmp;
}
void insert_after()
{
node *t=start;
int da;
create_ll();
printf("enter node after that the node has to be inserted=");
scanf("%d",&da);
while(t->data!=da)
 t=t->next;
tmp->next=t->next;
tmp->pre=t;
t->next=tmp;
tmp->next->pre=tmp;
}
void del_begin()
{
node *t=start;
if(t==NULL) printf("empty\n");
start=start->next;
start->pre=NULL;
printf("%d deleted",t->data);
free(t);
}
void del_end()
{
node *t=start;
while(t->next!=NULL)
 t=t->next;
t->pre->next=NULL;
printf("%d deleted",t->data);
free(t);
}
void del_before()
{
node *t=start;
int da;
printf("enter node before that node is to bhe deleted=");
scanf("%d",&da);
while(t->next->data!=da)
 t=t->next;
t->pre->next=t->next;
t->next->pre=t->pre;
printf("%d deleted",t->data);
free(t);
}
void del_after()
{
node *t=start;
int da;
printf("enter node after that node is to bhe deleted=");
scanf("%d",&da);
while(t->data!=da)
 t=t->next;
t=t->next;
t->pre->next=t->next;
t->next->pre=t->pre;
printf("%d deleted",t->data);
free(t);
}
void del()
{
node *t=start;
int da;
printf("enter node to be deleted=");
scanf("%d",&da);
while(t->data!=da)
 t=t->next;
t->pre->next=t->next;
t->next->pre=t->pre;
printf("%d deleted",t->data);
free(t);
}
void disp()
{
node *t=start;
printf("TRAVERSAL FROM 1ST NODE");
while(t->next!=NULL)
{
 printf("_%d_",t->data);
 t=t->next;
}
printf("\nTRAVERSAL FROM LAST NODE");
while(t->pre!=NULL)
{
printf("_%d_",t->data);
t=t->pre;
}
}