#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h: a pointer to head
 * Return: the number of node
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	const listint_t *temp = h;

	if (h == NULL)
	{
		return (i);
	}
	while (temp != NULL)
	{
		i++;
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (i);

}
