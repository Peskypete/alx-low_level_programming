#include "main.h"
#include <string.h>
/**
 * _print_rev_recursion - prints string using recursion in reverse
 * @s: The string
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	int i = strlen(s);

	_putchar(s[i]);
	if (i >= 0)
	_print_rev_recursion(s[i--]);
}
