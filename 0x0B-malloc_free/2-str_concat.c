#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * str_concat - concatenates two strings
 * @s1: The first string
 * @s2: The seconde string
 * Return: NULL on failure, pointer on success
 */
char *str_concat(char *s1, char *s2)
{

	int len1, len2;
	char *s;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);
	s = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	if (s == NULL)
	{
	return (NULL);
	}
	strcpy(s, s1);
	strcat(s, s2);
	return (s);
}
