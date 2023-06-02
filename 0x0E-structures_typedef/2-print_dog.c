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
		printf("Name: (nil)\n");
	}
	else if (!(*d).age)
	{
		printf("Age: (nil)\n");
	}
	else if (!(*d).owner)
	{
		printf("Owner: (nil)\n");
	}

	if (d)
	{
		printf("Name: %s\n", (*d).name);
		printf("Age: %f\n", (*d).age);
		printf("Owner: %s\n", (*d).owner);
	}
}
