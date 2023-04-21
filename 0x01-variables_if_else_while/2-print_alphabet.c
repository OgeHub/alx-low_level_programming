#include <stdio.h>

/**
 * main - Entry point
 * Print lowercase alphabet
 * Return: Always 0 (Succes)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	};
	putchar('\n');
	return (0);
}
