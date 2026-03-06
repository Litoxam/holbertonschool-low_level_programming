#include "main.h"
#include <stdio.h>

/**
 * print_diagsums- print a chessboard
 * @a: initial array
 * @size: size of the array
 *
 * Return: no return
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;
	int diag1 = 0;			/* Position pour la diagonale \ */
	int diag2 = size - 1;	/* Position pour la diagonale / */

	for (i = 0; i < size; i++)
	{
		/* On ajoute la valeur de la position actuelle */
		sum1 += a[diag1];
		sum2 += a[diag2];

		/* On prépare les positions pour la ligne suivante */
		diag1 = diag1 + (size + 1);
		diag2 = diag2 + (size - 1);
	}

	printf("%d, %d\n", sum1, sum2);
}
