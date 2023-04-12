#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * _strdup - create and replicate passed string
 * @str: the string to be replicated
 * Return:  function returns a pointer to the duplicated string
 */
char *_strdup(char *str)
{
	int len = strlen(str);
	char *st = (char *)malloc((len + 1) * sizeof(char));

	if (str == NULL)
	{
	return (NULL);
	}
	if (st == NULL)
	{
	return (NULL);
	}
	strcpy(st, str);
	return (st);
}
