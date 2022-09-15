#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of this the line should be printed
 */
void print_diagonal(int n)
if (n <= 0)
{
_putchar('\n');
}
else
{
int a, b;
for (a = 1; a < n; a++)
{
for (b = 1; a < n; n++)
{
if ( b == a)
_putchar('\\');
else if (b < a)
_putchar(' ');
}
_putchar('\n');
}
}
}
