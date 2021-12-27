//Ex.no.4.13:Write a recursive version of the function reverse(s), which reverses the string s in place.
#include<stdio.h>
#include<string.h>

#define MAX 100

int getnewline( char line[] , int maxline);
void revfun(char s[]);
int main()
{
	char s[MAX];
	getnewline(s,MAX);
	revfun(s);
	printf("%s",s);
	return 0;
}

int getnewline(char s[], int lim)
{
	int i, c;
for(i=0;i<lim-1 && (c=getchar())!=EOF && c!='\n';i++)
	s[i]=c;
if(c=='\n')
	s[i++]='\n';
s[i]='\0';
}

void revfun(char s[])
{
	void reverse(char s[] , int i , int );
	reverser(s , 0 , strlen(s));
}
void reverser(char s[], int i , int l)
{
	int t,j;
	j=l-(i+1);
	if(i<j)
	{
		t=s[i];
		s[i]=s[j];
		s[j]=t;
		reverser(s, ++i,l);
	}
}
