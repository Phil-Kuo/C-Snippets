#include <stdio.h>
#include <math.h>

int
main (void)
{
    float x, result;
    
    printf("Enter value of x: ");
    scanf("%f", &x);
    
/* 2.5    result = 3 * x * x * x * x * x + 2 * x * x * x * x - 5 * x * x * x - x * x + 7 * x -6; */
    result  = ((((3 * x +2) * x - 5) * x -1) * x + 7) * x -6;
    
    printf("Result is: %f\n", result);
    
    return 0;
}
