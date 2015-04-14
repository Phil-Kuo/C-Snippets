/*Prints a countdown.*/

#include <stdio.h>

void 
countdown(int n)
{
    printf("T minus %d and counting\n", n);
}
int
main (int argc, char *argv[])
{
    int i;
    
    for (i = 10; i > 0; i--)
    {
        countdown(i);
    }
    
    return 0;
}
