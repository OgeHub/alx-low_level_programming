#include <stdio.h>
#include "main.h"

/**
 * _strspn - entry point
 * @s: input
 * @accept: input
 *
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, bytes = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				bytes++;
				break;
			}
		}
		if (s[i] != accept[j])
		{
			break;
		}
	}
	return (bytes);
}
