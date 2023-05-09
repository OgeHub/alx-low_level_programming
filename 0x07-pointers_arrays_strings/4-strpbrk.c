#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - function name
 * @s: input 1
 * @accept: inpute 2
 * Return: a pointer
 */
char *_strpbrk(char *s, char *accept)
{
	char *p = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
			{
				return (s);
			}
			accept++;
		}
		accept = p;
		s++;
	}
	return ('\0');
}
