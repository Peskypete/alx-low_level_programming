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
	int i = 0;

	while (str[i] != '\0')
	{
	i++;
	}

	for (j = 0; j <= i; j += 2)
	{
	_putchar(str[j]);
	}
	_putchar('\n');
}
