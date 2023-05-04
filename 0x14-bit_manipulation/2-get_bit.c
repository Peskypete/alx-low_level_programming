#include <string.h>
#include "main.h"
#include <stdlib.h>
/**
 * get_bit -  returns the value of a bit at a given index
 * @n: the number in decimal
 * @index: the position to check
 * Return: the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit, mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1 << index;
	bit = (mask & n) >> index;

	return (bit);
}
