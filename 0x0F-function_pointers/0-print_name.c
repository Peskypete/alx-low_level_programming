#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - print name
 * @name: the name to be printed
 * @f: pointer to a function to print
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	f(name);
}
