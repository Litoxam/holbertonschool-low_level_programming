#include "3-calc.h"
#include <stdlib.h>

/**
 * main - main entry
 *
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0
 */


int main(int argc, char *argv[])
{
	int a, b;
	int (*f)(int, int);

	/*si il n'y a pas strictement 4 arguments, error exit*/
	if (argc != 4)
	{
	printf("Error\n");
	exit(98);
	}

	/*utilise la fonction qui check l'opérateur*/
	f = get_op_func(argv[2]);


	/*si l'opérateur n'est pas dans la liste*/
		if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	/*convertit les entrée en nombre entier*/
	a = atoi(argv[1]);
	b = atoi(argv[3]);


	/*si on divise ou module par 0, erreur 100*/
	if ((argv[2][0] == '/' || argv[2][0] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", f(a, b));

	return (0);
}
