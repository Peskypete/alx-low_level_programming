#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates strings into one
 *@s1: string one
 *@s2: string two
 *@n: the number of bytes in s2
 *Return: a pointer if successfull, NULL otherwise
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;

	if (s1 == NULL)
	{
	s1 = "";
	}
	if (s2 == NULL)
	{
	s2 = "";
	}
	s = (char *)malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));

	if (s == NULL)
	{
	return (NULL);
	}
	strcpy(s, s1);
	if (n >= strlen(s2))
	{
	strcat(s, s2);
	}
	else
	{
	strncat(s, s2, n);
	}
	return (s);
}
