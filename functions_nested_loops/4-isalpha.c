#include "main.h"

/**
 * _isalpha - check if c is a letter
 *
 * @c: The characters to check;
 *
 * Return: if c is a letter, returns 1; else returns 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
