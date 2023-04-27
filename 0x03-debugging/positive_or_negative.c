#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *positive_or_negative - Entry point
 *Print random numbers
 *Return: Always 0 (Success)
 */
int positive_or_negative(int n)
{
	if (n > 0)
	{
		printf("%d is positive\n", n);
	} else if (n == 0)
	{
		printf("%d is zero\n", n);
	} else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
