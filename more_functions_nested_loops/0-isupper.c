#include "main.h"


/**
 * _isupper - int a character.
 * @c: character
 *
 * Return: 0 if lower case, 1 if uppercase, 0 if
 * anything else
 */

int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
	return (0);
	else if (c >= 'A' && c <= 'Z')
	return (1);
	else
	return (0);
}
