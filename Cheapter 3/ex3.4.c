//Ex.no.3.4:In a two’s complement number representation, our version of itoa does not handle the largest negative number, that is, the value of n equal to -(2wordsize-1). Explain why not. Modify it to print that value correctly, regardless of the machine on which it runs.
#include<stdio.h>
#include<string.h>
void itoa(int n, char s[]);
void reverse(char s[]);
int main()
{
      	int number; char str[100];
       	number = -21;
 	printf("Integer %d printed as\n String:",number);
	itoa(number,str);
	printf("%s",str);
	return 0;
}


void itoa(int n, char s[])
{
	int i , sign ;
	if((sign=n)<0)// record sign
	n=-n;	//make n positive
	i=0;
	do{
	s[i++]=n%10+'0';//get next digit
	}while((n/=10)>0);//delete it
	if(sign<0)
	s[i++]='-';
	s[i]='\0';
	reverse(s);
}

void reverse(char s[])
{
	int c,i,j;
	for(i=0,j=strlen(s)-1;i<j;i++,j--)
	{ c=s[i],s[i]=s[j],s[j]=c;}
}
