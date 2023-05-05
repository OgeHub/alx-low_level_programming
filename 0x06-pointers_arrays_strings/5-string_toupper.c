#include <stdio.h>
#include "main.h"

/**
 * string_toupper - function name
 * @str: input
 * Changes to uppercase
 * Return: a pointer
 */
char *string_toupper(char *str)
{
	char *store = str;

	while (*str)
	{
		if (*str >= 97 && *str <= 122)
		{
			*str -= 32;
		}
		str++;
	}
	return (store);
}
