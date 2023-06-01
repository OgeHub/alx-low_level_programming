#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - function name
 * @head: double pointer
 * @str: string
 * Adds node at the beginning
 * Return: added node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *duplicate;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	duplicate = strdup(str);
	if (duplicate == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = duplicate;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
