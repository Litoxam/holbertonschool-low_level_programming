#include <stdio.h>
#include <stdlib.h>

/**
 * main - add all the arguments if numbers (converted into int with atoi)
 * @argc: number of arguments
 * @argv: array of the arguments
 * Return: return 0; return 1 if not a digit
 */


int main(int argc, char *argv[])
{
	int i;
	int col;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++) /*arguments en arguments, on commence par le 1er*/
	{

		/* on vérifie chaque caractère de l'argument*/
		for (col = 0; argv[i][col] != '\0'; col++)
		{
			/*si c'est pas un chiffre, erreur*/
			if ((argv[i][col]) < '0' || (argv[i][col]) > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		/*on fait la somme de chaque argument, converti en int*/
		sum += atoi(argv[i]);

	}
		/*on affiche le résultat final*/
	printf("%d\n", sum);

	return (0);
}
