#include "main.h"
#include <stdlib.h>

/**
 * array_range - function name
 * @min: minimum value
 * @max: maximum value
 * Create array of integers
 * Return: pointer to the array
 */
int *array_range(int min, int max)
{
	int i = 0, size, *ptr;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	ptr = malloc(size * sizeof(int));
	if (ptr == NULL)
		return (NULL);

	while (i < size)
	{
		ptr[i] = min + i;

		i++;
	}

	return (ptr);
}
