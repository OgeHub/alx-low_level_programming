#include "dog.h"
#include <string.h>

/**
 * init_dog - function name
 * @d: input
 * @name: input
 * @age: input
 * @owner: input
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	strcpy(d->name, name);
	d->age = age;
	strcpy(d->owner, owner);
}
