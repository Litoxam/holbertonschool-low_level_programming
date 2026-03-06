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
	int i = 0;
	int count = 0;

	while (s[i] != '\0')
	{
		if (s[i] == *accept)
		{
		count += 1;
		}
		i++;
	}


	return (count);
}
