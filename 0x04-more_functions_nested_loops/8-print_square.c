#include "main.h"
/**
 *print_square - prints a square
 *@size: the size of the square
 *Return: no arguments
 */
void print_square(int size)
{
	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	int i;

	for (i = 0; i < size; i++)
	{
	int j;

	for (j = 0; j < size; j++)
	{
	_putchar(35);
	}
	_putchar('\n');
	}
	}
}
