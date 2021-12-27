//Ex.No:1.17 To print  all input lines that are longer than 80 char
#include<stdio.h>
#define MAXLINE 1000

int getnewline(char line[] , int maxline);
void copy(char to[], char from[]);

int main()
{
int len;
int max=0;
char line[MAXLINE];
char longest[MAXLINE];
max=0;
while((len=getnewline(line,MAXLINE))>0)
	if(len>max){
	max=len;
	copy(longest,line);
}
	
	if(max>=80)
	{
	printf("%d\nabove 80 char=%s",line,longest);
	return 0;
	}
}

	int getnewline(char s[] , int lim)
	{
		int c,i;
	for(i=0;i<lim-1&&(c=getchar())!=EOF && c!='\n';i++)
		s[i]=c;
	if(c=='\n'){
		s[i]=c;
		i++;
	}
	s[i]='\0';
		return i;
	}
void copy(char to[], char from[])
{
	int i;
	i=0;
	while((to[i]=from[i])!='\0')
		++i;
}



