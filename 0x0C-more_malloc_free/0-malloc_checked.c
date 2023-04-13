#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: size to allocate
 * Return: normal process termination with a status value of 98 or pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
	exit(98);
	}
	return (ptr);
}
