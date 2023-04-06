#include "main.h"
#include <math.h>
/**
 * _sqrt_recursion - returns the natural squareroot
 * @n: The number to be manipulated
 * Return: natural squareroot of a number n,else -1
 */
int sumdigits(int a);
int _sqrt_recursion(int n)
{
	int sum = sumdigits(n);

	if (sum == 1 || sum == 4 || sum == 7 || sum == 9)
	{
		return (sqrt(n));
	}
	else
	{
		return (-1);
	}
}
int sumdigits(int a)
{
	int sum;

	if (a == 0)
	{
	return (0);
	}
	else
	{
	int lastdigit = a % 10;
	int remainingdigits = a / 10;
	sum = lastdigit + sumdigits(remainingdigits);
	}
	return (sum);
}
