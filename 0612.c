#include <stdio.h>

int
main (int argc, char *argv[])
{
    float min;
    
    printf("Enter epsilon: ");
    scanf("%f", &min);
    
    int i;
    float sum = 1;
    
    for (i = 1; ; i++)
    {
/*        for循环计算阶乘*/
        int j;
        float denominator = 1;
        
        for (j = i; j > 0; j--)
        {
            denominator *= j; 
        }
        
        if (1 / denominator < min)
        {
            break;
        }
        
/*        计算级数和*/
        sum += 1/denominator;
    } 
    
    printf("e = %f\n", sum);
    
    return 0;
}
