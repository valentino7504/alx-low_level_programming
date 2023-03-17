#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - This function is to check the last digit of a number
 * Return: 0 if no errors
 */

int main(void)
{
	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	printf("Last digit of %d is %d and ", n, lastDigit);
	if (lastDigit >= 6)
	{
		printf("is greater than 5");
	}
	else if (lastDigit == 0)
	{
		printf("is 0");
	}
	else
	{
		printf("is less than 6 and not 0");
	}
	printf("\n");
	return (0);
}
