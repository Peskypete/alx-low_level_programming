#include "main.h"
#include <string.h>

/**
 * _strcat - appends content of string 2 to 1
 * @dest: the destination 
 * @src: the string to be copied
 * Return: a pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = strlen(dest);
	int src_len = strlen(src);
	int z;

	for (z = 0; z < src_len; z++)
	dest[dest_len + z] = src[z];

	z++;
	dest[dest_len + z] = src[z];
	return dest;
}
