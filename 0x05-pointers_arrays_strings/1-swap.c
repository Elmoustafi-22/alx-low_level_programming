#include "main.h"

/**
 * swap_int - a function that swaps the value of two integers
 * @a: first parameter
 * @b: second parameter
 * Return: Success
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
