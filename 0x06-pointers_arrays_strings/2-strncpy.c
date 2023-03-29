#include "main.h"

/**
 * _strncpy - copies the number of bytes from src to dest
 * @dest: the destination
 * @src: the source
 * @n: the number of bytes passed
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int z;

	for (z = 0; z < n; z++)
	dest[z] = src[z];

	z++;
	dest[z] = '\0';
	return (dest);
}
