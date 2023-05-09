#include <stdio.h>
#include "main.h"

/**
 * _strstr - function name
 * @haystack: input 1
 * @needle: input 2
 * Locates a substring
 * Return: a pointer
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *temp = haystack;
		char *lookup = needle;

		while (*temp == *lookup && *lookup != '\0')
		{
			temp++;
			lookup++;
		}
		if (*lookup != '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (0);
}
