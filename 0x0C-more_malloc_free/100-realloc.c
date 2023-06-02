#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function name
 * @ptr: pointer to the old memory
 * @old_size: size of ptr
 * @new_size: size of new memory
 * Reallocates a memory block
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int i = 0;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);

		return (new_ptr);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	while (i < old_size && i < new_size)
	{
		new_ptr[i] = ((char *)ptr)[i];

		i++;
	}

	free(ptr);

	return (new_ptr);
}
