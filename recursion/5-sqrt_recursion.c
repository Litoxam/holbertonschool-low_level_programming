#include "main.h"

/**
 * check_square - checks for the square root
 * @n: number to test
 * @check: the current number to test
 * Return: check
 */
int check_square(int n, int check)
{
	if (check * check == n)
		return (check);
	if (check * check > n)
		return (-1);
	return (check_square(n, check + 1));
}


/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 *
 *
 * Return: x^y
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (check_square(n, 0));
}
