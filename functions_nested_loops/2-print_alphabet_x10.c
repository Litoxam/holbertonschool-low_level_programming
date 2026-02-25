#include "main.h"

/**
 * print_alphabet - print the alphabet in lowercase from a to z
 *
 * void: check the code without return
 *
 * Return: no return
 */
void print_alphabet_x10(void)
{
	int a = 0;

	while (a < 10)
	{
		char c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}

		_putchar('\n');
		a++;
	}
}
