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
	va_list items;

	va_start(items, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(items, unsigned int));

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(items);
	printf("\n");
}
