#include "function_pointers.h"

/**
 * int_index - function name
 * @array: an array
 * @size: length of the array
 * @cmp: function pointer
 *
 * Return: void
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int n;
	int result;

	if (size <= 0)
	{
		return (-1);
	}
	for (n = 0; n < size; n++)
	{
		result = (*cmp)(array[n]);
		if (result > 0)
		{
			return (n);
		}
	}
	return (-1);
}
