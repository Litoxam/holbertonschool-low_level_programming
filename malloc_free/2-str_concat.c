#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>


/**
 * *str_concat - concatenate 2 strings into allocated space
 * @s1: string 1
 * @s2: string 2
 * Return: NULL if s1 or s2 == 0 or if malloc fails
 *			return copy
 */


char *str_concat(char *s1, char *s2)

{
	int length1 = 0;
	int length2 = 0;
	int i, j;
	char *copy;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[length1] != '\0')
		length1++;

	while (s2[length2] != '\0')
		length2++;

copy = malloc(sizeof(char) * (length1 + length2 + 1));

	if (copy == NULL)
	return (NULL);

	for (i = 0; i < length1; i++)
		copy[i] = s1[i];

	for (j = 0; j < length2; j++)
		copy[length1 + j] = s2[j];

copy[length1 + length2] = '\0';

return (copy);/* on retourne copy */

}
