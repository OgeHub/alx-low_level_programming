#include "lists.h"

/**
 * sum_listint - function name
 * @head: first node in the linked list
 * Sums all the data in a linked tree
 * Return: integer (sum)
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
