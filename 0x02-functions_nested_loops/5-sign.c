#include "main.h"
/**
 *print_sign:prnts sign of number
 *returns 1 if greater than zero
 *returns 0 if zero
 *returns -1 if less than zero
 */
int print_sign(int n)
{
	if (n < 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n == 0)
	{
	_putchar('0');
	return (0);
	}
	else{
	_putchar('-');
	return (-1);
	}
}
