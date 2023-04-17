#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializes dog
 * @d: pointer to my_dog
 * @name: name of dog
 * @age: age of dog
 * @owner: dog friend
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
