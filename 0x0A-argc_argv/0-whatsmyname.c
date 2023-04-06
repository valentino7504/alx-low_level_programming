#include <stdio.h>
/**
 * main - Function to test how argv and argc works
 * @argc: the number of command line arguments
 * @argv: the array of strings in the command line arguments
 * Return: 0
 */
int main(int __attribute__((unused)) argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
