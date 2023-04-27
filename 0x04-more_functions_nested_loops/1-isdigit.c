#include <stdio.h>
#include "main.h"

/**
 * _isdigit - entry point
 * @c: an integer
 * Function that searches a digit
 * Return: 1 for a digit and 0 for others
 */
int _isdigit(int c)
{
	int result;

	if (c >= 48 && c <= 57)
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	return (result);
}
