#include "lists.h"
#include <stdlib.h>

/**
 * free_list - function name
 * @head: pointer to head
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
