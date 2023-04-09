#include <stdio.h>
/**
 * main - prints name of argv[0]
 * argc: the count of arguments passed
 * argv: the string argument names
 * Return: 0 always success
 */
int main(int argc, char* argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
