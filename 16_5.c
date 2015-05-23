#include <stdio.h>

struct date
	{
		int month, day, year;
	};

/*protypes*/
int day_of_year(struct date d);
int compare_dates(struct date d1, struct date d2);

int
main (int argc, char *argv[])
{
	struct date d = {3, 1, 2004};
	printf("day %d\n", day_of_year(d));
	
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
	else if (day_of_year(d1) = day_of_year(d2))
	{
		return 0;
	}
	else
	{
		return -1;
	}
	
}
