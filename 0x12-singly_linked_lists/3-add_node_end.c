#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *curr_node;

	if (head == NULL || str == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	if (str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = NULL;
	new_node->len = strlen(str);
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
	curr_node = *head;
	if (curr_node == NULL)
	{
		return (NULL);
	}
	while (curr_node->next != NULL)
	{
		curr_node = curr_node->next;
	}
	curr_node->next = new_node;
	}
	return (new_node);
}
