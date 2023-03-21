#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet ten times
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int j;

	for (j = 1; j <= 10; j++)
	{
	char c;

	for (c = 'a'; c <= 'z' ; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
	}
}
