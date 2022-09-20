#include "main.h"

/**
 * puts_half - a function that prints half a string
 * @str: string
 * Return: half of a string
 */
void puts_half(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{
		c++;
	}

	c = (c - 1) / 2;

	while (str[++c])
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}
