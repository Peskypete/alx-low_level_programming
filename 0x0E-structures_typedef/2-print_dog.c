#include "dog.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_dog - prints the contents of struct
 * @d: pointer to struct
 * Return: void
 */
void print_dog(struct dog *d)
{	if (d != NULL)
	{
	printf("Name: %s\n",d->name);
	printf("Age: %f\n",d->age);
	printf("Owner: %s\n",d->owner);
	}
}
