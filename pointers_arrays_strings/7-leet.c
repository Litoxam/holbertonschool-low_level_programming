#include "main.h"

/**
 * *leet - change some char into numbers
 * @str : string to change
 *
 * Return: str
 */

char *leet(char *str)
{
	int i;
	int scan;
	char leet[] = "aeotlAEOTL";
	char change[] = "4307143071";

for (i = 0; str[i] != '\0'; i++) /*check the string*/
{
	for (scan = 0; leet[scan] != '\0'; scan++) 
	{
	if (str[i] == leet[scan]) /*if it's in the list*/
		{
		str[i] = change[scan]; /*into a number*/
		}
	}
}

return (str);


}
