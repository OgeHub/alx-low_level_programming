#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - create array of characters
 * @size: size of array
 * @c: character
 *
 * Return: a pointer
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (str == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
