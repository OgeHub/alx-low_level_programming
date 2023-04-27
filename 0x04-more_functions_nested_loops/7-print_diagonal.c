#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - entry point
 * @n: an integer
 * Function that draws diagonal line
 * Return: void
 */
void print_diagonal(int n)
{
	int i;
	int a;

	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		i = 1;
		while (i <= n)
		{
			a = 1;
			while (a <= i)
			{
				_putchar(32);
				a++;
			}
			_putchar(92);
			_putchar('\n');
			i++;
		}
	}
}
