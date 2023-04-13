#include <stdlib.h>
/**
 * _calloc - allocates emmory and intiialises it to 0
 * @nmemb: number of members of the array
 * @size: the size of eache element
 * Return: a pointer to the memory or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *allocated;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	allocated = malloc(nmemb * size);
	if (allocated == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb; i++)
	{
		allocated[i] = 0;
	}
	return (allocated);
}
