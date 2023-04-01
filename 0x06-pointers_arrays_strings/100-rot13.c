#include "main.h"

/**
 * rot13 - encodes letter into a letter 13 places into another letter
 * @str: the string
 * Return: an adress to str
 */
char *rot13(char *str)
{
	int i, j;
	char s1[] = "aABbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	char s2[] = "nNOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";

	for (i = 0; str[i] != '\0'; i++)
	{
	j = 0;

	for (j = 0; s1[j] != '\0'; j++)
	{
		if (str[i] == s1[j])
		{
			str[i] = s2[j];
		}
	}
	}
	return (str);
}
