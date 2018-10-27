//SE-A_IT_12_19/11/17.         POFIX TO PREFIX
//OMKAR GAVHANE.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
typedef struct node
{
char arr[50];
struct node *link;
}node;
struct node *top;
void pushstack(char[]);
void popstack();
char str[50],op[50],op1[50];
int ptr;
void main()
{
int i;
char arg[50];
clrscr();
printf("ENTER POFIX EXPRESSION=");
gets(str);
for(i=0;i<strlen(str);i++)
{
if(isalnum(str[i]))
{
 arg[0]=str[i]; //to convert character to string
 arg[1]='\0';    //
 pushstack(arg);
}
else
{
 strset(op,'\0'); //clear char array OP
 popstack();
// popstack();
 switch(str[i])
 {
 case '+':strcpy(arg,"+\0");
	  break;
 case '-':strcpy(arg,"-\0");
	  break;
 case '*':strcpy(arg,"*\0");
	  break;
 case '/':strcpy(arg,"/\0");
	  break;
 case '%':strcpy(arg,"%\0");
	  break;
 case '^':strcpy(arg,"^\0");
	  break;
 }
 strcat(arg,op);
 pushstack(arg);
}
}
printf("PREFIX EXPRESSION=");
puts(top->arr);
getch();
}
void pushstack(char larr[])
{
int i;
node *tmp;
tmp=(node*)malloc(sizeof(node));
strcpy(tmp->arr,larr); //to copy argument string to char array
tmp->link=NULL;        //where top is pointing.
if(top==NULL)
 top=tmp;
else
{
 tmp->link=top;
 top=tmp;
}
}
void popstack()
{
//int i=0;
if(top==NULL)
 printf("STACK IS UNDERFLOW!!!");
else
{
 node *t=top->link;
  strcpy(op,t->arr);
  strcat(op,top->arr);
  top=top->link;
  top=top->link;
 /*strcpy(op1,op);
 while(top->arr[i]!='\0')
  op[ptr++]=top->arr[i++];
  op[ptr]='\0';
 strcat(op,op1);
  top=top->link;
  ptr=0;*/
}
}
/*    ****OUTPUT****
ENTER POFIX EXPRESSION=AB+CDE^*X*-Y+
PREFIX EXPRESSION=+-+AB**C^DEXY
*/













                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

