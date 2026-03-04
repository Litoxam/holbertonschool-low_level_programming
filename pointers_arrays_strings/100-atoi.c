#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: string
 *
 * Return: integer value
 */

int _atoi(char *s)
{
	int here = 0;
	int sign = 1;
	int num = 0;

	/*detect the first digit*/
	while (s[here] != '\0' && (s[here] < '0' || s[here] > '9'))
	{
		if (s[here] == '-')
			sign = sign * (-1); /*change the sign everytime there is a '-'*/

		here++;
	}

	while (s[here] >= '0' && s[here] <= '9') /*while 'here' is between 0 and 9*/
	{
		num = num * 10 + (s[here] - '0'); /* convert the value from char to int */
		here++;
	}

	return (num * sign); /*final sign of the result*/
}
