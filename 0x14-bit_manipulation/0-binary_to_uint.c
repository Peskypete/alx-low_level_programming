#include <string.h>
#include "main.h"
#include <stdlib.h>
/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 *
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: The converted number, or 0 if there is one or more chars
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int bit;

	if (b == NULL)
	return (0);

	while (*b)
	{
	bit = *b - '0';

	if (bit != 0 && bit != 1)
		return (0);

	result = (result << 1) | bit;

	++b;
	}

	return (result);
}
