#include <stdio.h>
#define PRINT(d1, d2) printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", d1.month, d1.day, d1.year, d2.month, d2.day, d2.year)
struct date
{
	int month, day, year;
};

int
main (int argc, char *argv[])
{
	int month_1, month_2, day_1, day_2, year_1, year_2, flag = 1;
	
	printf("Enter first date (mm/dd/yy): ");
	scanf("%d/%d/%d", &month_1, &day_1, &year_1);
	printf("Enter second date (mm/dd/yy): ");
	scanf("%d/%d/%d", &month_2, &day_2, &year_2);
	struct date d1 = {month_1, day_1, year_1};
	struct date d2 = {month_2, day_2, year_2};
	
	if (d1.year > d2.year)
	{
		PRINT(d2, d1);
	}
	else if (d1.year < d2.year)
	{
		PRINT(d1, d2);
	}
	else if (compare_dates(d1, d2) == -1)
	{
		PRINT(d1, d2);
	}
	else if (compare_dates(d1, d2) == 1)
	{
		PRINT(d2, d1);
	}
	else
	{
		printf("The same day.\n");
	}
	return 0;
}
int
day_of_year(struct date d)
{
	int i, day_count = 0, month[12] = {31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	
	if (d.year % 4 == 0 && (d.year % 100 != 0 || d.year % 400 == 0 ) )
	{
		month[1] = 29;
	}
	else
	{
		month[1] = 28;
	}
	
	for (i = 0; i < d.month - 1; i++)
	{
		day_count += month[i]  ;
	}
	day_count += d.day;
	
	return day_count;
}

int compare_dates(struct date d1, struct date d2)
{
	if (day_of_year(d1) > day_of_year(d2))
	{
		return 1;
	}
	else if (day_of_year(d1) == day_of_year(d2))
	{
		return 0;
	}
	else
	{
		return -1;
	}
	
}
