#include<stdio.h>
#define SIZE 100

void str_cpy(char *s, char *t);
int main()
{
char s[SIZE],t[SIZE]="balakrishnan";
str_cpy(s,t);
printf("string s= %s",s);
}



/*void str_cpy(char *s, char *t)//concepts 1
{
	int i=0;
	while((s[i]=t[i])!='\0')
		i++;
}*/

/*void str_cpy(char *s , char *t)// concepts 2
{
printf("s=%s\t t=%s",s,t);
while((*s=*t)!='\0')
{ s++; t++;}
}

void str_cpy(char *s , char *t) //concepts 3
{
	while((*s++ = *t++)!='\0')
		;
}*/

void str_cpy(char *s , char *t) // concepts 4
{
	while(*s++=*t++)
		;
}
