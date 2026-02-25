#include "main.h"

/**
 * _abs - check absolute
 *
 * @n: The characters to check;
 *
 * Return: if n is negative, return its absolute; else returns n
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
