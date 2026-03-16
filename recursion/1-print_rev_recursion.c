#include "main.h"

/**
 * _print_rev_recursion - affiche une chaîne à l'envers.
 * @s: la chaîne à afficher.
 */
void _print_rev_recursion(char *s)
	{

	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);


	_putchar(*s);
}
