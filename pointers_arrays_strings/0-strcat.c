#include "main.h"

/**
 * *_strcat - copying a string after another
 * @dest: first string
 * @src: second string we need to add to the first one
 *
 * Return:  dest string
 */

char *_strcat(char *dest, char *src)
{
	int here = 0; /* where i am in the string*/
	int second = 0; /* copying the second string*/

	while (dest[here] != '\0')
	{
		here++;
	}

	while (src[second] != '\0')
	{
		dest[here] = src[here];
		here++;
		second++;
	}


	dest[here] = '\0';

	return (dest);
}
