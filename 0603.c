#include <stdio.h>

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

int
main (int argc, char *argv[])
{
/*    输入一个公式，将其约分为最简式*/

    int numerator, denominator, greatest_common_divivsor;
    
    printf("Enter a fraction: ");
    scanf("%d/%d", &numerator, &denominator);
    
    greatest_common_divivsor = gcd(numerator, denominator);
    
    printf("In lowest terms: %d/%d\n", numerator / greatest_common_divivsor, denominator / greatest_common_divivsor);
    
    return 0;
}
