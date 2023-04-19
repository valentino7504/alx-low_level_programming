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
	if (argc < 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	if ((get_op_func(argv[2]) == op_div || get_op_func(argv[2]) == op_mod)
	 && operand2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(argv[2])(operand1, operand2));
	return (0);
}
