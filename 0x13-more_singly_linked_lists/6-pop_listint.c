#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes and return the data
 * @head: pointer to pointer to head
 * Return: number indeleted node
 */
int pop_listint(listint_t **head)
{
	listint_t *curr;
	int i;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	curr = (*head)->next;
	i = (*head)->n;
	free(*head);
	*head = curr;
	return (i);
}
