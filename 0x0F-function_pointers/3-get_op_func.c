#include "function_pointers.h"
#include <stdlib.h>
#include "3-calc.h"
/**
 * get_op_func - gets the operator and numbers and points to function
 * @s: the operator
 * Return: pointer to function or NULL
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;

	return (ops[i].f);
}
