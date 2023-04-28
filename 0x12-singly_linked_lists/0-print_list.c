#include <stddef.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>
/**
 * print_list - prints data contained
 * @h: pointer to first node
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int i = 0;
	const list_t *temp;

	if (h != NULL)
	{
	temp = h;
	while (temp != NULL)
	{
		i++;
		if (temp->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", temp->len, temp->str);
		}
		temp = temp->next;
	}
	return (i);
	else
	{
		printf("%u", i);
		return (i)
	}
}
