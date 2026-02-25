#include "main.h"

/**
 * print_last_digit - check if c is a letter
 *
 * @n: The characters to check;
 *
 * Return: last digit of n, if negative, returns -n
 */
int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = n % 10;

	if (lastDigit < 0)
		lastDigit = -lastDigit;

	_putchar(lastDigit + '0');

	return (lastDigit);
}
