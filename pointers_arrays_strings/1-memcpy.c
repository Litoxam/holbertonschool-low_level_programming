#include "main.h"

/**
 * *_memcpy - change a string into 1337
 * @dest: initial string
 * @src: string we're going to add on dest
 * @n: number of bytes
 *
 * Return: the encoded string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
