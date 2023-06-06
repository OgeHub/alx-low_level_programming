#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the listint_t list to be freed
 * Free a linked list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
