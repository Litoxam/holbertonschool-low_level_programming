#include "main.h"

/**
 * *_strspn - gets the length of a prefix substring.
 * @s: initial string
 * @accept: char we are looking for
 *
 *
 * Return: the encoded string
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	unsigned int count = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				count += 1;
			}
		}

	}
	return (count);
}
