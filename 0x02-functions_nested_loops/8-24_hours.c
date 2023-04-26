#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - prints minutes
 * Function that prints minutes in 24hours
 */
void jack_bauer(void)
{
	int min;
	int hour;
	int i;
	int zero;

	while (hour <= 23)
	{
		for (i = 0; i <= 59; i++)
		{
			min = i + '0';
			if (i < 10)
			{
				zero = 0 + '0';
			}
		}
		hour = hour + '0';
		_putchar(hour);
		_putchar(':');
		_putchar(zero);
		_putchar(min);
		_putchar('\n');
	}
}
