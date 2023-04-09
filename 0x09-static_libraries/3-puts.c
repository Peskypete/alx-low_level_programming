#include "main.h"

/**
 *_puts - prints a string,followed by a newline to stdout
 *@str: points to the string
 *Returns: nothing
 */
void _puts(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
	_putchar(str[i]);
	}
	_putchar('\n');
}
