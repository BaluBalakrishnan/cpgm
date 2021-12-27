// Ex1.20: :detab,replaces tabs with spaces
#include<stdio.h>
#define TAB 8

int main()
{
	int n=0,i=1,c;

while((c=getchar())!=EOF)
{
	if(c=='\t')
	{
	n=TAB-((i-1)%8);
	while(n>0)
	{
	printf("%c",'*');
	i++;
	n--;
	}
	}
	else if(c=='\n')
	{
	putchar(c);
	i=1;
	}
	
	else
	{
	putchar(c);
	i++;
	}
	}
return 0;
}
	
