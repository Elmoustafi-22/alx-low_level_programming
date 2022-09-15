#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: an argument
 * Return: 1 and 0
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
return (0);
}
