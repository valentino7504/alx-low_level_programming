#include "main.h"
/**
 * get_endianness - gets the endianness of a machine
 * Return: 0 if big endian
 */
int get_endianness(void)
{
	short int num = 1;
	char *endian = (char *) &num;

	return ((int) *endian);
}
