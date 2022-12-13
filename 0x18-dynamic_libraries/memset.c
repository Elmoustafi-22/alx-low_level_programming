#include "main.h"

/**
* _memset -  function fills the first n bytes of the memory area.
* @n: fills the first
* @s: points to area
* @b: constant byte
*
* Return:Success
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
		s[index] = b;
	return (s);
}
