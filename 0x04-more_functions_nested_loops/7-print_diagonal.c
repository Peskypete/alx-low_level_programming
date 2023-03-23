#include "main.h"

/**
 *print_line - prints line of length n
 *@n: The length of the line by multiplying _
 *Return: void... nothing
 */
void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
	_putchar('\n');
	return;
	}
	for (i = 0; i < n; i++)
	{
	int j;

	for (j = 0; j < i; j++)
	{
	_putchar(' ');
	}
	_putchar(92);
	_putchar('\n');
	}
}
