#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
/**
 *
 */
size_t listint_len(const listint_t *h)
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
		temp = temp->next;
	}
	return (i);
}
