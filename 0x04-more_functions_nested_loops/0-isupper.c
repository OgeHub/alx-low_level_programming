#include <stdio.h>
#include "main.h"

/**
 * _isupper - entry point
 * @c: an integer
 * Funtion that searches for uppercase
 * Return: 1 for uppercase o for others
 */
int _isupper(int c)
{
	int result;

	if (c >= 'A' && c <= 'Z')
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	return (result);
}
