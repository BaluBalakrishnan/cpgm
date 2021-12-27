//Ex.no.4.1:Find the pattern in the line and print it
#include<stdio.h>
#define MAXLINE 100 

int getnewline(char line[] , int max);
int strindex(char source[] , char searchfor[]);

char pattern[]="ould";// pattern to search for
//find all line matching pattern
int main()
{
	char line[MAXLINE];
	int found = 0;
	while(getnewline(line,MAXLINE)>0)
		if(strindex(line , pattern)>=0)
		{printf("%s",line);
			found++;
		}
	return found;
}
//getline: get line into s , return length
int getnewline(char s[], int lim)
{
	int c, i;
	
	for(i=0;i<lim-1 && (c=getchar())!=EOF && c!='\n';i++)
		s[i]=c;
	if(c=='\n')
		s[i++]=c;
	s[i]='\0';
	return i;
}

int strindex(char s[] , char t[])
{
	int i,j,k;
	for(i=0;s[i]!='\0';i++){
	for(j=i,k=0;t[k]!='\0'&& s[j]==t[k];j++,k++)	
	;
	if(k>0 && t[k]=='\0')
		return i;
	}
return -1;
}
