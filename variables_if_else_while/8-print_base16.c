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
int a = 0;
while (a < 16)
{
printf("%x", a);
a++;
}
printf("\n");
return (0);
}
