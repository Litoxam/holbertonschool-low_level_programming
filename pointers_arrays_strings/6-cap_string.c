#include "main.h"

/**
 * *cap_string - change lowercase to uppercase if separator before
 * @str : string to change
 *
 * Return: str
 */

char *cap_string(char *str)
{
	int i;
	int scan;
	char separators[] = " \t\n,;.!?\"(){}";

for (i = 0; str[i] != '\0'; i++) /*check the string*/
{
	for (scan = 0; separators[scan] != '\0'; scan++) /*check if separator*/
	{
	if (str[i] == separators[scan]) /*if it's a separator...*/
		{
		if (str[i + 1] >= 'a' && str[i + 1] <= 'z') /*change the next char...*/
		str[i + 1] = str[i + 1] - 32; /*into an uppercase*/
		}
	}
}
	return (str);

}
