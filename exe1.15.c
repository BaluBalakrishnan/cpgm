//Rewrite the temperature conversion program of Section 1.2 to use a function for conversion.
#include<stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20

void fahr_cels();
void cels_fahr();

int main()
{
	int c;
	printf("Temperture Conversion Program\n");
	printf("\n1.fahrenheit to celsius Table");
	printf("\n2.celsius to fahrenheit Table");
	printf("\nEnter a Choice : ");
	c=getchar();

	if(c=='1')
	{
	fahr_cels();
	}
	else if(c=='2')
	{
	cels_fahr();
	}
	else
	{
	printf("Invalid choice");
	}
return 0;
}
void fahr_cels()
{
float fahr;
printf("\nfahernheit\tcelsius");	
for(fahr=LOWER;fahr<=UPPER;fahr=fahr+STEP)//celsius formula
printf("\n%3.0f\t\t%6.0f",fahr,(fahr-32)*5.0/9.0);
}

void cels_fahr()
{
float cel;
printf("celsius\tfahernheit");	
for(cel=LOWER;cel<=UPPER;cel=cel+STEP)//fahrenheit formula
printf("\n%3.0f\t%6.0f",cel,((cel*9/5)+32));
}
