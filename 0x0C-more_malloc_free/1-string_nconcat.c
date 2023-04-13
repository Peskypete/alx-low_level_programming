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
	size_t s1_len, s2_len;
	char *result;

	if (s1 == NULL)
	{
	s1 = "";
	}
	if (s2 == NULL)
	{
	s2 = "";
	}
	s1_len = strlen(s1);
	s2_len = strlen(s2);

	if (n >= s2_len)
	{
	n = s2_len;
	}
	result = (char *)malloc(sizeof(char) * (s1_len + n + 1));

	if (result == NULL)
	{
	return (NULL);
	}
	memcpy(result, s1, s1_len);
	memcpy(result + s1_len, s2, n);
	result[s1_len + n] = '\0';
	return (result);
}
