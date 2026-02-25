#include "main.h"

/**
 * times_table - Entry
 *
 * Return: no return
 */
void times_table(void)
{
	int line;
	int c;
	int result;

	for (line = 0; line <= 9; line++)
	{
		for (c = 0; c <= 9; c++)
		{
			result = line * c;

			if (result >= 10)
			{
				_putchar(' ');
				_putchar((result / 10) + '0');
			}

			_putchar((result % 10) + '0');

			if (c != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}

		_putchar('\n');
	}
}
