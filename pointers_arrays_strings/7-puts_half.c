#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string
 * @str: intial string
 *
 * Return: No return.
 */


void puts_half(char *str)
	{
	int length = 0;
	int i;
	int half;

	while (str[length] != '\0')
		length++;

	if (length % 2 == 0)
		half = length / 2;
	else
		half = (length - 1) / 2;

	for (i = half; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');
}
