#include "main.h"
#include <string.h>
/**
 * _strpbrk - searches for the firsletter in string s that is in accept 
 * @accept: the string with letters to check
 * @s: the string to check
 * Return: a pointer to s
 */
char *_strpbrk(char *s, char *accept)
{
	int i = strlen(s);
	int j = strlen(accept);
	int z, x;

	for (z = 0; z < i; z++)
	{
		for (x = 0; x < j; x++)
		{
			if (s[z] == accept[x])
			return (s + z);
		}
	}
	return (NULL);
}

