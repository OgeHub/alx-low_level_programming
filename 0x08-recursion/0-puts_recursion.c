#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - name of the function
 * @s: string imput
 * Prints strings
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	} else
	{
		_putchar('\n');
	}
}
