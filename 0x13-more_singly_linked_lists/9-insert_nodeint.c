#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts node at index
 * @head: pointer to pointer to head
 * @idx: the index
 * @n: data to pass as n
 * Return: pointer to new_node, else NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *prev_node;
	listint_t *trav_node;
	unsigned int count = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	trav_node = *head;
	if (*head == NULL)
	{
		new_node->next = NULL;
		*head = new_node;
		return (new_node);
	}
	prev_node = NULL;
	while (trav_node != NULL)
	{
		if (count == idx)
		{
			new_node->next = trav_node;
			prev_node->next = new_node;
			return (new_node);
		}
		count++;
		prev_node = trav_node;
		trav_node = trav_node->next;
	}
	if (count == idx)
	{
		prev_node->next = new_node;
		return (new_node);
	}
	free(new_node);
	return (NULL);
}
