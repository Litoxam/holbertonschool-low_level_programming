#include "main.h"

/**
 * *_strpbrk - searches a string for any of a set of bytes.
 * @s: initial string
 * @accept: the set of bytes to look for
 *
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++) /* on parcourt la string*/
	{
		for (j = 0; accept[j] != '\0'; j++) /*on cherche un char de la liste*/
		{
			if (s[i] == accept[j])
			{
			    return (&s[i]); /*trouvé, on retourne l'adresse*/
			}
		}
	}


	return (0);
}
