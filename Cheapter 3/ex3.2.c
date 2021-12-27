//Ex.no.3.2: Write a function escape(s,t) that converts characters like newline and tab into visible escape sequences like n and t as it copies the string t to s. Use a switch. Write a function for the other direction as well, converting escape sequences into the real characters.
#include<stdio.h>
#define MAXLINE 1000

int escape(char s[], char t[]);
int getnewline(char s[], int lim);

int main()
{	
	char s[MAXLINE] , t[MAXLINE] ,result ;
	getnewline(t,MAXLINE);
	escape(s,t);
	printf("%s",s);
}

int escape(char s[] , char t[])
{
	int i,j;
	i=j=0;
	while(t[i]!='\0')
	{

	switch(t[i])
	{
		case '\t':
		s[j]='\\';
		j++;
		s[j]='t';
		break;
		case '\n':
		s[j]='\\';
		j++;
		s[j]='n';
		break;
		default:
		{
		s[j]=t[i];
		break;
		}
	}
	i++;j++;
	}
	s[j]='\0';
}




int getnewline( char s[] , int lim)
{
int c ,i ;
for(i=0;i<lim-1 && (c=getchar())!=EOF ;i++)
	s[i]=c;
s[i]='\0';
}


