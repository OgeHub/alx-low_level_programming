#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function name
 * @separator: string pointer
 * @n: number of integer
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d%s ", va_arg(ap, unsigned int), separator);
		}
	}

	va_end(ap);
	printf("\n");
}
