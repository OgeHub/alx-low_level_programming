#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: a poniter
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int strlent1, strlent2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	strlent1 = _strlen(s1);
	strlent2 = _strlen(s2);
	str = malloc(sizeof(char) * (strlent1 + strlent2 + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	_strcpy(str, s1);
	_strcat(str, s2);
	return (str);
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
