/*Reverse a series of numbers */

#include <stdio.h>

#define N 10

int
main (int argc, char *argv[])
{
    int a[N], i;
    
    printf("Enter %d numbers: ", N);
    for (i = 0; i < N; i += 1)
    {
        scanf("%d", &a[i]);
    }
    
    printf("In reverse order:");
    for (i = N-1; i >= 0; i -= 1)
    {
        printf(" %d", a[i]);
    }   
    printf("\n");
   
    return 0;
}
