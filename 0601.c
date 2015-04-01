#include <stdio.h>

int
main (int argc, char *argv[])
{
/*    依次输入一串数，遇到0或负数，终止输入，输出其中的最大数*/
    float number, tmp;
    
    printf("Enter a number: ");
    scanf("%f", &number);
    tmp = number;
    
    while (number > 0)
    {
        printf("Enter a number: ");
        scanf("%f", &number);
        if (number < tmp)
        {
            continue;
        }
        tmp = number;
    } 
    
    printf("The lagest number entered was %g\n", tmp);
    
    return 0;
}
