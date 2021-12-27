//Ex.no.4.7:Write a routine ungets(s) that will push back an entire string onto the input. Should ungets know about buf and bufp, or should it just use ungetch?
#include<stdio.h>
#include<string.h>

#define MAX 100

int bufp =0 ;
int buf[MAX];

int getch();
void ungetch(int c);
void ungets(char s[]);
int getnewline(char line[] , int maxline);

int main()
{
	char line[MAX];
	int c;
	getnewline(line , MAX);
	ungetch(line);
	while((c=getch())!=EOF)
		putchar(c);
	return 0;
}
int getnewline(char s[] , int lim)
{
	int i,c;
	for(i=0;i<lim-1 && (c=getchar())!=EOF && c!='\n';i++)
	s[i]=c;
	if(c=='\n')
	s[i++]=c;
	s[i]='\0';
}

void ungets(char s[])
{
int i;
i=strlen(s);
while(i>0)
	ungetch(s[--i]);
}

void ungetch(int c)
{
	if(bufp>=MAX)
		printf("ungetch : to many characters\n");
	else
		buf[bufp++]=c;
}
int getch()
{
	return(bufp>0)?buf[--bufp]:getchar();
}

		
