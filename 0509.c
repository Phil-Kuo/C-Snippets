#include <stdio.h>

int
main (int argc, char *argv[])
{
/*    比较输入的两个日期得先后顺序   */
    int month_1, month_2, day_1, day_2, year_1, year_2, flag = 1;
    
    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month_1, &day_1, &year_1);
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month_2, &day_2, &year_2);
    
    if ( year_1 > year_2 || month_1 > month_2 || day_1 > day_2)
    {
        flag = 0;
    }
    
    if (flag)
    {
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", month_1, day_1, year_1, month_2, day_2, year_2);
    }
    else
    {
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", month_2, day_2, year_2, month_1, day_1, year_1);
    }
    
    return 0;
}

