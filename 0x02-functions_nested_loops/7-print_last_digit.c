#include "main.h"

/**
 *print_last_digit - reads the last digit of a number
 *@n: The number to be computed
 *Return: returns the last digit
 */
int print_last_digit(int n)
{
	int last_d;

	last_d = n % 10;
	return (last_d);
}
