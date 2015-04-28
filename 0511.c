#include <stdio.h>

int
main (int argc, char *argv[])
{
/*    输入两位数，显示其英文单词*/
    
    int number, first_digit, second_digit;
    
    char *first_d[] = {"twenty", "thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    char *second_d[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    char *special[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    
    printf("Enter a two-digit number: ");
    scanf("%d", &number);
    
    first_digit = number / 10;
    second_digit = number % 10;
    
    if (first_digit == 1)
    {
    	printf("%s\n", special[second_digit]);
    }
    else
    {
    	printf("%s-%s\n", first_d[first_digit-2], second_d[second_digit-1]);
    }
    return 0;
}

