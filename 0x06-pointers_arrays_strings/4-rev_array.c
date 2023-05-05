#include <stdio.h>
#include "main.h"

/**
 * reverse_array - function name
 * @a: input 1
 * @n: input 2
 * Reverse an array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int temp, i;

	for (i = 0; i < (n - 1) / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
