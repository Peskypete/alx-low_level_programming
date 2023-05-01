#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes the node at a given position
 * @head: Pointer to the pointer to the first node of the list
 * @index: Index of the node to be deleted (starting at 0)
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
	return (-1);

	if (index == 0)
	{
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (1);
	}

	prev = *head;
	while (prev->next != NULL && i < index - 1)
	{
	prev = prev->next;
	i++;
	}

	if (prev->next == NULL || i != index - 1)
	return (-1);

	temp = prev->next;
	prev->next = temp->next;
	free(temp);

	return (1);
}
