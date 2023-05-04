#include <stdio.h>
#include "main.h"

/**
 * _strncat - function name
 * @dest: input 1
 * @src: input 2
 * @n: input 3
 * Concatenate two string
 * Return: a pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	x = 0;
	y = 0;
	while (dest[x] != '\0')
	{
		dest++;
	}
	while (src[y] != '\0' && src[y] < n)
	{
		dest[x + y] = src[y];
		y++;
	}
	return (dest);
}
