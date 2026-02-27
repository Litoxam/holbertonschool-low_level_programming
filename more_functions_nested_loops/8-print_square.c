#include "main.h"


/**
 * print_square - prints a square
 *
 * @size: size of the square
 *
 * Return: no return
 */

void print_square(int size)
{

	int c;
	int d;
		if (size <= 0)
		_putchar('\n');
	for (d = 1; d <= size; d++)
	{

		for (c = 1; c <= size; c++)
			{
			_putchar('#');
			}


		_putchar('\n');
	}

}

