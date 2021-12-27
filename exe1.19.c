//Ex.No : 1.19 revers string
#include<stdio.h>
#define MAXLINE 100

int reverse(char line[], int maxline);

int main()
{
	int len,max=0,i ;
	char line[MAXLINE],rev[MAXLINE];
while((len=reverse(line,MAXLINE))>0)
	
	if(len>max){
	for(i=len;i>=0;i--)
	printf("%c",line[i]);
	}
return 0;
}

int reverse(char s[],int lim)
{
	int c,i;
for(i=0;i<lim-1&&(c=getchar())!=EOF&&c!='\n';i++)
	s[i]=c;
	return i;
}
