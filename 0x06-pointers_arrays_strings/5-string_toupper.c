#include <string.h>
#include "main.h"

/**
 * string_toupper - changes lowercase to uppercase
 * @s: the string
 * Return: void
 */
char *string_toupper(char *s)
{
	int len = strlen(s);
	int l;

	for (l = 0; l < len; l++)
	{
	if (s[l] >= 97 && s[l] <= 122)
	{
	s[l] = s[l] - 32;
	}
	}
	return (s);
}
