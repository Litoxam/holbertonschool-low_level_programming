#include "main.h"

/**
 * *_strncat - add a string after another one but only n caracter
 * @dest: first string
 * @src: second string we need to add to the first one
 * @n: number of caracter to add
 *
 * Return:  dest string
 */

char *_strncat(char *dest, char *src, int n)
{
	int here = 0; /* where i am in the string*/
	int second = 0; /* copying the second string*/

	while (dest[here] != '\0') /*we move at the end of first string*/
	{
		here++;
	}

	while (src[second] != '\0') /*we add 2d string after 1st*/
	{
		if (second < n && src[second] != '\0')
		{
			dest[here] = src[second];
			here++;
			second++;
		}
		else
		break;
	}


	dest[here] = '\0'; /* we add a \0 at the end*/

	return (dest); /* returning first + second string*/
}
