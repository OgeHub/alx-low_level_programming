#include <stdio.h>
#include "main.h"

/**
 * *_strchr - entry point
 * @s: input
 * @c: input
 *
 * Return: string or NULL
 */
char *_strchr(char *s, char c)
{
	while (*s >= '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return ('\0');
}
