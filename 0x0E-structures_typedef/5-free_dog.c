#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees memory allocated to structs
 * @d: struct to be freed
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
	free(d->name);
	free(d->owner);
	free(d);
	}
}
