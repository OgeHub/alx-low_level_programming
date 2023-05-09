#include <stdio.h>
#include "main.h"

/**
 * *_memcpy -function name
 * @dest: input 1
 * @src: input 2
 * @n: input 3
 * Return: a pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *returnedResult = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (returnedResult);
}
