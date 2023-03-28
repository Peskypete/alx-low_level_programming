#include "main.h"
/**
 * _atoi: converts numbers in a string into integers of the same value
 * @s: pointer to the string
 * Return: the value as an int , esle returns 0
 */
int _atoi(char *s)
{
	double res = 0;
	int i;

	for (i = 0; s[i] != '\0'; ++i)
        res = res * 10 + s[i] - '0';

	return res;
}
