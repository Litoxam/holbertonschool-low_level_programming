#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Entry
 * @n: base number, change it until 98
 * Return: no return
 */

void print_to_98(int n)
{

	while (n <= 98)
	{
	if (n != 98)
	printf("%d, ", n);
	
if (n == 98)
printf("%d",n);
n++;

	}
	putchar('\n');
}
