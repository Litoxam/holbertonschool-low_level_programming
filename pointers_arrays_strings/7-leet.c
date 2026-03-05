#include "main.h"

/**
 * *leet - change a string into 1337
 * @str: string to encode
 *
 * Return: the encoded string
 */
char *leet(char *str)
{
	int i;
	int scan;
	char *leet = "aAeEoOtTlL";
	char *change = "4433007711";

	i = 0;
	while (str[i] != '\0') /* parcourt la string */
	{
		scan = 0;
		while (leet[scan] != '\0') /* parcours la string leet*/
		{
			if (str[i] == leet[scan]) /* Et la compare avec str */
			{
				str[i] = change[scan];/*si égales, change en chiffre*/
			}
			scan++;
		}
		i++;
	}

	return (str);
}
