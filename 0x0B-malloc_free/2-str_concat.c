#include <stdio.h>
#include <stdlib.h>
#include "main.h"

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
	int i, j, strlent = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] || s2[i]; i++)
	{
		strlent++;
	}
	str = malloc(sizeof(char) * strlent);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
	{
		str[j++] = s1[i];
	}
	for (i = 0; s2[i]; i++)
	{
		str[j++] = s2[i];
	}
	return (str);
}
