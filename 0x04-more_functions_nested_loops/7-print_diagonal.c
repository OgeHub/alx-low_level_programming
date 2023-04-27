#include <stdio.h>
#include "main.h"

/**
 * print_line - entry point
 * @n: an integer
 * Function draws diagonal line
 */
void print_diagonal(int n)
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
			_putchar('\\');
			_putchar('\v');
			i++;
		}
		_putchar('\n');
	}
}
