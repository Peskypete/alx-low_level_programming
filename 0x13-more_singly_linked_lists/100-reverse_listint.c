#include "lists.h"
#include <stdlib.h>
/**
 * reverse_listint - Reverses a listint_t linked list
 * @head: A pointer to the pointer of the first node of the list
 *
 * Return: A pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *first, *rest, *reversed_list;

	if (*head == NULL || (*head)->next == NULL)
		return (*head);

	first = *head;
	rest = (*head)->next;

	reversed_list = reverse_listint(&rest);

	first->next->next = first;
	first->next = NULL;

	*head = reversed_list;
	return (reversed_list);
}
