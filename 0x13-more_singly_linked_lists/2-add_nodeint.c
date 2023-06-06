#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_nodeint - function name
 * @head: pointer to first node
 * @n: data of the new node
 * Adds node at the beginning
 * Return: added node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
