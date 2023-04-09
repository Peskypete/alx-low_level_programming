#include <stdio.h>
/**
 * main - prints all arguments it receives
 * @argc: the argument count
 * @argv: the argument strings
 * Return: 0 always success
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
