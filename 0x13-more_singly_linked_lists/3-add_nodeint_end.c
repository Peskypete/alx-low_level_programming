#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * add_nodeint_end - adds node at the end
 * @head: the pointer to a pointer to head
 * @n: the integer to pass
 * Return: the pointer to new_node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *curr_node;

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
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	curr_node = *head;
	while (curr_node->next != NULL)
	{
		curr_node = curr_node->next;
	}
	curr_node->next = new_node;
	return (new_node);
}
