#include <stdio.h>
/**
 * main - prints the number of arguments passed into it
 * @argc: the count of arguments
 * @argv: the argument string names
 * Return: 0 always success
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
