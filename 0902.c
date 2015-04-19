#include <stdio.h>

float tax_calc(float income);	

int
main (int argc, char *argv[])
{
	float income;
	
	printf("Enter an income: ");
	scanf("%f", &income);
	printf("tax: $%.2f\n", tax_calc(income));
	return 0;
}

float 
tax_calc(float income)
{
	float threshold, base, rate;
	
	if (income <= 750)
	{
		threshold = 0;
		base = 0;
		rate = 0.01f;
	}
	else if (income <= 2250)
	{
		threshold = 750;
		base = 7.5f;
		rate = 0.02f;
	}
		else if (income <= 3750)
	{
		threshold = 2250;
		base = 22.5f;
		rate = 0.03f;
	}
	else if (income <= 5250)
	{
		threshold = 3750;
		base = 82.5f;
		rate = 0.04f;
	}
	else if (income <= 7000)
	{
		threshold = 5250;
		base = 142.5f;
		rate = 0.05f;
	}
	else
	{
		threshold = 7000;
		base = 230.0f;
		rate = 0.06f;		
	}
	
	return base + (income - threshold) * rate;
}	
