#include "main.h"
#include <stdio.h>

/**
 * print_number - prints an integer
 * @n: The number to be printed
 * Return: void
 */
void print_number(int n)
{
	char str[11];
	int i;

	snprintf(str, sizeof(str), "%d", n);
	for (i = 0; str[i] != '\0'; i++)
	_putchar(str[i]);
}
