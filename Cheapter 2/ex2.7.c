//Ex.no.2.7:Write a function invert(x,p,n) that returns x with the n bits that begin at position p inverted (i.e., 1 changed into 0 and vice versa), leaving the others unchanged.
#include<stdio.h>

unsigned invert(unsigned x , int p , int n);// invert(x,p,n)

int main()
{
       	int x=10 ,p=3, n=3;

	printf(" invert bits ans = %u" , invert(x, p , n));
}

unsigned invert(unsigned x, int p , int n)
{
return x^(~(~0<<n)<<(p+1-n));//ex-or to invert bits
}
