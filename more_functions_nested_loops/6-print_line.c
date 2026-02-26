#include "main.h"


/**
 * print_line - prints _ n times
 * @n: number of _ per line
 *
 * Return: no return
 */

void print_line(int n)
{
	char c;

	for (c = 1; c <= n; c++)

	{
	_putchar('_');
	if (n <= 0)
	_putchar('\n');
	}
	_putchar('\n');

}

