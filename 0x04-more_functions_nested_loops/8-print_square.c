#include <stdio.h>
#include "main.h"

/**
 * print_square - entry point
 * @size: size of the sqaure
 * Funtion that prints square
 */
void print_square(int size)
{
	int i;
	int a;

	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		i = 1;
		while (i <= size)
		{
			a = 1;
			while (a <= size)
			{
				_putchar(35);
				a++;
			}
			_putchar('\n');
			i++;
		}
	}
}
