//SE-A_IT_12.16/11/17               RECDFS
//OMKAR GAVHANE.
#include<string.h>
#define size 10
#include<stdio.h>
//#include<conio.h>
int arr[size][size],visited[size],sv,v;
void recdfs(int);
void main()
{
int i,j;
char str[size];
//clrscr();
printf("enter no of vertex=");
scanf("%d",&v);
for(i=0;i<v;i++)
{
 printf("enter %d relation=",i);
 scanf("%s",str);
for(j=0;j<strlen(str);j++)
 arr[i][str[j]-'0']=1;
}
printf("enter starting vertex=");
scanf("%d",&sv);
visited[sv]=1;
recdfs(sv);
return 0;
 //getch();
}
void recdfs(int sv)
{
int i;
printf("%d_",sv);
for(i=0;i<v;i++)
{
if(arr[sv][i]==1&&visited[i]==0)
{
 visited[i]=1;
 recdfs(i);
}
}
}
/*    OUTPUT
enter no of vertex=9
enter 0 relation=13
enter 1 relation=24
enter 2 relation=-
enter 3 relation=56
enter 4 relation=257
enter 5 relation=-
enter 6 relation=7
enter 7 relation=58
enter 8 relation=-
enter starting vertex=0
0_1_2_4_5_7_8_3_6_
*/

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                




