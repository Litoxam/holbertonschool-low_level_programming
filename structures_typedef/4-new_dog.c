#include <stdio.h>
#include <string.h>
#include "dog.h"

/*we can not use strlen and strcopy, so we create ours*/

#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: points toward str in this exercice
 *
 * Return: length of the string.
 */


int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
	length++;
	s++;
	}
	return (length);

}


/**
 * _strcpy - copy a string
 * @dest: destination where the source is copied
 * @src: string source
 *
 * Return: value of dest .
 */
char *_strcpy(char *dest, char *src)

{
	int i;

	for (i = 0 ; src[i] != '\0' ; i++)
		dest[i] = src[i];

	dest[i] = '\0';
	return (dest);
}


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
	d->name = malloc(_strlen(name) + 1);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	_strcpy(d->name, name);

	/* 3. Allouer et copier le owner */
	d->owner = malloc(_strlen(owner) + 1);
	if (d->owner == NULL)
	{
		free(d->name); /* On libère ce qu'on a alloué si fail */
		free(d);
		return (NULL);
	}
	_strcpy(d->owner, owner);

	/* 4. Assigner l'âge */
	d->age = age;

	return (d);
}
