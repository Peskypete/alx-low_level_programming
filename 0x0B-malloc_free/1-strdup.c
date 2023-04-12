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
	char *s = (char *)malloc((len + 1) * sizeof(char));

	if (s == NULL)
	{
	return (NULL);
	}
	strcpy(s, str);
	return (s);
}
