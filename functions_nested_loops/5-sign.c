#include "main.h"

/**
 * print_sign - check if c is a letter
 *
 * @n: The characters to check;
 *
 * Return: if n is positive, return 1 and +, else return 0 and -
 * if =0 return 0 and 0
 */
int print_sign(int n)

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
