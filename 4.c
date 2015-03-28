/*编程题*/

#include <stdio.h>

int
main (void)
{
    int n, gewei, shiwei;
    
    printf("Enter a two-digit number: ");
    scanf("%d", &n);
    
    gewei = n % 10;
    shiwei = n/10;
    printf("%d%d\n", gewei, shiwei);
    
    return 0;
}
