// Ex.No:1.18  To remove  tralling  blanks and tabs from each line of input , and to delete entirely blank lines
#include<stdio.h>
#define MAXLINE 1000

int getnewline(char line[] , int maxline);

int main()
{
int len;
int max;
char line[MAXLINE];
max=0;

while((len=getnewline(line,MAXLINE))>0)

	if(len>=max)
	{
	for(int i=0;line[i]!='\0';i++)
	{if(line[i]=='\n' && line[i+1]=='\n')
	line[i+1]='\b';
	printf("%c",line[i]);
	}	
	
//	printf("%s",line);
	return 0;
	}
}

	int getnewline(char s[] , int lim)
	{
	int c,i;
	for(i=0; i<lim-1&&(c=getchar())!=EOF; i++)
	{
		if((c!=' ')&&( c!='\t'))
			s[i]=c;
		else
			i--;
	}
        if(c=='\n')
	{
		s[i]=c;
	}
		return i;
	}
