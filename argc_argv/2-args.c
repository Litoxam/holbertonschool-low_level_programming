#include <stdio.h>

/**
 * main - display every arguments on a new line
 * @argc: number of arguments
 * @argv: array of the arguments
 * Return: return 0;
 */


int main(int argc, char *argv[])
{
	int i = 0;
	(void)argc;

	while (i < argc)
	{
	printf("%s\n", argv[i]);
	i++;
	}
	return (0);
}
