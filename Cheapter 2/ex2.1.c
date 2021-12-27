//Ex.no:2.1 Write a program to determine the ranges of char, short, int, and long variables, both signed and unsigned, by printing appropriate values from standard headers and by direct computation. Harder if you compute them: determine the ranges of the various floating-point types.
#include<limits.h>
#include<float.h>

int main()
{

printf("MAX SIGNED CALCULATIO\n ");
printf("min sign char = %d\n",-((unsigned char)~0>>1)-1);//1 byte(8bit)
printf("max sign char =%d\n",((unsigned char)~0>>1));

printf("min sign short = %d\n",-((unsigned short)~0>>1)-1);//2 byte(16bit)
printf("max sign short =%d\n",((unsigned short)~0>>1));

printf("min sign int = %d\n",-((unsigned int)~0>>1)-1);//4 byte(32bit)
printf("max sign int =%d\n",((unsigned int)~0>>1));

printf("min sign long = %ld\n",-((unsigned long)~0>>1)-1);//8 byte(64bit)
printf("max sign long =%ld\n",((unsigned long)~0>>1));

printf("MAX UNSIGNED CALCULATION\n ");
printf(" max unsigned char ans = %d\n",(unsigned char)~0);
printf(" max unsigned short ans = %d\n",(unsigned short)~0);
printf(" max unsigned int ans = %u\n",(unsigned int)~0);
printf(" max unsigned long ans = %lu\n",(unsigned long)~0);



printf("\n CHAR RANGES OF SIGN & UNSIGN DATATYPES\n " );
printf("min sign char = %d to max sign char = %d\n",SCHAR_MIN,SCHAR_MAX);
printf("min sign char = 0 to max sign char = %d\n\n",UCHAR_MAX);

printf(" SHORT RANGES OF SIGN & UNSIGN DATATYPES\n " );
printf("min sign short = %d to max sign short = %d\n",SHRT_MIN,SHRT_MAX);
printf("min unsign short = 0 to max unsign sh = %d\n\n",USHRT_MAX);

printf(" INT RANGES OF SIGN & UNSIGN DATATYPES\n " );
printf("min sign int = %d to max sign int = %d\n",INT_MIN,INT_MAX);
printf("min unsign int = 0 to max unsign int = %u\n\n",UINT_MAX);

printf(" LONG RANGES OF SIGN & UNSIGN DATATYPES\n " );
printf("min sign long = %ld to max sign long = %ld\n",LONG_MIN,LONG_MAX);
printf("min unsign char = 0 to max unsign char = %lu\n\n",ULONG_MAX);



return 0;
}
