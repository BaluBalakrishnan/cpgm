/*replacing tab \t,backspace \b , backslash */
#include<stdio.h>
int main()
	{
	
	char n;
	while((n=getchar())!=EOF)
	{		
	if(n=='\t')
	printf("\\t");
	else if(n=='\b')
	printf("\\b");
	else if(n=='\\')
	printf("\\\\");
	else
	{
	putchar(n);
	}
	}
	return 0;
}
