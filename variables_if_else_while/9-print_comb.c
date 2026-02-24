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

char c = '0';

while (c <= '9')
{
putchar(c);
if (c < '9')
{
putchar(',');
putchar(' ');
}
c++;
}

putchar('\n');
return (0);
}
