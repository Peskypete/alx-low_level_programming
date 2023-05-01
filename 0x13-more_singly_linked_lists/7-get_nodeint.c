#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - function that returns the nth node of a listint_t
 * @head: a pointer to head
 * @index: the index of the node
 * Return: a pointer if node exists, NULL otherwise
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *curr = head;
	unsigned int index_1 = 0;

	while (curr != NULL)
	{
		if (index == index_1)
		{
			return (curr);
		}
		index_1++;
		curr = curr->next;
	}
	return (NULL);
}
