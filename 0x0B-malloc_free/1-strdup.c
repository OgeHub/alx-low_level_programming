#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "main.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * _strdup -funtion name
 * @str: input string
 *
 * Return: a pointer
 */
char *_strdup(char *str)
{
	int strlength = _strlen(str) + 1;
	char *copy = malloc(sizeof(char) * strlength);
	if (str == NULL)
	{
		return (NULL);
	}
	_strcpy(copy, str);
	copy[strlength] = '\0';
	return (copy);
}

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
