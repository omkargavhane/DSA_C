//SE-A_IT_12                 RADIX_SORT
//OMKAR GAVHANE.
#include<stdio.h>
#include<conio.h>
#include<math.h>
int count_digit(int);
void radix_sort();
int arr[20],bucket[10][10],no,d,m=1,ptr;
void main()
{
int i;
clrscr();
printf("enter no of elemnts=");
scanf("%d",&no);
for(i=0;i<no;i++)
{
printf("enter element=");
scanf("%d",&arr[i]);
if(count_digit(arr[i])>d)
 d=count_digit(arr[i]);
}
radix_sort();
for(i=0;i<no;i++)
printf("%d_",arr[i]);
getch();
}
void radix_sort()
{
int i, bno,ch,j,k;
/*no of passes equal to no of digits present
in maximum no */
while(d>0)
{
/*for loop to calculate bucket no
and palce th value at that position
it is just like HASH FUNCTION*/
 for(i=0;i<no;i++)
 {
 bno=(arr[i]%(int)pow(10,m))/(int)pow(10,m-1);
 ch=0;
 while(bucket[bno][ch]!=0)
 ch++;
 bucket[bno][ch]=arr[i];
 }
/*for loop to modify the array according
to values present in bucket wrt previous pass
i.e 1st pass-units 2nd pass-tens 3 rd pass-hundred...*/
 for(j=0;j<10;j++)
 {
 for(k=0;k<10;k++)
 {
 if(bucket[j][k]!=0)
 {
  arr[ptr++]=bucket[j][k];
  bucket[j][k]=0;
 }
 if(ptr==no) break;
 }
}
ptr=0;
m++;
d--;
}
}
int count_digit(int no)
{
int cnt=0;
while(no)
{
cnt++;
no/=10;
}
return(cnt);
}

