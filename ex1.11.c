/*word counting programe*/
#include<stdio.h>
#define IN 1
#define OUT 0
int main()
{
	int c,l,word,state;
	state =OUT;
	c=l=word=0;
	while((c=getchar())!=EOF)
	{	//uppercase ASCII 			lower case ASCII //
		if(((c >= 65) && (c <= 90)) || ((c >= 97) && (c <=122)))
			l++;
		if(c==' '||c=='\n'||c=='\t')
		state=OUT;
		else if((c>=33)&&(c<=64))
		continue;
	else if(state==OUT){
	state =IN;
		++word;}
	
	}


	printf("\nchar=%d\nword=%d",l,word);
	return 0;
}
