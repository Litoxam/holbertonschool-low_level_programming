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

	dog_t *temp; /*pointeur temporaire*/
	char *new_name, *new_owner; /*copie de name et owner*/

	if (name == NULL || owner == NULL)
		return (NULL);

	temp = malloc(sizeof(dog_t));/*alloue la même taille que la struct dog*/
		if (temp == NULL)
			return (NULL);

	new_name = malloc(strlen(name) + 1);/*alloue la taile de string + \0*/

		if (new_name == NULL)
		{
			free(temp);
			return (NULL);
		}
	strcpy(new_name, name); /*on copie name dans new_name*/

	new_owner = malloc(strlen(owner) + 1);/*alloue la taile de string + \0*/

	if (new_owner == NULL)
	{
		free(new_name);
		free(temp);
		return (NULL);
	}
	strcpy(new_owner, owner); /*on copie owner dans new_owner*/

	temp->name = new_name;
	temp->age = age;
	temp->owner = new_owner;

	return (temp);
}



