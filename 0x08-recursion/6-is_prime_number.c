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
	if (n % 2 == 1 || n == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
