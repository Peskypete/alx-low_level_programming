#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - calls functions by their pointers
 * @argc: the argument count
 * @argv: the argument names
 * Return: 0 always success
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	char *operator;

	if (argc != 4)
	{
	printf("Error\n");
	exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];
	if (*operator != '+' ||
		*operator != '-' ||
		*operator != '%' ||
		*operator != '*' ||
		*operator != '/')
	{
		printf("Error\n");
		exit(99);
	}
	if (*operator == '/' && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	get_op_func(operator)(num1, num2);
	return (0);
}
