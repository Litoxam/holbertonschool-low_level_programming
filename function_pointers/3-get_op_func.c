#include "3-calc.h"
#include <string.h>


/**
 * get_op_func - looking for the operator
 *				and apply the operation
 * @s: string scanned
 * Return: 0
 */



int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (ops[i].op != NULL) /*on parcourt les operateur du tableau de struct*/
	{
		if (strcmp(s, ops[i].op) == 0) /*si dans la string on retrouve un op*/
			return (ops[i].f); /*on retourne la fonction présente dans la struct*/
		i++;
	}
	return (0);
/*par exemple, si on retrouve un * dans la string, on retourne op_mul*/
}
