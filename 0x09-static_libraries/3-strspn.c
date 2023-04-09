#include "main.h"
#include <string.h>
/**
 * _strspn - checks for characters present in accept at string s
 * @accept: The string to use to compare
 * @s: the string to check
 * Return: number of bytes in s that match the bytes in s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = strlen(s);
	unsigned int c = strlen(accept);
	unsigned int x;
	unsigned int j;

	for (j = 0; j < i; j++)
	{
	for (x = 0; x < c; x++)
	{
		if (s[j] == accept[x])
		{
			break;
		}
	}
	if (accept[x] == '\0')
	return (j);

	}
	return (j);
}
