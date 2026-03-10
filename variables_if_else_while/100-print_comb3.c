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
char d = '1';

while (d <= 9)
{
putchar (c);
c++;
}
while (c)
putchar('\n');
return (0);
}
