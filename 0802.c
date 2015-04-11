/*Checks and displays numbers for repeated digits*/

#include <stdio.h>

int
main (int argc, char *argv[])
{
    int num_repeated[10] = {0};
    int digit;
    long n;
    
    printf("Enter a number: ");
    scanf("%ld", &n);
    
    while (n > 0)
    {
        digit = n % 10;
        num_repeated[digit] += 1;
        n /= 10; 
    }
    
    printf("Digit:       ");      
    for (digit = 0; digit < 10; digit += 1)
    {      
        printf("%d ", digit);
    }
    printf("\n");
    
    printf("Occurrences: "); 
    for (digit = 0; digit < 10; digit += 1)
    {
        printf("%d ", num_repeated[digit]);
    }    
    printf("\n");
        
    return 0;
}
