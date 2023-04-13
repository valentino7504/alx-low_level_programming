#include <stdlib.h>
/**
 * malloc_checked - allocates memeory using malloc
 * @b: the number of bytes
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *allocated;

	allocated = malloc(b);
	if (allocated == NULL)
	{
		exit(98);
	}
	return (allocated);
}
