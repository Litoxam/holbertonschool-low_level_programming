#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of elements.
 * @size: size of each element.
 *
 * Return: pointer to allocated memory.
 */


void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;
	unsigned int i, total;

	if (size == 0 || nmemb == 0)
		return (NULL);

total = nmemb * size;

	str = malloc(total);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < total; i++)
		str[i] = 0;

return (str);
}
