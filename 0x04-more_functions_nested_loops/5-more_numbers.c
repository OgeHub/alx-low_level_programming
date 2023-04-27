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

	while (n < 10)
	{
		for (c = 0; c < 15; c++)
		{
			if (c > 9)
			{
				_putchar((c / 10) + '0');
			}
			_putchar((c % 10) + '0');
		}
		_putchar('\n');
		n++;
	}
}
