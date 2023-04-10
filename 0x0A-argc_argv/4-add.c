#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argc: The argument count
 * @argv: argument names
 * Return: 0 always succes
 */
int main(int argc, char *argv[])
{
	int total = 0;
	int num;
	int j;
	int i;

	if (argc == 1)
	{
	printf("0\n");
	return (0);
	}
	for (i = 1; i < argc; i++)
	{
	char *arg = argv[i];

	for (j = 0; arg[j] != '\0'; j++)
	{
	if (!isdigit(arg[j]))
	{
	printf("Error\n");
	return (1);
	}
	}
	num = atoi(arg);
	if (num > 0)
	{
	total += num;
	}
	}
	printf("%d\n", total);
	return (0);
}
