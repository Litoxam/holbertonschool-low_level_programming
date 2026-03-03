#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverse a string
 * @s: intial string
 *
 * Return: No return.
 */


void rev_string(char *s)

{
	char tmp;
	char *end = s;

	while (*end)
		{
		end++;
		}

	end--;

	while (end > s)
		{
		tmp = *s;
		*s = *end;
		*end = tmp;
		s++;
		end--;
		}
}
