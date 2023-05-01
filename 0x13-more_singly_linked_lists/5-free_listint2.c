#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * free_listint2 - frees a list
 * @head: a pointer to a pointer to head
 * Return: nothing (void)
 */
void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		next = *head->next;
		free(*head);
		*head = next;
	}
	*head = NULL;
}
