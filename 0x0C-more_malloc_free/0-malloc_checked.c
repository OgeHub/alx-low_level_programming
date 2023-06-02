#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked -function name
 * b: size of memory
 * Allocates memory using malloc
 * Return: pointer to the memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return(ptr);
}
