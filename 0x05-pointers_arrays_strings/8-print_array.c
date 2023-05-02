#include <stdio.h>
#include "main.h"

/**
 * print_array - prints array items
 * @a: integer
 * @n: integer
 * Funtion that prints array item
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
