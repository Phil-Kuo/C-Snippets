/*Checks numbers for repeated digits*/

#include <stdio.h>
#include <stdbool.h>

int
main (int argc, char *argv[])
{
    bool digit_seen[10] = {false};
    int digit;
    long n, tmp;
    
    printf("Enter numbers(<=0 to terminate): ");
    do
    {
        scanf("%ld", &n);  
        tmp = n;
        
        if (tmp <= 0)
        {
           break; 
        }         
        else
        {
            while (tmp > 0)
            {
                digit = tmp % 10;
        
                if (digit_seen[digit])
                {                
                    break;
                }
                digit_seen[digit] = true;
                tmp /= 10; 
            }
            if (tmp > 0)
            {
                printf("%ld has repeated digit(s).\n", n);
            }
            else
            {
                printf("%ld doesn't have repeated digit.\n", n);
            }     
        }                    
            
    } while (n > 0);
               
    return 0;
}
