#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - main calculator body
 * @argc: the number of command line arguments
 * @argv: the command line arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int operand1, operand2;

	operand1 = atoi(argv[1]);
	operand2 = atoi(argv[3]);
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && operand2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		exit(99);
	}
	printf("%d\n", get_op_func(argv[2])(operand1, operand2));
	return (0);
}
