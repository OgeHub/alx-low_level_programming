#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function name
 * @d: struct dog to free
 * Free dogs
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free((*d).name);
		free((*d).owner);
		free(d);
	}
}
