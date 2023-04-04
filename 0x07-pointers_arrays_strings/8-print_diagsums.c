#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: the array
 * @size: size of the square matrix
 * Returns: void
 */
void print_diagsums(int *a, int size)
{
	int sumof1 = 0;
	int sumof2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
	sumof1 += *(a + i * size + i);
	sumof2 += *(a + i * size + size - i - 1);
	}
	printf("%d, ", sumof1);
	printf("%d\n", sumof2);
}
