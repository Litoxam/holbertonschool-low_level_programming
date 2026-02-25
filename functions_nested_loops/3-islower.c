#include "main.h"

/**
 * _islower - check if c is lowercase
 *
 * @c: The characters to check; Hol
 *
 * Return: if c is lowercase, returns 1; else returns 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
