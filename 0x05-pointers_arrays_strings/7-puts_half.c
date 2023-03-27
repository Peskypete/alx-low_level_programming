#include "main.h"
#include <string.h>
/**
 * puts_half - prints the second half
 * @*str: the string
 * Return: void
 */
void puts_half(char *str)
{
	int length = strlen(str);

	if (length % 2 == 0)
	{
	int c;
	for (c = length / 2; c <= length; c++)
	{
	_putchar(str[c]);
	}
	_putchar('\n');
	}
	else
	{
	int n;
	for (n = (length - 1) / 2; n <= length; n++)
	{
	_putchar(str[n]);
	}
	_putchar('\n');
	}
}
