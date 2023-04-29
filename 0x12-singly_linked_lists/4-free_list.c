#include "lists.h"
#include <stdlib.h>
/**
 * free_list - unction that frees a list_t list
 * @head: pointer to head
 * Return: nothing at all
 */
void free_list(list_t *head)
{
	list_t *curr_node = head;
	list_t *next_node;

	if (head == NULL)
	{
		return;
	}
	while (curr_node != NULL)
	{
		next_node = curr_node->next;
		free(curr_node->str);
		free(curr_node);
		curr_node = next_node;
	}
}
