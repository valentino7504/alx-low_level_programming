#include <stdlib.h>
#include "strlen.c"
#include <stdio.h>
/**
 * argstostr - concatenates args into a string
 * @ac: the number of args
 * @av: the args
 * Return: a concat string
 */
char *argstostr(int ac, char **av)
{
	int i, j;
	int length = 1;
	char *concatenated;
	int stop_point;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		length += _strlen(av[i]);
	}
	length += ac;
	concatenated = malloc(sizeof(char) * length);
	if (concatenated == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < _strlen(av[i]); j++)
		{
			concatenated[stop_point] = av[i][j];
			stop_point++;
		}
		concatenated[stop_point] = '\n';
		stop_point++;
	}
	concatenated[stop_point + 1] = '\0';
	return (concatenated);
}
