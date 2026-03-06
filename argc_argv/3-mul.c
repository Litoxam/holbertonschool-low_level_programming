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
	(void)argc;

	if (argc == 3)
	{
	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);
	}

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
