#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: contains decimal number.
 * @index: contains index
 * Return: converted number
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int status;

	status = (n >> index) & 1;
	if (index > 32)
		return (-1);
	return (status);
}
