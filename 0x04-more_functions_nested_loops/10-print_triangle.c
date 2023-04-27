#include <stdio.h>
#include "main.h"

/**
 * print_triangle - entry point
 * @size: size of triangle
 * Prints a triangle
 */
void print_triangle(int size)
{
	int i;
	int a;
	int b;

	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		i = 1;
		while (i <= size)
		{
			for (a = size - i; a > 1; a--)
			{
				_putchar(32);
			}
			for (b = 0; b <= i; b++)
			{
				_putchar(35);
			}
			_putchar('\n');
			i++;
		}
	}
}
