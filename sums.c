/*Sums a series of numbers.*/

#include <stdio.h>

int
main (int argc, char *argv[])
{
    int n, sum = 0;
    
    printf("This program sums a series of integers.\n");
    printf("Enter integers (0 to teminate): ");
    scanf("%d", &n);
    
    while (n != 0)
    {   
        sum += n;
        scanf("%d", &n);
    }
    
    printf("The sum is: %d\n", sum);
    
    return 0;
}
