#include <stdio.h>
#include "main.h"

/**
 * leet - function name
 * @str: input
 * Encodes a string
 * Return: a pointer
 */
char *leet(char *str)
{
	int i, j;
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	for (i = 0; *(str + i); i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (letters[j] == str[j])
			{
				str[j] = numbers[j];
			}
		}
	}
	return (str);
}
