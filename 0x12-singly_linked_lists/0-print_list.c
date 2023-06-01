#include "lists.h"
#include <stdio.h>

/**
 * print_list - function name
 * @h: pointer to the header
 * Prints all elements in a lists
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t num_of_nodes = 0;

	if (h == NULL)
	{
		printf("[0] (nil)\n");
		return (0);
	}

	while (h)
	{
		if (h->str != NULL)
			printf("%s\n", h->str);
		else
			printf("[0] (nil)\n)");

		h = h->next;
		num_of_nodes++;
	}

	return (num_of_nodes);
}
