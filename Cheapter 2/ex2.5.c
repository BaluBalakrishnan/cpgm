//Ex.no.2.5: Write the function any(s1,s2), which returns the first location in a string s1 where any character from the string s2 occurs, or -1 if s1 contains no characters from s2. (The standard library function strpbrk does the same job but returns a pointer to the location.)
#include<stdio.h>
#include<string.h>

#define MAXLINE 100

int getnewline(char line[], int maxline);
int any(char s1[], char s2[]);;


int main()
{
	char s1[MAXLINE],s2[MAXLINE];
	int result;
	
	printf("Enter the S1 =");
	getnewline(s1,MAXLINE);
	printf("Enter the S2 =");
	getnewline(s2,MAXLINE);

	result=any(s1,s2);
	printf("%d",result);

return 0;
}

int getnewline(char s[], int lim)
{
	int c,i;
	for(i=0;i<lim-1 && (c=getchar())!=EOF && c!='\n';i++)
			s[i]=c;
	if(c=='\n'){
	s[i]=c;}
	
	s[i]='\0';
} 


int any(char s1[],char s2[])
{
	int i,j;
	i=j=0;

	while(s1[i]!='\0')
	{
	for(j=0;s1[i]!=s2[j] && s2[j]!='\0';j++)
	continue ;
	if(s2[j]!='\0'&& s2[j]!='\n')
	{
	return i;
	}
	i++;
	}
	return -1;
}





