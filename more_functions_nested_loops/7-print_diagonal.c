#include "main.h"


/**
 * print_diagonal - prints diagonals
 *
 * @n: number of / to print
 *
 * Return: no return
 */

void print_diagonal(int n)
{
	int s;
	int i;

	if (n <= 0)
	_putchar('\n');

	for (i = 0; i < n; i++)
	{
	for (s = 0; s < i; s++)
		{
		_putchar(' ');
		}
	_putchar(92);
	_putchar('\n');
	}
}

