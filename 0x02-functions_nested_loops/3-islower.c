#include "main.h"
/**
 * _islower: checks for lower case characters
 * Return: Always 1 (Success)
 * otherwise returns 0 (Fail)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
