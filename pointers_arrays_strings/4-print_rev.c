#include "main.h"
#include <stdio.h>

/**
 * print_rev - print a string of characters but reversed
 * @s: intial string
 *
 * Return: No return.
 */


void print_rev(char *s)

{
	while (*s)
		{
		s++;
		}
		s--;
		while (*s)
		{
		_putchar(*s);
		s--;
		}
	_putchar('\n');
}
