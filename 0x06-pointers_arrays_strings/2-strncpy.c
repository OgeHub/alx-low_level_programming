#include <stdio.h>
#include "main.h"

/**
 * _strncpy - function name
 * @dest: input 1
 * @src: input 2
 * @n: input 3
 * Copy string
 * Return: a pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	x = 0;
	while (x < n && *(src + x))
	{
		*(dest + x) = *(src + x);
		x++;
	}
	while (x < n)
	{
		*(dest + x) = '\0';
		x++;
	}
	return (dest);
}
