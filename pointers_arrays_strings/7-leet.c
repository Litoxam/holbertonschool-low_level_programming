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
	char leet[] = "aeotl";
	char change[] = "43071";

for (i = 0; str[i] != '\0'; i++) /*check the string*/
{
	for (scan = 0; leet[scan] != '\0'; scan++) 
	{
	if (str[i] == leet[scan] || str[i] == leet[scan] - 32) /*if it's in the list*/
		{
		str[i] = change[scan]; /*into a number*/
		}
	}
}

return (str);


}
