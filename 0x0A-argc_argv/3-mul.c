#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiplies two numbers
 * @argc: argument count
 * @argv: argument names
 * Return: 0 always success
 */
int main(int argc, char *argv[])
{
	int a, b, mul;

	if (argc == 3)
	{
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	mul = a * b;
	printf("%d\n", mul);
	}
	else
	{
	printf("Error\n");
	return (1);
	}
	return (0);
}
