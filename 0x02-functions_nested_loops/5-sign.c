#include "main.h"

/**
 * print_sign - function to check for a sign
 * @n: is an argument of the function
 * Return: 0 *
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else if (n < 0)
{
_putchar('-');
return(-1);
}
}
