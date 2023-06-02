#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * is_digit - function name
 * @str: string
 * Check if string is a digit
 * Return: 0 if number, 1 if not
 */
int is_digit(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] < '0' || str[i] > '9')
			return (1);
	}

	return (0);
}

/**
 * mul_func - function name
 * @num1: first digit
 * @num2: second digit
 * Multiply two digits
 * Return: product of two digits
 */
int mul_func(int num1, int num2)
{
	return (num1 * num2);
}

/**
 * main - entry point
 * @argc: number of argument
 * @argv: array of argumnet
 * Mulpitiplies positive numbers
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num1, num2, product;

	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	product = mul_func(num1, num2);

	printf("%d\n", product);

	return (0);
}
