#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
#include <unistd.h>

int main(void)
{
char c = 'a';



while (c <= 'z')
{

if (c == 'r')
c += 1;
if (c == 'e')
c += 1;
putchar(c);
c++;
}


putchar('\n');

return (0);
}
