#include <unistd.h>

void print_alphabet(void)   // définition
{
    char c = 'a';
    while (c <= 'z')
    {
        putchar(c);
        c++;
    }
    putchar('\n');
}