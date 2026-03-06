#include "main.h"

/**
 * *_strchr - look for a char
 * @s: initial string
 * @c: char we are looking for
 *
 *
 * Return: the encoded string
 */

char *_strchr(char *s, char c)
{
    int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}

	if (s[i] == c)
	{
		return (&s[i]);
	}

	return (0);
}