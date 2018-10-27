//SE-A_IT_12 INFIX TO POSTFIX_
//OMKAR_GAVHANE_23/10/17_
#include<stdio.h>
#include<conio.h>
#define size 30
#include<string.h>
void pushstack(char);
char popstack();
int priority(char);
char stack[size],pofix[size],str[size];
int top=-1,p=-1;
void main()
{
int i;
clrscr();
printf("ENTER INFIX EXPRESSION=");
gets(str);
for(i=0;i<strlen(str);i++)
{
if(isalnum(str[i]))
 pofix[++p]=str[i];
else if(str[i]=='(')
 pushstack(str[i]);
else if(str[i]==')')
{
 while(stack[top]!='(')
 pofix[++p]=popstack();
 top--;
}
else if(priority(str[i])>priority(stack[top]))
 pushstack(str[i]);
else
{
 pofix[++p]=popstack();
 pushstack(str[i]);
}
}
while(top!=-1)
 pofix[++p]=popstack();
pofix[++p]='\0';
printf("\nPOSTFIX EXPRESSION=");
puts(pofix);
getch();
}
void pushstack(char ch)
{
if(top==size-1)
 printf("\noverflow");
else
 stack[++top]=ch;
}
char popstack()
{
 char r;
 r=stack[top];
 top--;
 return(r);
}
int priority(char ch)
{
 if(ch=='+'||ch=='-')
  return(1);
 else if(ch=='*'||ch=='/'||ch=='%')
  return(2);
 else if(ch=='^')
  return(3);
 else
 return(0);
}
