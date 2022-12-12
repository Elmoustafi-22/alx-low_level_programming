#include "main.h"

/**
* _strpbrk - a function that searches a string for any of a set of bytes.
* @s: string
* @accept: bytes
*
* Return: a pointer to the bytes n
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}
	return (0);
}