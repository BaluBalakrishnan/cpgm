#include<stdio.h>

#define YES 1
#define NO 0
#define MAXLINE 1000

int getnewline(char line[] , int maxline);
int htoi(char s[]);

int main()
{	
	int result ;
	char line[MAXLINE];

	getnewline(line,MAXLINE);
	result=htoi(line);

	printf("THE STRING VALUE :%s",line);
	printf("\nTHE HEX-DEC VALUE :%d",result);

	return 0;
}

int getnewline(char s[] ,int lim)
{
int c,i;


for(i=0;i<lim-1 && (c=getchar())!=EOF && c!='\n';i++)

	s[i]=c;
if(c=='\n')
{
	s[i]=c;
	i++;
}
s[i]='\0';

return i;
}

int htoi(char s[])
{
int hex,i,hexdigit,n;

hex=YES;
i=n=0;
while(hex==YES)
{
/* if(s[i]=='0')
{
i++;
if(s[i]=='x'||s[i]=='X')
i++;}*/
if(s[i] >='0' && s[i] <='9')

	hexdigit=s[i]-'0';

else if(s[i]>='a' && s[i]<='f')
	hexdigit=s[i]-'a'+10;//dec base value of (10) adding
else if(s[i]>='A' && s[i]<='F')
	hexdigit=s[i]-'A'+10;
else

	hex=NO;

if(hex==YES)
	n=16*n+hexdigit;//hex base value(16);
i++;
	}
return n;

}
