#include <stdio.h>
#include "main.h"

/**
 * print_numbers - entry point
 * Funtion that prints numbers
 */
void print_numbers(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
