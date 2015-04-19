#include <stdio.h>
#include <math.h>

double pow(double x, double y);
double polynomial(double x);

int
main (int argc, char *argv[])
{
	double x;
	
	printf("Enter value of x:");
	scanf("%lf", &x);
	
	printf("%.2f\n", polynomial(x));
	
	return 0;
}

double
polynomial(double x)
{
	return 3 * pow(x, 5) + 2 * pow(x, 4) - 5 * pow(x, 3) - x * x + 7 * x -6;	
}
