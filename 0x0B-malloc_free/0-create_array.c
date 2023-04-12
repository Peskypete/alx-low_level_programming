#include <stdlib.h>
#include "main.h"
/**
 * create_array -  creates an array of chars
 * @size: size of array
 * @c: the character to fill the array
 * Return: pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *s = (char *)malloc(size * sizeof(char));
	unsigned int i = 0;

	if (s == NULL)
	{
	return (NULL);
	}
	for (; i < size; i++)
	{
	s[i] = c;
	}
	return (s);
}
