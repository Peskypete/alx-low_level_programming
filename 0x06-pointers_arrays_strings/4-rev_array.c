#include "main.h"

/**
 * reverse_array - reverses array of type int
 * @a: the array
 * @n: number of elements in array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int z;
	int index = n - 1;
	int half = n / 2;

	for (z = 0; z <= half; z++)
	{
	int j = a[z];

	a[z] = a[index - z];
	a[index - z] = j;
	}
}
