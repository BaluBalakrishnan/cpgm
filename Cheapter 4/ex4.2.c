#include<stdio.h>
#include<ctype.h>
#define MAXLINE 100

double atof(char s[]);
int getnewline(char line[] ,int  maxline);

int main()
{
	char s[MAXLINE];
	double n;

	getnewline(s,MAXLINE);
	n=atof(s);
	printf("Extand atof value float%lf",n);
}

int getnewline(char s[], int lim)
{
	int c,i;
	for(i=0;i<lim-1 && (c=getchar())!=EOF && c!='\n';i++)
		s[i]=c;
	if(c=='\n')
		s[i++]=c;
	s[i]='\0';
}
double atof(char s[])
{
	double val,pow;
	int i,sign,esign,e;
	int power(int b , int e);
	for(i=0;isspace(s[i]);i++) // skip the white space
	;
	sign=(s[i]=='-')?-1:1;//sign added
	if(s[i]=='+' || s[i]=='-')
		i++;
	for(val=0.0;isdigit(s[i]);i++)//point before digit val
		val=10.0*val+(s[i]-'0');
	if(s[i]=='.')
		i++;
	for(pow=1.0;isdigit(s[i]);i++)//point after digit val
	{	val=10.0*val+(s[i]-'0');
	pow*=10.0;
	}
	if(s[i]=='e' || s[i]=='E')//e power add
		i++;
	if(s[i]=='+'||s[i]=='-')//e power sign add
	{
	esign=s[i]; 
	i++;
	}
	for(e=0;isdigit(s[i]);i++)
	e=10*e+s[i]-'0';

	if(esign=='-')
	return sign * (val/pow) / power(10,e);
	else
	return sign * (val/pow) / power(10,e);
}

int power(int b,int e)
{
	int power=1;	
	while(e>0)
	{	power*=b;
	e--;}
	return power;
}


