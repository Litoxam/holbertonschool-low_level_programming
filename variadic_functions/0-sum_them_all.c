#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum of all arguments
 * @n: number of arguments
 * Return: return sum
 */

int sum_them_all(const unsigned int n, ...)
{
va_list ptr;
unsigned int sum = 0;
unsigned int i;

	if (n == 0)
		return (0);

va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ptr, unsigned int);
	}

va_end(ptr);
return (sum);

}
