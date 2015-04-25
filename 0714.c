#include <stdio.h>
#include <math.h>

int
main (int argc, char *argv[])
{
	double number, y = 1, div, next, old;

	
	printf("Enter a positive number: ");
	scanf("%lf", &number);
	
	while (fabs(next - old) >= 0.00001 * old)
	{
		div = number / y;
		next = (div + y) / 2;
		old = y;
		y = next;
	}
	
	printf("%f\n", next);
	return 0;
}
