#include "main.h"
#include <stdlib.h>
/**
 * _calloc -  allocates memory for an array
 * @nmemb: number of elements
 * @size: size of each element in bytes
 * Return: NULL if failure, pointer to allocated if successful
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *arr;

	if (nmemb == 0 || size == 0)
	{
	return (NULL);
	}
	arr = calloc(nmemb, size);

	if (arr == NULL)
	{
	return (NULL);
	}
	return (arr);
}
