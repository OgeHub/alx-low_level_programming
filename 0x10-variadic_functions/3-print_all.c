#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - function name
 * @format: list of arguments
 * Prints all
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str;
	va_list items;

	va_start(items, format);
	if (format)
	{
		while (format[i] != '\0')
		{
			switch (format[i])
			{
				case 'c':
					printf("%c", va_arg(items, int));
					break;
				case 'i':
					printf("%d", va_arg(items, int));
					break;
				case 'f':
					printf("%f", va_arg(items, double));
					break;
				case 's':
					str = va_arg(items, char *);
					if (!str)
						str = "(nil)";
					printf("%s", str);
					break;
				default:
					i++;
					continue;
			}
			if (format[i + 1] != '\0' && (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's'))
				printf(", ");
			i++;
		}
	}
	va_end(items);
	printf("\n");
}
