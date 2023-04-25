#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints alphabets
 * Description: prints alphabets in lowercase
 * Return: void
 */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
