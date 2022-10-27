#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: Integer
 *
 * Return: Binary number
 */
void print_binary(unsigned long int n)
{
	int i, count;
	unsigned long int pnt;

	i = 0;
	count = 0;

	for (i = 63; i >= 0; i--)
	{
		pnt = n >> i;
		if (pnt & 1)
		{
			_putchar('1');
			count++;
		}
		else if (pnt)
		{
			_putchar('0');
		}
	}
	if (!pnt)
	{
		_putchar('0');
	}
}
