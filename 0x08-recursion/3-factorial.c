#include <stdio.h>
#include "main.h"

/**
 * factorial - function name
 * @n: input
 * Factorial of a number
 * Return: Integer
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
