//Ex.no.2.9:In a two’s complement number system, x &= (x-1) deletes the rightmost 1-bit in x. Explain why. Use this observation to write a faster version of bitcount.
#include<stdio.h>

int bitcount (unsigned x);
int main()
{
	int x=15;
	
	
	printf("bitcount =%d", bitcount(x));
}

int bitcount(unsigned x)
{
int b;
for(b=0;x!=0;x&=(x-1))
b++;
return b; 
}
