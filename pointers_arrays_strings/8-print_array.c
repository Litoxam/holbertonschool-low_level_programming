#include "main.h"
#include <stdio.h>

/**
 * print_array - prints all the array
 * @a: pointer towards an int
 * @n: number of element to display
 *
 * Return: No return.
 */


void print_array(int *a, int n)
	{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		printf(", ");
	}
	printf("\n");
}
