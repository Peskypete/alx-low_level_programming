#include "main.h"
/**
 *print_line - prints line of length n
 *@n: The length of the line by multiplying _
 *Return: void... nothing
 */
void print_line(int n)
{
	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	while (n > 0)
	{
	_putchar(95);
	n--;
	}
	_putchar('\n');
	}
}
