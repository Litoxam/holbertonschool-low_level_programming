#include "main.h"

/**
 * jack_bauer - Entry
 *
 * Return: every minute from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int h;
	int m;

	for (h = 0; h < 24; h++)
{
		for (m = 0; m < 60; m++)
		{
			_putchar((h / 10) + '0'); /*tens digit of hours*/
			_putchar((h % 10) + '0'); /*ones digit of hours*/
			_putchar(':');
			_putchar((m / 10) + '0'); /*tens digit of minutes*/
			_putchar((m % 10) + '0'); /*ones digit of hours*/
			_putchar('\n');
		}
}

}
