// the purpose of the program to copy its input to its output,replacing each string of one or more blanks by a single blank
#include<stdio.h>
int main()
{
	int c,blank='b';
	while((c=getchar())!=EOF)
	{
	   if(c==' ')//check blank space
	   {
		 if(blank != ' ')
			putchar(c);

           }
	   else
              putchar(c);// to display the normal character
	   		
	   blank=c;
		
	}
	return 0;
}
