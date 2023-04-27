#include <stdio.h>
#include "main.h"

/**
 * more_numbers - entry point
 * Function that prints numbers
 */
void more_numbers(void)
{
	int c;
	int n = 0;
	int a;

	while (n < 10)
	{
		for (c = 48; c <= 57; c++)
		{
			_putchar(c);
		}
		for (a = ; a <= 'E'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
		n++;
	}
}
