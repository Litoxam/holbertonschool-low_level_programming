#include "main.h"

/**
 * _abs - check if c is a letter
 *
 * @n: The characters to check;
 *
 * Return: if n is positive, return 1 and +, else return 0 and -
 * if =0 return 0 and 0
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
