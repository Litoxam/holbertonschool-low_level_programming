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
	int (*f)(int, int);
	int a = atoi(argv[1]);
	int b = atoi(argv[3]);

	f = get_op_func(argv[2]);

	if (argc != 4)
		exit(1);

	printf("%d\n", f(a, b));

	return (0);
}
