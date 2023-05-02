#include <stdio.h>
#include "main.h"

/**
 * _strlen - length of string
 * @s: character
 * Function that finds length of string
 * Return: integer
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
