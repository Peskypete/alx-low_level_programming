#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array of integers.
 * @min: probable min value
 * @max: probable max value
 * Return: pointer or NULL
 */
int *array_range(int min, int max)
{
	int *arr, diff, i;

	if (min > max)
	{
	return (NULL);
	}
	diff = max - min + 1;
	arr = (int *)malloc(diff * sizeof(int));

	if (arr == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < diff; i++)
	{
	arr[i] = min;
	min++;
	}
	return (arr);
}
