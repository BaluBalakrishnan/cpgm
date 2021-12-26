#include<stdio.h>
#define SIZE 100
int str_cmp(char *s , char *t);

int main()
{
int a ;
char s[SIZE]="bala" , t[SIZE]="bala";
printf("s=%s\tt=%s\t",s,t);
a = str_cmp(s,t);
printf("\nstr(s,t)=%d",a);
}

/*int str_cmp(char *s, char *t)
{
	int i;
	for(i=0;s[i]==t[i];i++)
		if(s[i]=='\0')
			return 0;
	return s[i]-t[i];
}*/

int str_cmp(char *s, char *t)
{
	for(;*s=*t;s++,t++)
		if(*s=='\0')
			return 0;
	return *s=*t;
}
