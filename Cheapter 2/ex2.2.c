//Ex.no.2.1 :  Write getline without && and || operator
#include<stdio.h>
#define MAXLINE 1000
/* for(i=0;i<lim-1 && (c=getchar())!='\n' && c!=EOF;i++) s[i]=c;*/
int main()
{
	int i=0,c,lim=MAXLINE;
	char s[MAXLINE];

while(i<lim-1)
{
	while((c=getchar())!=EOF)
	{
		if(c=='\n')
		{
       continue;
		}
		
	putchar(c);
	}
i++;	
}
return 0;
}
