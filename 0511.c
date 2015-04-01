#include <stdio.h>

int
main (int argc, char *argv[])
{
/*    输入两位数，显示其英文单词*/
    
    int number, first_digit, second_digit;
    
    printf("Enter a two-digit number: ");
    scanf("%d", &number);
    
    first_digit = number / 10;
    second_digit = number % 10;
    
    switch(first_digit){
        case 0: case 1:
            break;
        case 2: 
    
    return 0;
}
