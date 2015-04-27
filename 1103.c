#include <stdio.h>

int gcd(int m, int n);
void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);

int
main (int argc, char *argv[])
{
/*    输入一个公式，将其约分为最简式*/

    int numerator, denominator, reduced_numerator, reduced_denominator;
    
    printf("Enter a fraction: ");
    scanf("%d/%d", &numerator, &denominator);
    
    reduce(numerator, denominator, &reduced_numerator, &reduced_denominator);
    
    printf("In lowest terms: %d/%d\n", reduced_numerator, reduced_denominator);
    
    return 0;
}

int gcd(int m, int n)
{
    int tmp;
    
    while ( n != 0)
    {
        tmp = m % n;
        m = n;
        n = tmp;
    }
    
    return m;
}

void
reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator)
{
	int greatest_common_divivsor;
	
	greatest_common_divivsor = gcd(numerator, denominator);
	*reduced_numerator = numerator / greatest_common_divivsor;
	*reduced_denominator = denominator / greatest_common_divivsor;
}
