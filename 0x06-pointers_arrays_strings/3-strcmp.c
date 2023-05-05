#include <stdio.h>
#include "main.h"

/**
 * _strcmp - funtion name
 * @s1: input 1
 * @s2: input 2
 * Compares string
 * Return: integer
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
		{
			return (15);
		}
		s1++;
		s2++;
	}
	return (0);
}
