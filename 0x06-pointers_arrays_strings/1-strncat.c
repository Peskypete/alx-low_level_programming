#include <string.h>

/**
 * _strncat - appends content of string 2 to 1
 * @dest: the destination
 * @src: the string to be copied
 * @n: number of char or bytes to be copied from src
 * Return: a pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
        int dest_len = strlen(dest);
        int z;

        for (z = 0; z < n; z++)
        dest[dest_len + z] = src[z];

        dest[dest_len + z] = '\0';
        return (dest);
}
