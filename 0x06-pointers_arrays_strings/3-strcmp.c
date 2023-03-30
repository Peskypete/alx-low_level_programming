#include "main.h"
#include <string.h>

/**
 *_strcmp - comparison of strings
 * @s1: first string
 * @s2: second string
 * Return: 0 if equal , else if 1 if s1 > s2, else -1
 */
int _strcmp(char *s1, char *s2)
{
	int z = 0;
	int len = strlen(s1);
	int diff = s1[z] - s2[z];

	while (z < len && diff == 0)
	z++;

	if (diff != 0)
	return (diff);

	return (diff);
}
