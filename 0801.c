/*Checks and displays numbers for repeated digits*/

#include <stdio.h>
#include <stdbool.h> /*C99 only*/

int
main (int argc, char *argv[])
{
    bool digit_seen[10] = {false};
    int num_repeated[10] = {0};
    int digit, flag = 0;
    long n;
    
    printf("Enter a number: ");
    scanf("%ld", &n);
    
    while (n > 0)
    {
        digit = n % 10;
        if (digit_seen[digit])
        {            
            flag = 1;/*设置了一个旗帜，以用来判断如何进行下一步得分情况输出*/
            num_repeated[digit] += 1; 
        }
        digit_seen[digit] = true;
        n /= 10; 
    }
    
    if (flag)
    {
        printf("Repeated digit:");
        for (digit = 0; digit < 10; digit += 1)
        {
            if (num_repeated[digit])
            {         
            printf(" %d", digit);
            }
        }
    }
            
    else
    {
        printf("No repeated digit.");
    }
   
    printf("\n");
        
    return 0;
}
