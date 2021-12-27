//Ex.no: 2.6 setbits( x, p , n , y )
#include<stdio.h>

unsigned setbits(unsigned x, int p ,int n , unsigned y);

int main()
{
int x=12,p=3,n=3,y=57;
printf("setbits ans= %u",setbits( x ,p ,n ,y));
}

unsigned setbits(unsigned x, int p , int n, unsigned y)
{
return x & ~(~(~0<<n)<<(p+1-n)) | (y & (~(~0<<n))<<(p+1-n));
}
