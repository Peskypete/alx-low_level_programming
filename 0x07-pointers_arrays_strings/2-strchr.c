#include "main.h"
#include <string.h>
/**
 * _strchr - tries to search for a char in a string
 * @c: the char to be located
 * @s: the string to be checked
 * Return: a pointer to first occurrence of c , or NULL if not found
 */
char *_strchr(char *s, char c)
{
	int i = strlen(s);
	int j;

	for (j = 0; j < i; j++)
	{
		if (s[j] == c)
		return (s + j);
	}
	return (NULL);
}
