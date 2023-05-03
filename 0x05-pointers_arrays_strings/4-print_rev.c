#include <stdio.h>
#include "main.h"

/** 
 * print_rev - print reverse
 * @s: input character
 * Function that prints reversed str
 * Return: void
 */
void print_rev(char *s)
{
	int i;
	int length;

	for (i = 0; s[i] != '\0'; ++i)
		length++;
	for (i = length - 1; s[i] != '\0'; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
