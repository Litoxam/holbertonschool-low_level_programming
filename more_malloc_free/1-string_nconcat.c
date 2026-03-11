#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


/**
 * *string_nconcat - concatenate 2 strings into allocated space
 * s2 goes on until n bytes
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes of s2 we need to copy
 * Return: NULL if s1 or s2 == 0 or if malloc fails
 *			return copy
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int length1 = 0;
	int length2 = 0;
	int i, j;
	char *copy;

/* si les strings sont nulles, on les considère vides*/
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
/* on mesure la taille des strings avec des variables length*/
	while (s1[length1])
		length1++;

	while (s2[length2])
		length2++;
/*si n < length 2, on va jusqu'à n sur la string 2*/
	if (n < length2)
		length2 = n;
	
/* on réserve notre espace*/
copy = malloc(sizeof(char) * (length1 + length2 + 1));

	if (copy == NULL)
	return (NULL);
/*on copie les strings sur notre espace alloué */

	for (i = 0; i < length1; i++)
		copy[i] = s1[i];

	for (j = 0; j < length2; j++)
		copy[i + j] = s2[j];

/*on ajoute le \0 final*/

copy[i + j] = '\0';

return (copy);/* on retourne copy */

}
