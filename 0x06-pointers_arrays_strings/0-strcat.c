#include <stdio.h>
#include "main.h"

/**
 * _strcat - function name
 * @dest: input 1
 * @src: input 2
 * Concatenate str
 * Return: string
 */
char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	return (s);
}
