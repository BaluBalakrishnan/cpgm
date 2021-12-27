//Ex.no.2.4:Write an alternative version of squeeze(s1,s2) that deletes each character in s1 that matches any character in the string s2.
#include<stdio.h>
#define MAXLINE 100

int getnewline(char line[] , int maxline);
void squeeze(char s1[],char s2[]);

int main()
{
 char s1[MAXLINE],s2[MAXLINE];

 printf(" Enter the String S1 = %s",s1);
 getnewline(s1,MAXLINE);
 printf(" Enter the  Deleted String S2 = %s",s2);
 getnewline(s2,MAXLINE);


 squeeze(s1, s2);
 printf("%s",s1);

return 0;
}

int getnewline(char s[],int Maxline)
{
int i,c;
	for(i=0;i<Maxline-1 && (c=getchar())!=EOF && c!='\n';i++)
	s[i]=c;
	if(c=='\n')
	{
	s[i]=c;
	}
	s[i]='\0';
}


void squeeze(char s1[] ,char s2[])
{
	int i,j,k;
	i=j=k=0;
	for(i=0;s1[i]!='\0';i++)
	{
	for(j=0;s1[i]!=s2[j] && s2[j]!='\0';j++)
	;

	if(s2[j]=='\0')
	{
	s1[k]=s1[i];
	k++;
	} 
	}
	s1[k]='\0';
}


