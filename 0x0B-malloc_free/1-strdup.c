#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup -funtion name
 * @str: input string
 *
 * Return: a pointer
 */
char *_strdup(char *str)
{
	int strlength = 0;

	while (*str != '\0')
	{
		strlength++;
		str++;
	}
	str = malloc(sizeof(char) * (strlength + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	if (!str)
	{
		return (NULL);
	}
	return (str);
}
