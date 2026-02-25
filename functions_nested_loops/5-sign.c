#include "main.h"

/**
 * _isalpha - check if c is a letter
 *
 * @n: The characters to check;
 *
 * Return: if c is a letter, returns 1; else returns 0
 */
int _isalpha(int n)

{
	if (n >= 1)
	{
		_putchar('+');
		return (1);
	}
	else if (n <= 0)
	{
		return (0);
		_putchar('-');
	}
	else
	{
		return (0);
		_putchar('0');
	}
}
