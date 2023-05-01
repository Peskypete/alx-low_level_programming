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
	listint_t *curr = *head;
	listint_t *next;

	while (curr != NULL)
	{
		next = curr->next;
		free(curr);
		curr = next;
	}
	head = NULL;
}
