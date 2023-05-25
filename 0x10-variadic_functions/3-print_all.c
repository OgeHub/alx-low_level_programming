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
	char character;
	int integer;
	float floating;
	char *str;
	va_list items;

	va_start(items, format);

	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				character = (char) va_arg(items, int);
				printf("%c", character);
				break;

			case 'i':
				integer = va_arg(items, int);
				printf("%d", integer);
				break;

			case 'f':
				floating = (float) va_arg(items, double);
				printf("%f", floating);
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
		{
			printf(", ");
		}

		i++;
	}

	va_end(items);
	printf("\n");
}
