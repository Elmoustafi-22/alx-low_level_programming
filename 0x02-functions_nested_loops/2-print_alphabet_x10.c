#include "main.h"

/**
 * print_alphabet_x10 -  prints 10 times the alphabet, in lowercase
 *
 * Return 0 Always
 */

void print_alphabet_x10(void)
{
int i;
char c;
for (i = 1; i <= 9; i++)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c)
}
_putchar('\n')
}
}
