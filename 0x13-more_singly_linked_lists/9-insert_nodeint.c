#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: Pointer to the pointer to the first node of the list
 * @idx: Indx of the position where the new node should be added(starting at 0)
 * @n: Integer value to be stored in the new node
 * Return: Address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp;
	unsigned int i = 0;

	if (head == NULL)
	return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	if (idx == 0)
	{
	new_node->next = *head;
	*head = new_node;
	return (new_node);
	}
	temp = *head;
	while (temp != NULL && i < idx - 1)
	{
	temp = temp->next;
	i++;
	}
	if (temp == NULL || i != idx - 1)
	{
	free(new_node);
	return (NULL);
	}
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
