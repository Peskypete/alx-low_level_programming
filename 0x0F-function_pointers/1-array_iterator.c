#include "function_pointers.h"
/**
 * array_iterator - iterate over an array
 * @array: the array
 * @size: the size of the array to be printed
 * @action: the pointer to the function
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || action == NULL|| size == 0)
		return;

	for (; i < size; i++)
		action(array[i]);
}
