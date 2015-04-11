/*Checks numbers for repeated digits*/

#include <stdio.h>
#include <stdbool.h>

int
main (int argc, char *argv[])
{
    bool digit_seen[10] = {false};
    int digit;
    long n, i = 0;
    
/*    首先将数读入一个数组，但是这里如何声明数组是个问题？*/
    printf("Enter numbers(<=0 to terminate): ");
    do
    {
        scanf("%ld", &n[i]);
        i++;
    } while (n[i-1] > 0);
    

/*    采用for循环，对数组中得每个数字进行判断是否有重复的数字   */
    for (i = 0;  n[i] > 0; i += 1)
    {
        while (n[i] > 0)
        {
            digit = n[i] % 10;
        
            if (digit_seen[digit])
            {
                
                break;
            }
            digit_seen[digit] = true;
            n[i] /= 10; 
        }
        if (n[i] > 0)
        {
            printf("%ld has repeated digit(s)\n.", n[i]);
        }
        else
        {
            printf("No repeated digit\n");
        }
    }
    
    
    
    return 0;
}
