//SE-A_IT_12.                  APPLICATION OF LL.
//OMKAR GAVHANE.
#include<stdio.h>
#include<conio.h>
typedef struct node
{
int co;
int exp;
struct node *link;
}node;
node *poly1,*poly2,*start;
void create();
void allocate(int,int);
void arithmetic();
void disp();
void main()
{
int ch;
clrscr();
while(ch<4)
{
printf("\n1.ENTER 1ST POLYNOMIAL\n2.ENTER 2ND POLYNOMIAL");
printf("\n3.RESULT\nENTER CHOICE=");
scanf("%d",&ch);
switch(ch)
{
case 1:start=poly1;
       create();
       poly1=start;
       break;
case 2:start=poly2;
       create();
       poly2=start;
       break;
case 3:start=NULL;
       arithmetic();
       break;
}
}
getch();
}
void create()
{
int d,c;
printf("\nenter degree of polynomial=");
scanf("%d",&d);
while(d>=0)
{
 printf("enter coefficient for %d degree=",d);
 scanf("%d",&c);
 allocate(c,d);
 d--;
}
disp();//to print poly1&poly2
}
void allocate(int c,int p)
{
node *tmp=(node*)malloc(sizeof(node));
tmp->co=c;tmp->exp=p;tmp->link=NULL;
if(start==NULL)
 start=tmp;
else
{
node *t=start;
while(t->link!=NULL)
 t=t->link;
t->link=tmp;
}
}
void disp()
{
node *t=start;
while(t)
{
 printf("%dx^%d_",t->co,t->exp);
 t=t->link;
}
}
void arithmetic()
{
int pass,cnt=0,cnt1=0,cnt2=0;
//node *tmp1=poly1;
//node *tmp2=poly2;
while(poly1&&poly2)
{
cnt++;
if(poly1->exp==poly2->exp)
{
pass=poly1->co+poly2->co;
allocate(pass,poly1->exp);
poly1=poly1->link;
poly2=poly2->link;
}
else if(poly1->exp>poly2->exp)
{
 allocate(poly1->co,poly1->exp);
 poly1=poly1->link;
}
else if(poly2->exp>poly1->exp)
{
 allocate(poly2->co,poly2->exp);
 poly2=poly2->link;
}
}
while(poly1)
{
cnt1++;
 allocate(poly1->co,poly1->exp);
 poly1=poly1->link;
}
while(poly2)
{
cnt2++;
 allocate(poly2->co,poly2->exp);
 poly2=poly2->link;
}
printf("@%d_%d_%d@",cnt,cnt1,cnt2);
disp();//to print poly3
}

/*enter coefficient for 2 degree=3
enter coefficient for 1 degree=5
enter coefficient for 0 degree=2
3x^2_5x^1_2x^0_
1.ENTER 1ST POLYNOMIAL
2.ENTER 2ND POLYNOMIAL
3.RESULT
ENTER CHOICE=2

enter degree of polynomial=3
enter coefficient for 3 degree=5
enter coefficient for 2 degree=0
enter coefficient for 1 degree=4
enter coefficient for 0 degree=1
5x^3_0x^2_4x^1_1x^0_
1.ENTER 1ST POLYNOMIAL
2.ENTER 2ND POLYNOMIAL
3.RESULT
ENTER CHOICE=3
@4_0_0@5x^3_3x^2_9x^1_3x^0_
1.ENTER 1ST POLYNOMIAL
2.ENTER 2ND POLYNOMIAL
3.RESULT
ENTER CHOICE=4*/

