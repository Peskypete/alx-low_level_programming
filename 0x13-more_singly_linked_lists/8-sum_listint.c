#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - sums data in nodes
 * @head: address of first node
 * Return: all or nothing
 */
int sum_listint(listint_t *head)
{
	listint_t *curr = head;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (curr != NULL)
	{
		sum = sum + (curr->n);
		curr = curr->next;
	}
	return (sum);
}
