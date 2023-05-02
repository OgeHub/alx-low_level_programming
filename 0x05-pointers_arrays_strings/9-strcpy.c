#include <stdio.h>
#include "main.h"

/**
 * *_strcpy - copy string
 * @dest: input character
 * @src: input character
 * Fuction that copy string
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
