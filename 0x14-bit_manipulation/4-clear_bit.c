#include "main.h"
#include <stdlib.h>
/**
 *
 *
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int mask;

	if (n == NULL)
		return (-1);

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = ~(1UL << index);
	*n = (*n & mask);
	return (*n);
}
