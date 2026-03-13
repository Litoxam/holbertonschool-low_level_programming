#include <stdio.h>
#include <string.h>
#include "dog.h"

/**
 * dog_t *new_dog -  a function that creates a new dog.
 * @name: name of the new dog
 * @age:age of the new dog
 * @owner: owner of new dog
 * Return: temp
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (name == NULL || owner == NULL)
		return (NULL);

	/* 1. Allouer la structure */
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	/* 2. Allouer et copier le nom */
	d->name = malloc(strlen(name) + 1);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	strcpy(d->name, name);

	/* 3. Allouer et copier le owner */
	d->owner = malloc(strlen(owner) + 1);
	if (d->owner == NULL)
	{
		free(d->name); /* On libère ce qu'on a alloué si fail */
		free(d);
		return (NULL);
	}
	strcpy(d->owner, owner);

	/* 4. Assigner l'âge */
	d->age = age;

	return (d);
}