#include "lists.h"

/**
 * get_nodeint_at_index - function name
 * @head: first node in the linked list
 * @index: index of the nth node
 * Returns nth node of a linked list
 * Return: pointer to the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
