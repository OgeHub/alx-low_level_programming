#include <stdio.h>
#include "main.h"

/* Function that prints alphabet in lowercase 10 times */
void print_alphabet_x10(void)
{
	char alphabet;
	int i = 0;

	while (i < 10)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++;)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
		i++;
	}
}
