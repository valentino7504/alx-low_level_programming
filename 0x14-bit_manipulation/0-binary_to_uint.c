#include "main.h"
/**
 * binary_to_uint - converts a binary string to an unsigned integer
 * @b: the binary number
 * Return: the integer value
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, length = 0;
	unsigned int result = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i]; i++)
		length++;
	for (i = 0; i < length; i++)
	{
		if (b[i] < 48 || b[i] > 49)
			return (0);
		result += (b[i] == '1') ? 1 << (length - i - 1) : 0;
	}
	return (result);
}
