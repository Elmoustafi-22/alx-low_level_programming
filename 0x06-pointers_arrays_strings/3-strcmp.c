#include "main.h"
/**
* _strcmp - search n display length
*
* @s1: stores the input
* @s2: second
* Return: comp
*/
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
