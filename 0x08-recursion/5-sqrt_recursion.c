#include "main.h"
/**
 * square_root - calculates squareroot
 * @n: integer passed from main file
 * @start: The start of the number
 * @end: The end of the number
 * Return: squareroot of number passed
 */
int square_root(int n, int start, int end)
{
	int mid = (start + end) / 2;
	int square = mid * mid;

	if (start > end)
	{
	return (-1);
	}
	if (square == n)
	{
	return (mid);
	}
	else if (square < n)
	{
	return (square_root(n, mid + 1, end));
	}
	else
	{
	return (square_root(n, start, mid - 1));
	}
}
/**
 * _sqrt_recursion - uses recursion to call the squareroot function
 * @n: number passed to be manipulated
 * Return: natural squareroot, -1 if base is less than
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	else if (n == 0 || n == 1)
	{
	return (n);
	}
	else
	{
	return (square_root(n, 1, n / 2));
	}
}
