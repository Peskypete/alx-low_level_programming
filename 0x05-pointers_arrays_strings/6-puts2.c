#include "main.h"
#include <string.h>
/**
 * puts2 - prints half the string
 * @str: the string
 * Return: 0 always success
 */
void puts2(char *str)
{
	int j;
	int i = strlen(str);

	for (j = 0; j < i; j += 2)
	{
	_putchar(str[j]);
	}
	_putchar('\n');
}
