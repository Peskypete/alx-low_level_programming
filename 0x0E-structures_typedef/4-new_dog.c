#include <stdlib.h>
#include "dog.h"
#include <string.h>
/**
 * new_dog - creates new dog
 * @name: name of new dog
 * @age: age of dog
 * @owner: owner of new dog
 * Return: NULL if fails 0 otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int len1 = strlen(name);
	int len2 = strlen(owner);
	dog_t *nw_dog;

	nw_dog = malloc(sizeof(dog_t));
	if (nw_dog == NULL)
	{
	return (NULL);
	}
	nw_dog->name = malloc(sizeof(char) * (len1 + 1));
	if (name == NULL)
	{
	
	}
	if (owner != NULL)
	{
	strcpy(nw_dog->owner, owner);
	}
	nw_dog->age = age;
	return (nw_dog);
}
