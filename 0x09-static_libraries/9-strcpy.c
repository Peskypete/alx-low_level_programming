#include "main.h"
#include <string.h>
/**
 * _strcpy - copy a string
 * @dest: destination value
 * @src: source value
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int len = strlen(src);

	for (i = 0; i < len; i++)
	dest[i] = src[i];

	dest[i++] = '\0';
	return (dest);
}
