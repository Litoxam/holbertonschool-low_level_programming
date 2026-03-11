#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


/**
 * *malloc_checked - allocate b bytes
 * @b: number of byted allocated
 *
 *
 * Return: no return
 *
 */


void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
	exit(98);
	}

	return (ptr);
}
