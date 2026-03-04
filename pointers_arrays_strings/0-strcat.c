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

	while (dest[here] != '\0') /*we move at the end of first string*/
	{
		here++;
	}

	while (src[second] != '\0') /*we add 2d string after 1st*/
	{
		dest[here] = src[second];
		here++;
		second++;
	}


	dest[here] = '\0'; /* we add a \0 at the end*/

	return (dest); /* returning first + second string*/
}
