#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - print string with a separator between
 * @n: number of strings
 * @separator: separator between strings
 * Return: no return
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list arguments;
unsigned int i;
char *str;

va_start(arguments, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(arguments, char*);

		if (str == NULL)/* si la string est nulle, printf nil*/
			printf("(nil)");
		else
			printf("%s", str);

		if (separator != NULL && i < (n - 1))
		 /*met le séparateur jusqu'à l'avant dernier caractère de la string*/
		{
			printf("%s", separator);
		}
	}


va_end(arguments);

printf("\n");

}
