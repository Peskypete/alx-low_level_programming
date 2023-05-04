#include "main.h"
#include <stdlib.h>
/**
 * set_bit - sets bit at indicated position to 1
 * @n: address to n
 * @index: the positio
 * Return: the number modified or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1 << index;
	*n = (*n | mask);
	return (*n);
}
