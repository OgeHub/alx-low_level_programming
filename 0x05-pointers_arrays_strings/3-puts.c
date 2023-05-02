#include <stdio.h>
#include "main.h"

/**
 * _puts - print string
 * @str: input string
 * Funtion that prints string
 * Return: void
 */
void _puts(char *str)
{
	int i;
	int length = 0;

	while (*str != '\0')
	{
		for (i = 0; i <= length; i++)
		{
			_putchar(*str);
		}
		str++;
	}
	_putchar('\n');
}
