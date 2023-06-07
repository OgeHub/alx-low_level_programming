#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - fuction name
 * @head: pointer to the first element in the linked list
 * Deletes the head node
 * Return: integer
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
