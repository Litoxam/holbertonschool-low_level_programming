#include "main.h"
#include <stdio.h>

/**
 * _puts - print a string of characters
 * @str: string to print
 *
 * Return: No return.
 */


void _puts(char *str)

{

	while (*str)
		{
		_putchar(*str);
		str++;
		}
	_putchar('\n');
}
