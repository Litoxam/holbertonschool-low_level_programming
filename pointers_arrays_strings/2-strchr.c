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
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
		return (&s[i]);
		}

		if (s[i] == '\0')
		{
		return ('NULL');
		}

	}

		return (0);
}
