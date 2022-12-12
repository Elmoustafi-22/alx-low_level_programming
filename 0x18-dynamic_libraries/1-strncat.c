#include "main.h"

/**
* _strncat - concatennates n bytes from a string
* @dest: destination string
* @src: source string
* @n: number of bytes to str to contatenate
*
* Return: A pointer
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
