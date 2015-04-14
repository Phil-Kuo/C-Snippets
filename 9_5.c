/*Returns # of digits of a number.*/

#include <stdio.h>

int num_digits(long n);

int
num_digits(long n)
{
    int i = 0;
    
    do
    {
        n /= 10;
        i++;
    }while(n != 0);
    
    return i;
}

int
main (int argc, char *argv[])
{
    long n;
    
    printf("Enter a number: ");
    scanf("%ld", &n);
    
    printf("%ld has %d digits.\n", n, num_digits(n));
    
    return 0;
}
