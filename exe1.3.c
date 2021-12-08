//temperature conversion program  to print heading above the table//


#include<stdio.h>

int main()
{
    float fahr, celsius;
    int lower, upper, step;
  
    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("Temperture Conversion Table \n");
    printf("Fahr\tCelsius\t \n");
      
    while(fahr <= upper)
    {
        celsius = (5.0/9.0) * (fahr - 32.0);// cesius formula
                printf("%4.0f %10.1f\n", fahr, celsius);
                fahr = fahr + step;
    }

    return 0;
}
