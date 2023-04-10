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
	int i;
	int coins[] = {25, 10, 5, 2, 1};
	int num_coins = sizeof(coins) / sizeof(coins[0]);
	int count = 0;

	if (argc == 2)
	{
	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < num_coins; i++)
	{
	while (num >= coins[i])
	{
	num -= coins[i];
	count++;
	}
	}
	}
	else
	{
	printf("Error\n");
	return (1);
	}
	printf("%d\n", count);
	return (0);
}
