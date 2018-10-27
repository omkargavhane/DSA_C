//SE-A_IT_12_BINARY SEARCH TREE
//OMKAR GAVHANE
#include<stdio.h>
#include<conio.h>
typedef struct node
{
 struct node *left;
 int data;
 struct node *right;
}node;
node *start,*p,*t,*c;
void create();
void del();
void traverse(node *);
void find(int data);
int findsmall_rst();
void main()
{
int ch;
clrscr();
printf("***BINARY SEARCH TREE***\n");
while(ch<4)
{
 printf("\n1.CREATE BST\n2.DELETE NODE\n3.TRAVERSE");
 printf("\nenter choice=");
 scanf("%d",&ch);
switch(ch)
{
 case 1:create();
       break;
 case 2:del();
       break;
 case 3:traverse(start);
       break;
}
}
getch();
}
void create()
{
node *tmp;
tmp=(node*)malloc(sizeof(node));
printf("enter data=");
scanf("%d",&tmp->data);
tmp->left=tmp->right=NULL;
if(start==NULL)
 start=tmp;
else
{
 find(tmp->data);
 if(tmp->data>p->data)
 p->right=tmp;
 else
 p->left=tmp;
}
}
void find(int data)
{
node *tmp=start;
while(tmp)
{
 p=tmp;
if(data>tmp->data)
 tmp=tmp->right;
else if(data<tmp->data)
 tmp=tmp->left;
if(data==tmp->data)
{
 c=tmp;
 tmp=NULL;
}
}
}
void traverse(node *t)
{
if(t)
{
 traverse(t->left);
 printf("%d_",t->data);
 traverse(t->right);
}
}
void del()
{
int data;
printf("enter node to be deleted=");
scanf("%d",&data);
find(data);
if(c->left==NULL&&c->right==NULL)
{
if(p->left==c)
 p->left=NULL;
else
 p->right=NULL;
}
else if(c->left!=NULL&&c->right==NULL)
{
if(p->right==c)
 p->right=c->left;
else
 p->left=c->left;
}
else if(c->right!=NULL&&c->left==NULL)
{
if(p->right==c)
 p->right=c->right;
else
 p->left=c->right;
}
else if(c->right!=NULL&&c->left!=NULL)
 c->data=findsmall_rst();
printf("%d node is deleted successfully!!!\n",data);
traverse(start);
}
int findsmall_rst()
{
 node *pre=c;
 node *t=c->right;
while(t->left!=NULL)
{
 pre=t;
 t=t->left;
}
if(pre->right==t)
 pre->right=t->right;
else
 pre->left=t->right;
return(t->data);
}






























