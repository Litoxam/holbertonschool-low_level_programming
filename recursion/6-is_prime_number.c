#include "main.h"

/**
 * check_prime - checks recursively if a number is prime
 * @n: the number to check
 * @i: diviseur, starts at n -1
 *
 * Return: 1 if n is prime, else 0
 */

int check_prime(int n, int i)
{
	if (i == 1)
	{
		return (1); /*si le diviseur == 1, c'est un nombre premier*/
	}
	if (n % i == 0) /* si le reste de la division == 0, pas premier*/
	{
		return (0);
	}
	return (check_prime(n, i - 1));/* recursion en décrémentant i*/
}


/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: the number to check
 *
 * Return: 1 if prime, else 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (check_prime(n, n - 1));
}