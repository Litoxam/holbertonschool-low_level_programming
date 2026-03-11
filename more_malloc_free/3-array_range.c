#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * array_range - creates an array of integers
 * @min: the minimum value (included)
 * @max: the maximum value (included)
 *
 * Return: pointer to the newly created array
 */


int *array_range(int min, int max)
{
	int *array;
	int i;
	int size = (max - min) + 1;

	if (min > max)
		return (NULL);


	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		{
		array[i] = min;
		min++;
		}

return (array);
}
