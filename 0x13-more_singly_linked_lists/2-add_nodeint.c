#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - adds node at the beginning of the list
 * @n: the data to input
 * @head: a pointer to a pointer to head
 * Return: a pointer to new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;
	int i = n;

	if (head == NULL)
	{
		return (NULL);
	}
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->next = *head;
	temp->n = i;
	*head = temp;

	return (temp);

}
