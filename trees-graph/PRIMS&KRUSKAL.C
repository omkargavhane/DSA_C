//SE-A_IT_12 PRIMS_KRUSKAL
//OMKAR GAVHANE
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
typedef struct node
{
int s;
int d;
int w;
struct node *link;
}node;
node *start;
int arr[20][20],visited[20],v,sum,cnt,cnt1,ptr,psva[20],small=999;
void prims();
void create(int,int,int);
void kruskal();
void main()
{
int i,j,ch;
clrscr();
printf("***MINIMUM COST***\n1.PRIMS\n2.KRUSKAL");
printf("\nENTER CHOICE=");
scanf("%d",&ch);
printf("enter no of vertex=");
scanf("%d",&v);
for(i=0;i<v;i++)
{
for(j=0;j<v;j++)
{
 printf("enter relation [%d->%d]=",i,j);
 scanf("%d",&arr[i][j]);
 if(arr[i][j]==0)
 arr[i][j]=999;
 if(j>i&&ch==2)
 create(i,j,arr[i][j]);
}
}
if(ch==1) prims();
else if(ch==2)
{
kruskal();
printf("\nMIN COST=%d",sum);
}
getch();
}
void create(int s,int d,int w)
{
node *tmp=(node*)malloc(sizeof(node));
tmp->s=s;tmp->d=d;tmp->w=w;tmp->link=NULL;
if(start==NULL)
 start=tmp;
else
{
 node *pre,*t=start;
 while(t->w<=tmp->w&&t)
 {
  pre=t;
  t=t->link;
 }
if(t==start)
{
 tmp->link=start;
 start=tmp;
}
else if(pre->link==NULL)
 pre->link=tmp;
else
{
 tmp->link=pre->link;
 pre->link=tmp;
}
}
}
void kruskal()
{
node *tmp=start;
while(1)
{
if(cnt+cnt1==v-1) break;
if(visited[tmp->s]==0||visited[tmp->d]==0)
{
 printf("[%d->%d_%d]cnt\n",tmp->s,tmp->d,tmp->w);
 sum+=tmp->w;
 visited[tmp->s]=visited[tmp->d]=1;cnt++;
}
else if(cnt1<1){
printf("[%d->%d_%d]cnt1\n",tmp->s,tmp->d,tmp->w);
sum+=tmp->w;cnt1++;}
tmp=tmp->link;
}
}
void prims()
{
int i,j,i1,small,sv;
printf("\nenter starting vertex=");
scanf("%d",&sv);
visited[sv]=1;
while(1)
{
 small=999;
 for(j=0;j<v;j++)
 {
  if(small>arr[sv][j]&&visited[j]==0)
  {
   small=arr[sv][j];
   i1=j;
  }
 }
 for(i=0;i<=ptr;i++)
 {
 for(j=0;j<v;j++)
 {
 if(small>arr[psva[i]][j]&&visited[j]==0)
 {
  small=arr[psva[i]][j];
  sv=psva[i];
  i1=j;
 }
 }
 }
 cnt++;
 visited[i1]=1;
 psva[ptr++]=sv;
 sum+=small;
 printf("\n[%d->%d_%d]",sv,i1,small);
 sv=i1;
 if(cnt==v-2)
 break;
}
for(i=0;i<v;i++)
 if(visited[i]==0)
  sv=i;
small=arr[sv][0];
for(i=1;i<v;i++){
 if(small>arr[sv][i]){
  small=arr[sv][i];
  i1=i;}
  }
sum+=small;
printf("\n[%d->%d_%d]\nMIN COST=%d",sv,i1,small,sum);
}






