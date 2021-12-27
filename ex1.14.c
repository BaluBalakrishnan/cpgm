//Ex1.14 write a progam to print a histogram of the frequencies of different characters in its input

#include<stdio.h>
#define MAX 126
#define MIN 32
int main()
{
	int c,i,j,n;
	int arr[MAX];
	c=i=n=0;
	if((i<=MIN)&&(MIN<=MAX))
	{	for(i=0;i<MAX;i++)
		arr[i]=0;

while((c=getchar())!=EOF)
{	++arr[c-MIN];
	if(c=='\n')
	{
	for(i=0;i<MAX;i++)
	if(arr[i]!=0){
	printf("\n");
	printf("%c: ",i+MIN);
	for(n=0;n<arr[i];n++)
	printf("*");
	}
	}
}
}
return 0;
}
	 
