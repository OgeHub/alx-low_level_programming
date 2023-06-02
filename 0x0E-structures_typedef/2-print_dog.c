#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function name
 * @d: dog details
 * Print a dog details
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (!d)
		return;

	if (!(*d).name)
	{
		(*d).name = "(nil)";
	}
	else if (!(*d).owner)
	{
		(*d).owner = "(nil)";
	}


	printf("Name: %s\n", (*d).name);
	printf("Age: %f\n", (*d).age);
	printf("Owner: %s\n", (*d).owner);
}
