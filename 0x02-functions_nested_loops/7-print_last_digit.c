#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints last digit
 * @n: an integer
 * Function that prints the last digit of a number
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int last_digit;
	char l;

	if (n >= 0)
	{
		last_digit = n % 10;
		l = last_digit + '0';
		_putchar(l);
	}
	else if (n < 0)
	{
		last_digit = -(n % 10);
		l = last_digit + '0';
		_putchar(l);
	}
	return (last_digit);
}
