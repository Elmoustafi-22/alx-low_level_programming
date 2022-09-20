#include "main.h"

/**
 * rev_string - a function that reverses string
 * @s: the character
 * Return: returns the reverse strong
 */
void rev_string(char *s)
{
	int i, c = 0;

	char *first = s, *last = s, temp;

	while (s[c] != '\0')
	{
		c++;
	}

	for (i = 0; i < c - 1; i++)
	{
		last++;
	}

	for (i = 0; i < c--; i++)
	{
		temp = *last;
		*last = *first;
		*first = temp;
		first++;
		last--;
	}
}
