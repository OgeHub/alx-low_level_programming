#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - function name
 * @array: an array
 * @size: size of the array
 * @action: function pointer
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t n;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (n = 0; n < size; n++)
	{
		(*action)(array[n]);
	}
}
