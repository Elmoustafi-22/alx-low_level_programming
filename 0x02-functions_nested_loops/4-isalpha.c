#include "main.h"

/**
 *  _isalpha - checks for alphabetic character.
 *  @c: is an argument to the fuction
 *  Return: 0 
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
return (0);
}
