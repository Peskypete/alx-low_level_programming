#include "main.h"
#include <string.h>
/**
 * _memcpy - copies n bytes from string src to char
 * @n: the number of bytes to be copied
 * @src: the string to be copied
 * @dest: where the string src should be copied
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = n;
	int i;

	for (i = 0; i < j; i++)
		dest[i] = src[i];

	return (dest);
}
