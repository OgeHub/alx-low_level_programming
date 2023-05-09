#include <stdio.h>
#include "main.h"

/**
 * *_memset - function name
 * @s: input 1
 * @b: input 2
 * @n: input 3
 * Return: a pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
