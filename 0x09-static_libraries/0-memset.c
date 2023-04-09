#include "main.h"
#include <string.h>
/**
 * _memset - fills the first n bytes of string s with char b
 * @s: string to be updated
 * @n: the number of bytes to change in s
 * @b: the character to use in updating
 *Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int j = n;
	int i;

	for (i = 0; i < j; i++)
	s[i] = b;

	return (s);
}
