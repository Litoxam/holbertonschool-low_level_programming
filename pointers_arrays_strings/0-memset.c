#include "main.h"

/**
 * *_memset - change a string into 1337
 * @s: initial string
 * @b: character we're going to add
 * @n: number of bytes
 *
 * Return: the encoded string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
