#include <stdio.h>
#include "main.h"

/**
 * _islower - checks for lowercase
 * @c: an integer
 * Function checks for lowercase character
 * Return: 1 or lowercase o for others
 */
int _islower(int c)
{
	int result;

	if (c >= 'a' && c <= 'z')
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	return (result);
}
