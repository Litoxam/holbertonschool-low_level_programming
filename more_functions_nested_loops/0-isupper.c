#include "main.h"

int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
	return (0);
	else if (c >= 'A' && c <= 'Z')
	return (1);
	else
	return (0);
}
