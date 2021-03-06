//Ex.no.4.4:Add the commands to print the top elements of the stack without popping, to duplicate it, and to swap the top two elements. Add a command to clear the stack.
#include<stdio.h>
#include<math.h>// lm cmt in terminal box
#include<stdlib.h>//for atof()
#define MAXOP 100 // max size of  operand  or opertor
#define NUMBER '0'// signal that a number was found

int getop(char[]);
void push(double);
double pop(void);
int sp=0;
//reverse polish calculator
int main()
{
	int type;
	double op2 , op1;
	char s[MAXOP];

	while((type=getop(s))!=EOF)
{	switch(type)
	{
		case NUMBER:
			push(atof(s));
			break;
		case '+':
			push(pop()+pop());
			break;
		case'*':
			push(pop()*pop());
			break;
		case'-':
			op2=pop();
			push(pop()-op2);
			break;
		case'/':
			op2=pop();
			if(op2!=0.0)
			push(pop()/op2);
			else
				printf("error: zero divisor\n");
				break;
		case '%':
			op2 = pop();
			if(op2!=0.0)
			push(fmod(pop(),op2));
			else
				printf("error: zero modulator\n");
			break;
	
		case '?':
                        op2=pop();
                        printf("\t%.8g\n",op2);
                        push(op2);
                        break;
		case 'c':
                        sp=0;
                        break;
                case 'd':
                        op2=pop();
			printf("op2=%.8g",op2);
                        push(op2);
              		push(op2);
                        break;
                case 's':
                        op1=pop();
                        op2=pop();
                        push(op1);
                        push(op2);
                         printf("after swap\top1=%.8g op2=%.8g\n",op1,op2);
                         break;  			 
		case'\n':
			printf("\t%.8g\n",pop());
			break;
		default:
			printf("error : unknown command %s\n",s);
			break;
	}
}
return 0;
}
#define MAXVAL 100

double val[MAXVAL];
void push(double f)
{
	if(sp<MAXVAL)
		val[sp++]=f;
	else
		printf("error: stack full , can't push %g\n",f);
}

double pop(void)
{
	if(sp>0)
		return val[--sp];
	else{
		printf("error: stack empty\n");
		return 0.0;
	}
}

#include<ctype.h>

int getch(void);
void ungetch(int);
int getop(char s[])
{
	int i, c;
	while((s[0]=c=getch())==' ' || c=='\t')
		;
	s[1]='\0';
	if(!isdigit(c) && c!='.')
		return c;
	i=0;
	if(isdigit(c))
		while(isdigit(s[++i]=c=getch()))
			;
	if(c=='.')
		while(isdigit(s[++i]=c=getch()))
			;
	s[i]='\0';
	if(c!=EOF)
	ungetch(c);
	return NUMBER;
}

#define BUFSIZE 100
char buf[BUFSIZE];
int bufp=0;
int getch(void)
{
	return (bufp>0)?buf[--bufp]:getchar();
}
void ungetch(int c)
{
	if(bufp>=BUFSIZE)
		printf("ungetch : too many characters\n");
	else
		buf[bufp++]=c;
}
