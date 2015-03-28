#include <stdio.h>

int
main (void)
{
    int amount, x, y, m, n;
    
    printf("Enter a dollar amount: ");
    scanf("%d", &amount);
    
    x = amount / 20;
    y = (amount - x * 20) / 10;
    m = (amount - x * 20 - y * 10) / 5;
    n = (amount - x * 20 - y * 10 - m * 5) / 1;
    printf("$20 bills: %d\n$10 bills: %d\n $5 bills: %d\n $1 bills: %d\n", x, y, m, n);
    
    return 0;
}
