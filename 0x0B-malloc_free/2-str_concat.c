#include <stdio.h>
#include <stdlib.h>
#include "main.h"

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
	char *ptr1;
	char *ptr2;
	char *str;
	int i, strlent1, strlent2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i]; i++)
	{
		strlent1++;
	}
	for (i = 0; s2[i]; i++)
	{
		strlent2++;
	}
	ptr1 = malloc(sizeof(char) * strlent1);
	if (ptr1 == NULL)
	{
		return (NULL);
	}
	ptr2 = malloc(sizeof(char) * strlent2);
	if (ptr2 == NULL)
	{
		return (NULL);
	}
	str = _strcat(ptr1, ptr2);
	return (str);
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
