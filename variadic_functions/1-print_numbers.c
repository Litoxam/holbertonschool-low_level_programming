#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - print numbers with a separator between
 * @n: number of arguments
 * @separator: separator between arg
 * Return: no return
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list arguments;
unsigned int i;

va_start(arguments, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arguments, unsigned int));

		if (separator != NULL)
			printf("%s", separator);
	}



va_end(arguments);

}
