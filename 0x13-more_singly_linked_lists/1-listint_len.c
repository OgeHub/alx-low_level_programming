#include "lists.h"

/**
 * listint_len - function name
 * @h: pointer to the head
 *
 * Return: length of list
 */
size_t listint_len(const listint_t *h)
{
	size_t length_of_list = 0;

	while (h != NULL)
	{
		length_of_list++;
		h = h->next;
	}

	return (length_of_list);
}
