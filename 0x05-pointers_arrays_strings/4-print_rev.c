#include "main.h"
#include <string.h>
/**
 * print_rev - prints a string in reverse
 * @s: The string to be reversed
 * Return: void
 */
void print_rev(char *s)
{
	int c = strlen(s);

	for (c -= 1; c >= 0; c--)
	{
	_putchar(s[c]);
	}
	_putchar('\n');
}
