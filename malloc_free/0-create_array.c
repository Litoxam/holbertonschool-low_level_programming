#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>


/**
 * *create_array - copy a string
 * @size: size of the array
 * @c: char initialized
 *
 * Return: NULL if size == 0 or if malloc fails; return str.
 */


char *create_array(unsigned int size, char c)

{
	char *str;
	unsigned int i;

	if (size == 0)
		return (NULL);

	str = malloc(sizeof(char) * size);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;

return (str);

}
