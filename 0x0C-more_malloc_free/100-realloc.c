#include <stdlib.h>
/**
 * _realloc - reallocates a block of memory
 * @ptr: the old pointer
 * @old_size: the size of the old pointer
 * @new_size: the size of the new pointer
 * Return: the new pointer or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *new_pointer;
	char *empty_ptr =  (char *) ptr;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		new_pointer = malloc(new_size);
		if (new_pointer == NULL)
		free(ptr);
		return (new_pointer);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	new_pointer = malloc(new_size);
	if (new_pointer == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < old_size; i++)
	{
		new_pointer[i] = empty_ptr[i];
	}
	free(ptr);
	return (new_pointer);
}
