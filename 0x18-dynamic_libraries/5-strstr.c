#include "main.h"
#include <stdio.h>

/**
* _strstr - a function that locates a substring.
* @haystack: strings
* @needle: the first occurence of substring
* Return: a pointer to the beginning of the located substring
*/
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (!needle[j])
			return (&haystack[i]);
	}
	return (NULL);
}
