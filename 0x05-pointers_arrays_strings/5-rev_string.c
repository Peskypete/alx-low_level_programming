#include "main.h"
#include <string.h>

/**
 * rev_string - prints a string in reverse
 * @s: The string to be reversed
 * Return: void
 */
void rev_string(char *s)
{
	int len = 0;
	int index = 0;
	char tmp;

	len = strlen(s);
	index = len - 1;

	for (; index >= len / 2; index--)
	{
	tmp = s[index];
	s[index] = s[len - index - 1];
	s[len - index - 1] = tmp;
	}
}
