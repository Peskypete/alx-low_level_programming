#include "main.h"

/**
 *swap_int
 *@*a: the first to be dereferenced
 *@*b: the second to be dereferenced
 *void: returns nothing
 */
void swap_int(int *a, int *b)
{
	int j = *a;

	*a = *b;
	*b = j;
}
