#include <stdio.h>
#include "main.h"

/**
 * is_prime_number - function name
 * @n: input
 * Prime number
 * Return: integer
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n % 2 == 1 || n == 2)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
