#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
	int days_gone = convert_day(day);

	if ((year % 400 == 0) || (year % 4 == 0
				&& year % 100 != 0))
	{
		if (month > 2)
		{
			days_gone++;
		}

		printf("Day of the year: %d\n", days_gone);
		printf("Remaining days: %d\n", 366 - days_gone);
	}
	else
	{
		if (month == 2 && day == 29)
        {
			printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
		}
		else
		{
			printf("Day of the year: %d\n", days_gone);
 			printf("Remaining days: %d\n", 365 - days_gone);
		}
	}
}
