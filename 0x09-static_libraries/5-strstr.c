#include "main.h"
#include <string.h>
/**
 * _strstr - searches for a string
 * @haystack: the string to be searched
 * @needle: the string to search for
 * Return: NULL if not found,where first letter was found
 */
char *_strstr(char *haystack, char *needle)
{
	int i = strlen(haystack);
	int j = strlen(needle);
	int x, z;

	for (x = 0; x < i; x++)
	{
	for (z = 0; z < j; z++)
	{
	if (haystack[x + z] != needle[z])
	{
	break;
	}
	}
	if (z == j)
	return (haystack + x);
	}
	return (NULL);
}
