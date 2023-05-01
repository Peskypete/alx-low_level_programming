#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * free_listint - freeing a linked list
 * @head: pointer to head
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *curr;
	listint_t *next;

	curr = head;
	while (curr != NULL)
	{
		next = curr->next;
		free(curr);
		curr = next;
	}
}
