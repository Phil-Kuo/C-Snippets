#include <stdio.h>

int
main (int argc, char *argv[])
{
    int i, n;
    
    printf("Enter an integer: ");
    scanf("%d", &n);
    
    for (i = 2; i * i <= n; i += 2)
    {
        printf("%-d\n", i * i);
    }
    
    return 0;
}
