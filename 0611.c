#include <stdio.h>

int
main (int argc, char *argv[])
{
    int n;
    
    printf("Enter an integer: ");
    scanf("%d", &n);
    
    int i;
    float sum = 1;
    
    for (i = 1; i <= n; i++)
    {
/*        以下for循环计算阶乘*/
        int j;
        float denominator = 1;
        
        for (j = i; j > 0; j--)
        {
            denominator *= j; 
        }
/*        计算级数和*/
        sum += 1/denominator;
    } 
    
    printf("e = %f\n", sum);
    
    return 0;
}
