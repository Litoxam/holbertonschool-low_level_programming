#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply 2 arguments (converted into int with atoi)
 * @argc: number of arguments
 * @argv: array of the arguments
 * Return: return 0; return 1 if there isn't 2 values
 */


int main(int argc, char *argv[])
{
	int result;
	int i;
	(void)argc;

	for (i = 0; i < argc, i++)
	{
	result += atoi(argv[i])
	}

	if (argv[i] < 48 && argv[i] > 57 )
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
