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

	if ((*d).name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else if ((*d).age == NULL)
	{
		printf("Age: (nil)\n");
	}
	else if ((*d).owner == NULL)
	{
		printf("Owner: (nil)\n");
	}

	printf("Name: %s\n", (*d).name);
	printf("Age: %f\n", (*d).age);
	printf("Owner: %s\n", (*d).owner);
}
