#include <stdio.h>

/**
 * main - Solve me
 *
 * Return: Always 0.
 */
int main(void)
{
	int a[5];
	int *p;
	int *p2;

	*a = 98;
	*(a + 1) = 198;
	*(a + 2) = 298;
	a[3] = 398;
	*(a + 4) = 498;
	printf("value of p:%d\n", *p);
	printf("value of p:%p\n", p);
	p = a + 1;
	printf("value of a:%p\n", a);
	*p = 98;
	printf("value of p:%d\n", *p);
	printf("value of p:%p\n", p);
	p2 = a + 3;
	*p2 = *p + 1337;
	return (0);
}
