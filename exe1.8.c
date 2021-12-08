//count lines in input=space,tabs,newline
#include<stdio.h>
int main()
{
	int c,s,t,n;
	c=s=t=n=0;
	while((c=getchar())!=EOF)
	{
	if(c=='\n')
	{
	n++;
	}
	else if(c==' ')
	{
	s++;
	}
	else if(c=='\t')
	{
	t++;
	}
	}
printf("\ncount the new line=%d,space=%d,tab=%d",n,s,t);
}
