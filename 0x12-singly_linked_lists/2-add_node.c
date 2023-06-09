#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node -  adds a new node at the beginning
 * @head: a pointer to a pointer to head node
 * @str: the string to copy
 * Return: a pointer to the node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

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
	new_node->len = strlen(str);
	if (str == NULL)
	{
		return (NULL);
	}
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
