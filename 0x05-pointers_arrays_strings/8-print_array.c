#include <stdio.h>
/**
 *print_array - prints array contents
 *@a: pointer 
 *n:number of variable values to be printed
 */
void print_array(int *a, int n)
{
	int c;
	if (n > 0)
	{
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
	else
	{
	for (; n <= 0; n++)
	{
	printf("%d", a[n]);
	}
	}
}
