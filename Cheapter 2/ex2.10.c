//Ex.no.2.10: Rewrite the function lower, which converts upper case letters to lower case, with a conditional expression instead of if-else.
#include<stdio.h>
int lowtoup(int c);
int main()
{
int c;

while((c=getchar())!=EOF)
putchar(lowtoup(c));

return 0;
}
int lowtoup(int c)
{
int a;
a= (c>='A' && c<='Z')? c+32:c;
return a;
}
