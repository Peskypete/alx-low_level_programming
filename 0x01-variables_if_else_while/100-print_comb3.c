#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	int j = 1;
	int n = 9;

	while (i < 10)
	{

		while (j < 10)
		{
		putchar(i + '0');
		putchar(j + '0');
		if (n != 1)
		{
		putchar(',');
		putchar(' ');
		}
		j++;
		}
	n--;
	j = j - n;
	i++;
	}
	putchar('\n');
	return (0);
}
