#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function name
 * @n: required input
 * Sum all integers
 * Return: Integer(Sum)
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list items;
	unsigned int i, sum;

	if (n == 0)
	{
		return (0);
	}

	va_start(items, n);

	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(items, unsigned int);
	}

	va_end(items);
	return (sum);
}
