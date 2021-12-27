//Ex.no.4.14:Define a macro swap(t,x,y) that interchanges two arguments of type t.
#include<stdio.h>

#define swap(t,x,y) {t z;  z = x;x = y;y = z; }

int main(void)
{
      char x,y;
      x='2';
      y='4';
      printf("x= %c \t y= %c\n",x,y);
      swap(char,x,y);
      printf("x=%c \t y=%c\n",x,y);
}


