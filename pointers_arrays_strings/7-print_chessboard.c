#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - print a chessboard
 * @a: initial array
 *
 * Return: no return
 */
void print_chessboard(char (*a)[8])
{

	int i;
	int col;

	for (i = 0; i < 8; i++)
	{

		for (col = 0; col < 8; col++)
		{
			_putchar(a[i][col]);
		}

		_putchar('\n');
	}

}
