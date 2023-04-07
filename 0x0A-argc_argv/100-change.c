#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function body
 * @argc: the number of command line arguments
 * @argv: the command line arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int cash;
	int coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cash = atoi(argv[1]);
	while (cash > 0)
	{
		if (cash >= 25)
		{
			cash -= 25;
		}
		else if (cash >= 10)
		{
			cash -= 10;
		}
		else if (cash >= 5)
		{
			cash -= 5;
		}
		else if (cash >= 2)
		{
			cash -= 2;
		}
		else
		{
			cash--;
		}
		coins++;
	}
	printf("%d\n", coins);
	return (0);
}
