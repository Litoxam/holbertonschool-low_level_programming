#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"

/*we can not use strlen and strcopy, so we create ours*/

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
	dog_t *temp;

	if (name == NULL || owner == NULL)
		return (NULL);

	/* 1. Allouer la structure */
	temp = malloc(sizeof(dog_t));
	if (temp == NULL)
		return (NULL);

	/* 2. Allouer et copier le nom */
	temp->name = malloc(_strlen(name) + 1);
	if (temp->name == NULL)
	{
		free(temp);
		return (NULL);
	}
	_strcpy(temp->name, name);

	/* 3. Allouer et copier le owner */
	temp->owner = malloc(_strlen(owner) + 1);
	if (temp->owner == NULL)
	{
		free(temp->name); /* On libère ce qu'on a alloué si fail */
		free(temp);
		return (NULL);
	}
	_strcpy(temp->owner, owner);

	/* 4. Assigner l'âge */
	temp->age = age;

	return (temp);
}
