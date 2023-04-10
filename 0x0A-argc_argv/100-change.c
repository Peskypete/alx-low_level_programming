#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins to make change
 * @argc: the argument count
 * @argv: the name of the arguments
 * Return: 0 always success
 */
int main(int argc, char *argv[])
{
	int num;
	int i = 0;

	if (argc == 2)
	{
	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	while(num >= 25)
	{
		num = num - 25;
		i++;
	}
	while (num >= 10)
	{
		num = num - 10;
		i++;
	}
	while (num >= 5)
	{
		num = num - 5;
		i++;
	}
	while (num >= 2)
	{
		num = num - 2;
		i++;
	}
	while (num >= 1)
	{
		num = num - 1;
		i++;
	}
	}
	else
	{
	printf("Error\n");
	return (1);
	}
	printf("%d\n", i);
	return (0);
}
