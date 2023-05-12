#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * @argc: input 1
 * @argv: input 2
 * Prints number of arguements
 * Return: integer
 */
int main(int argc, char *argv[])
{
	if (argv[0])
	{
		printf("%d\n", (argc - 1));
	}
	return (0);
}
