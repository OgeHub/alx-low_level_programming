#include <stdio.h>
#include "main.h"

/**
 * print_rev - print in reverse
 * @s: string
 * Funtion that prints in revers
 * Return: void
 */
void print_rev(char *s)
{
	    int i;

	for (i = i - 1; s[i] != '\0'; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
