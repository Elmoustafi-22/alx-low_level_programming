#include "main.h"

/**
 * _abs - function that computes the absolute value of an int
 * @c: is an argument of the function
 * Return: Always 0 (Success)
 */
int _abs(int c)
{
if (c > 0 || c == 0)
{
return (c);
}
else
return (c * -1);
}
