#include <stdio.h>
#include "main"

/* print_alphabet - prints alphabets in lowercase */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++;)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
