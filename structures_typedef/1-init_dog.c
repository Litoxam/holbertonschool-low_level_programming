#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Pointer to the struct dog to initialize
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 * Return: no return
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/**
	 * accède à l'adresse stockée dans d, trouve la structure,
	 *
	 * et accède au champ name, age et owner.
	 */

	if (d != NULL) /*vérification si le pointeur n'est pas NULL*/
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
