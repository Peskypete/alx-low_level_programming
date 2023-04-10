#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argc: The argument count
 * @argv: argument names
 * Return: 0 always success
 */
int main(int argc, char *argv[])
{
	int i, z, sum;

	z = 0;
	if (argc == 1)
	{
	printf("%d\n", z);;
	}
	for (i = 1; i < argc; i++)
	{
		if (!isdigit(argv[i]))
		{
		printf("Error");
		return (0);
		}
		else
		{
		sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
