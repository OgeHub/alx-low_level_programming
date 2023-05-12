#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * @argc: counter
 * @argv: vector
 * Prints name of program
 * Return: integer
 */
int main(int argc, char* argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
