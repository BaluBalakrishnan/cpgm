//Ex.no.3.3:Write a function expand(s1,s2) that expands shorthand notations like a-z in the string s1 into the equivalent complete list abc…xyz in s2. Allow for letters of either case and digits, and be prepared to handle cases like a-b-c and a-z0-9 and -a-z. Arrange that a leading or trailing -is taken literally.
#include<stdio.h>
#define LIM 100

int getnewline(char s[], int max);
void expand(char s1[], char s2[]);

int main()
{
	char s1[LIM] , s2[LIM];
	getnewline(s1,LIM);	
	expand(s1,s2);
	printf("Expand range : %s",s2);
}

int getnewline(char s[],int lim)
{
	int c,i;

	for(i=0;i<lim-1 && (c=getchar())!=EOF && c!='\n';i++)
		s[i]=c;
	if(c=='\n')
		i++;
		s[i]=c;
s[i]='\0';
}

void expand(char s1[], char s2[])
{
	int i,j,c;
	i=j=c=0;
while((c=s1[i++])!='\0')
if(s1[i]=='-' && s1[i+1]>=c)
{  i++;
	while(c<s1[i])
	{	s2[j]=c;
	j++;c++;}
}
else

s2[j++]=c;

s2[j]='\0';
}

