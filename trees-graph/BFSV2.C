//SE-A_IT_12.16/11/17                       BFS
//OMKAR GAVHANE.
#include<stdio.h>
#include<conio.h>
int v,arr[10][10],visited[10],count,queue[20],front=-1,rear=-1;
char str[20];
void bfs();
void main()
{
int i,j,sv,k,ci;
clrscr();
printf("\nenter no of vertex=");
scanf("%d",&v);
for(i=0;i<v;i++)
{
printf("enter relation of %d=",i);
scanf("%s",str);
printf("%s",str);
visited[i]=0;
for(k=0;k<strlen(str);k++)
{
ci=(int)str[k]-48;
for(j=0;j<v;j++)
{
if(ci==j)
arr[i][j]=1;
else if(arr[i][j]!=1)
arr[i][j]=0;
}
}
}
bfs();
getch();
}
void bfs()
{
int sv,i;
printf("enter starting vertex=");
scanf("%d",&sv);
//printf("%d_",sv);
queue[++rear]=sv;
visited[sv]=1;
count++;
while(front<rear)
{
sv=queue[++front];
for(i=0;i<v;i++)
{
if(arr[sv][i]==1&&visited[i]==0)
{
 queue[++rear]=i;
 //printf("%d_",i);
 visited[i]=1;
 count++;
}
}
}
for(i=0;i<=rear;i++)
printf("%d_",queue[i]);
}
/*      OUTPUT
enter no of vertex9
enter relation of 0=134
134enter relation of 1=24
24enter relation of 2=5
5enter relation of 3=46
46enter relation of 4=57
57enter relation of 5=-
-enter relation of 6=47
47enter relation of 7=58
58enter relation of 8=-
-enter starting vertex=6
6_4_7_5_8_
*/



                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
