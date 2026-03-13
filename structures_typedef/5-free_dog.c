#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"


/**
 * free_dog - free space of a struct and info of a dog
 * @d: dog we want to free
 * Return: no return
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->age);
	free(d->owner);
	free(d);

}
