#include "main.h"
#include <string.h>
/**
 * _strlen_recursion - return string length
 * @s: The string
 * Return: void
 */
int _strlen_recursion(char *s)
{
	int len;

	if (*s == '\0')
	{
		return (len = 0);
	}
	len = 1 + _strlen_recursion(s + 1);
	return (len);
}
