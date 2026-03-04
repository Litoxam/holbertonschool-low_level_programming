#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap values of a and b
 * @a: value number 1
 * @b: value number 2
 * Return: no return.
 */


void swap_int(int *a, int *b)
{
int temp = 0;

temp = *b;
	*b = *a;
	*a = temp;
}
