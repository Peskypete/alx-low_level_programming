#include "main.h"
#include <string.h>

/**
 * _strncpy - copies the number of bytes from src to dest
 * @dest: the destination
 * @src: the source
 * @n: the number of bytes passed
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
	dest[j] = src[j];

	while (j < n)
	{
	dest[j] = '\0';
	j++;
	}

	return (dest);
}
