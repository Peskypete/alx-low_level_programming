#include "main.h"
/**
 *_abs: computes the absolute value of numbers
 *@n: the number to be computed
 *Return: The absolute value of a number
 */
int _abs(int n)
{
	if (n < 0)
	{
	return (n *= -1);
	}
	else
	{
	return (n);
	}
}
