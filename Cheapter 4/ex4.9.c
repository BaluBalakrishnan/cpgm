//Ex.no.4.9:Our getch and ungetch do not handle a pushed-back EOF correctly. Decide what their properties ought to be if an EOF is pushed back, then implement your design.
#include<stdio.h>
#define BUF 100

int getch();
void ungetch(int c);
// initializ buffer variable
int  buf[BUF];
int bufp=0;

int main()
{
	int c='@';//dummy  value
	ungetch(c);
	while((c=getch())!=EOF)
		putchar(c);
	return 0;
}

int getch()
{
	return (bufp>0) ? buf[--bufp] : getchar();
}

void ungetch(int c)
{
	if( bufp >= BUF)
 printf("ungetch: too many characters \n");
	else
		buf[bufp++]=c;
}
