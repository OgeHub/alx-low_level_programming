#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - function name
 * @head: listint_t list to be freed
 * Free a linked list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
