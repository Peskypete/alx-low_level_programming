#include "main.h"
int pow2(int num1 , int exp)
{
	int num2 = 0;
	int mara = 0;

	for (; mara <= exp; mara ++)
		num2 += num1;

	return (num2);
}
