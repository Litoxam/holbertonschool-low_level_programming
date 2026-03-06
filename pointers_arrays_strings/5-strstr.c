#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring.
 * @haystack: the string to search in
 * @needle: the substring to look for
 *
 * Return: pointer to the beginning of the located substring,
 * or 0 if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{

		if (haystack[i] == needle[0])
		{
			/*on vérifie si la lettre d'après correspond à needle aussi*/
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] != needle[j])
					break;
			}

			/*si on arrive au bout de needle, on a trouvé ce qu'on voulait*/
			if (needle[j] == '\0')
			return (&haystack[i]);
		}
	}

	return (0);
}
