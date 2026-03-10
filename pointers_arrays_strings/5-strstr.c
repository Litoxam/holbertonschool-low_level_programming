#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring.
 * @haystack: the string to search in
 * @needle: the substring to look for
 *
 * Return: no return
 */
void print_chessboard(char (*a)[8])
{

	int i;
	int col;

	for(i = 0; i < 8; i++)
	{

		for (col = 0; i < 8; col++)
		{
			_putchar(a[i][j]);
		}

		_putchar('\n');
	}

}
