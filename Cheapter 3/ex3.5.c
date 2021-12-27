//Ex.no.3.5:function itob, converts a integer into a string
#include<stdio.h>

void itob(int n , char s[], int b);

int main()
{
int n=15,b=16 ;
char s[100];
itob(n,s,b);
printf("hexvalue of integer :  %s" , s);
}

void itob(int n, char s[], int b)
{
int i,j;
i=0;
do
{
j=n%b;
s[i++]=(j<=9)?j+'0':j+'A'-10;
}while((n/=b)>0);
s[i]='\0';
}

