#include "main.h"

/**
 * puts2 - change value using the pointer address
 *
 * @str: stores the input
 */
void puts2(char *str)
{
	int i, c = 0;

	while (str[c] != '\0')
	{
		c++;
	}

	for (i = 0; i < c; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
