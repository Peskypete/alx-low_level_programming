#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates new dog
 * @name: name of new dog
 * @age: age of dog
 * @owner: owner of new dog
 * Return: NULL if fails 0 otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nw_dog;
	nw_dog = malloc(sizeof(struct dog));
	if (nw_dog == NULL)
	{
	return (NULL);
	}
	nw_dog->name = name;
	nw_dog->age = age;
	nw_dog->owner = owner;
	return (nw_dog);
}
