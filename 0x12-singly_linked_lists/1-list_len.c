#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * list_len - function that returns the number of elements
 * @h: the head pointer
 * Return: numnber of elements
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;
	const list_t *temp = h;

	while (temp != NULL)
	{
	i++;
	temp = temp->next;
	}
	return (i);
}
