#include "function_pointers.h"
/**
 * int_index - searches for an integer.
 * @array: the array to search from
 * @size: of the array
 * @cmp: the pointer to the functions that compare
 * Return:  returns the index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL)
	{
	return (-1);
	}
	if (size <= 0)
	{
	return (-1);
	}
	for (; i < size; i++)
	{
	if (cmp(array[i]) != 0 )
	{
	return (i);
	}
	}
	return (-1);
}
