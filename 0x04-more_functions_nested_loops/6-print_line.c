#include <stdio.h>
#include "main.h"

/**
 * print_line - entry point
 * @n: an integer
 * Function draws starigt line
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		i = 1;
		while (i <= n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
}
