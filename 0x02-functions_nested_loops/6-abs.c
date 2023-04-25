#include <stdio.h>
#include "main.h"

/**
 * _abs - prints absolute value
 * @n: an integer
 * Function prints absolute value
 * Return: the asolute value
 */
int _abs(int n)
{
	int result;

	if (n > 0)
	{
		result = n;
	}
	else if (n < 0)
	{
		result = -1 * n;
	}
	return (result);
}
