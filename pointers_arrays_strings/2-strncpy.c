#include "main.h"

/**
 * *_strncpy - add a string after another one but only n caracter
 * @dest: first string
 * @src: second string we need to add on the first one
 * @n: number of caracter to add from src
 *
 * Return:  dest string modified
 */

char *_strncpy(char *dest, char *src, int n)
{
	int here = 0;

	while (here < n && src[here] != '\0') /*tant qu'on est pas à n ou à la fin*/
	{
		dest[here] = src[here]; /*On écrase src sur dest*/
		here++;
	}
	while (here < n) /*si je suis pas encore arrivé à n*/
		{	dest[here] = '\0'; /* on add \n jusqu'à la fin*/
			here++;
		}
	return (dest); /* On affiche src écrasé sur dest */
}
