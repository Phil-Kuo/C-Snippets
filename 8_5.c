/*输出斐波那契数列*/

#include <stdio.h>

#define REQUIRED 40

int
main (int argc, char *argv[])
{
    int fib_number[REQUIRED] = {0, 1}, i;
    
    for (i = 0; i < REQUIRED; i += 1)
    {
        fib_number[i+2] = fib_number[i+1] + fib_number[i];
    }
    
    for (i = 0; i < REQUIRED; i += 1)
    {
        printf("%d ", fib_number[i]);
    }
    printf("\n");
    
    return 0;
}
