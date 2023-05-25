#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function name
 * @separator: string pointer
 * @n: number of strings
 * Print strings
 * Return void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list items;

	va_start(items, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(items, char *);
		if (str == NULL)
		{
			printf("%s", "(nil)");
		}
		printf("%s", str);

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(items);
	printf("\n");
}
