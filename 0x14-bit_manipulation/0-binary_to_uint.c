#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: points to a string
 *
 * Return: The converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int digit = 0;

	if (!b)
	{
		return (0);
	}
	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		digit = 2 * digit + (b[i] - '0');
	}
	return (digit);
}
