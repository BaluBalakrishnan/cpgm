//modify the temperature conversion program to print the table in reverse order//

#include <stdio.h>

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

     celsius = upper;
   printf("celsius\tfahrenheit\n");
    while(celsius >= lower)
    {
        fahr = (float) ((9.0 / 5.0) * celsius + 32.0);
        printf("%3.0f\t %6.1f\n", celsius, fahr);
        celsius = celsius - step;
    }

    return 0;
}

