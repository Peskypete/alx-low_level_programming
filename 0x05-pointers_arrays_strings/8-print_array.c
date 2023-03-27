#include <stdio.h>
/**
 *
 */
void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
	if (c == n - 1)
	{
	printf("%d\n", a[c]);
	}
	else
	{
	printf("%d, ", a[c]);
	}
	}
}
