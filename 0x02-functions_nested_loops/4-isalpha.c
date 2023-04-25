#include <stdio.h>
#include "main.h"

/**
 * _isalpha - search alphabet
 * @c: an integer
 * Function checks for alphabets
 * Return: 1 for alphabets and 0 for others
 */
int _isalpha(int c)
{
	int result;

	if (c >= 'a' && c <= 'z')
	{
		result = 1;
	}
	else if (c >= 'A' && c <= 'Z')
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	return (result);
}
