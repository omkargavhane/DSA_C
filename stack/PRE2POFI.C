//SE-A_IT_12_19/11/17.         PREFIX TO POSTFIX
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
char str[50],op[50];
int ptr;
void main()
{
int i;
char arg[50];
clrscr();
printf("ENTER PREFIX EXPRESSION=");
gets(str);
strrev(str);
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
 strset(op,'\0'); //clear char array
 popstack();
// popstack();      //pointer for op array set to 0
 //ptr=0;           //for next intialization.
 switch(str[i])
 {
 case '+':strcpy(arg,strcat(op,"+\0"));
	  break;
 case '-':strcpy(arg,strcat(op,"-\0"));
	  break;
 case '*':strcpy(arg,strcat(op,"*\0"));
	  break;
 case '/':strcpy(arg,strcat(op,"/\0"));
	  break;
 case '%':strcpy(arg,strcat(op,"%\0"));
	  break;
 case '^':strcpy(arg,strcat(op,"^\0"));
	  break;
 }
 pushstack(arg);
}
}
printf("POSTFIX EXPRESSION=");
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
 strcpy(op,top->arr);
 /*while(top->arr[i]!='\0')
  op[ptr++]=top->arr[i++];*/
 top=top->link;
 strcat(op,top->arr);
 top=top->link;
}
}
/*         ****OUTPUT****
ENTER PREFIX EXPRESSION=-+*^%adcex*y^ab
POSTFIX EXPRESSION=ad%c^e*x+yab^*-
*/




                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
