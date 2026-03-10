#include "main.h"

/**
 * *reverse_array - Prints a reversed array of integers
 * @a : array of integers
 * @n : the number of elements to swap
 *
 * Return: no return
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	for (i = 0 ; i < (n / 2) ; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
