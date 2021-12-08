//the purpose of the program is how to test the word count program

#include<stdio.h>
#define IN 1
#define OUT 0
 
int main(void)
{
	int c,n1,nw,nc,state;
	state=OUT;
	n1=nw=nc=0;
	while ((c = getchar()) != EOF)
	{
		++nc;
		if(c=='\n')
			++n1;
		if( c == ' ' || c == '\n' || c == '\t')//to check the word
			state=OUT;
		
		else if((c>=33 && c<=64) || (c>=91 && c<=96) || (c>=123 && c<=126))// to check the special character integers
			state=IN;
		else if (state == OUT)
		{
			state = IN;
			++nw;
		}
	}
	printf("%d %d %d\n", n1,nw,nc);
	return 0;
}
