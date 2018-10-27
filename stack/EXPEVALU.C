//SE-A_IT_12.              EXPRESSION EVALUATION
//OMKAR GAVHANE
#include<stdio.h>
#include<conio.h>
#define size 50
void pushstack(float);
float popstack();
float stack[size];
char str[size];
int top=-1;
void main()
{
int i=0;
clrscr();
printf("enter postfix expression=");
gets(str);
while(str[i]!='\0')
{
 if(isalnum(str[i]))
 pushstack((float)(str[i]-'0'));
 else
 {
 float op2=popstack();
 float op1=popstack();
 switch(str[i])
 {
 case '+':pushstack(op1+op2);
	  break;
 case '-':pushstack(op1-op2);
	  break;
 case '*':pushstack(op1*op2);
	  break;
 case '/':pushstack(op1/op2);
	  break;
 case '%':pushstack((int)op1%(int)op2);
	  break;
 case '^':pushstack(pow(op1,op2));
	  break;
 }
 }
 i++;
}
printf("\nRESULT=%f",stack[top]);
getch();
}
void pushstack(float val)
{
if(top==size-1)
 printf("overflow");
else
 stack[++top]=val;
}
float popstack()
{
float r;
if(top==-1)
 printf("empty");
else
{
 r=stack[top--];
 return(r);
}
 return(0);
}
