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
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (0);
}
