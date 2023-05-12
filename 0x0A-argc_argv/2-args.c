#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * @argc: input 1
 * @argv: input 2
 * Prints all arguements
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
