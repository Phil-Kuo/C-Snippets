#include <stdio.h>

int day_of_year(int month, int day, int year);

int 
day_of_year(int month, int day, int year)
{
    int num_days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};/*将每个月的天数定义为一个数组*/
    int day_count = 0, i;
    
    if (month == 1)
    {
        day_count = day;
    }
    
    for (i = 1; i < month; i += 1)
    {
        day_count += num_days[i-1];
    }
    
    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0 ) && month > 2)/*判断是否为闰年*/
    {
        day_count++;
    }
    
    return day_count;
}

int
main (int argc, char *argv[])
{
    int month, day, year;
    
    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);
    
    printf("%2d/%2d/%4d is the %d days of year.\n", month, day, year, day_of_year(month, day, year));
    
    return 0;
}
