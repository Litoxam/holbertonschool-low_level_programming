#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints
 * @str: intial string
 *
 * Return: No return.
 */


void puts2(char *str)


{
int point = 0;

for (point = 0; str[point] != '\0'; point++)
	{
	if (point % 2 == 0)
	_putchar(str[point]);
	}
	_putchar('\n');
}
