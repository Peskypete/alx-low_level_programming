#include <stdio.h>

/**
 * main - runs and calls functions
 * addNumbers - adds two integers
 * @num1: number to be manipulated
 * @num2: also another number to be manipulated
 * Return: 0 always success
 */
int result;

int addNumbers(int num1, int num2)
{
	result = num1 + num2;
	return (result = num1 + num2);
}

int main(void)
{
	addNumbers(99, 34);
	printf("The result is : %d", result);
	return (0);
}
