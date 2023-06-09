#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints to 98
 * @n: numbers to start from
 * Function that prints to 98
 * Return: void
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n++;
		}
	} else if (n >= 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n--;
		}
	} else
	{
		printf("98");
	}
	printf("\n");
}
