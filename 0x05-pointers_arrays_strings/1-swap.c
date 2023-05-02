#include <stdio.h>
#include "main.h"

/**
 * swap_int - swap integers
 * @a: integer a
 * @b: integer b
 * Function that swaps two integers
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
