#include <stdio.h>
#include "main.h"

int square_root(int root, int num);
/**
 * _sqrt_recursion - function name
 * @n: input
 * Natural square root of a number
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (square_root(1, n));
}
/**
 * square_root - function name
 * @root: input 1
 * @num: input 2
 * Return: integer
 */
int square_root(int root, int num)
{
	if (num == (root * root))
		return (root);
	else if (root > num)
		return (-1);
	return (square_root(root + 1, num));
}
