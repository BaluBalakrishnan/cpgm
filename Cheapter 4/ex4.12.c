//Ex.no.4.12: Adapt the ideas of printd to write a recursive version of itoa; that is, convert an integer into a string by calling a recursive routine.
#include<stdio.h>
#include<math.h>
#define MAX 100

void itoa(int n, char s[]);

int main()
{
	int n=1234;
	char s[MAX];
	itoa(n,s);
	printf("ans=%s\n",s);
	return 0;
}

void itoa(int n,char s[])
{
	printf("n1= %d\n",n);
	static int i;
	if(n/10){
	printf("n2= %d\n",n);
		itoa(n/10,s);}
	else
	{
		i=0;
		if(n<0)
			s[i++]='-';
	}

	printf("s1=%s\n",s);
	s[i++]=n%10+'0';
	printf("s2=%s\n",s);
	s[i]='\0';
}
