 #include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: character
 * Return: Always 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_recurses(n, 0));
}

/**
 * _sqrt_recurses - returns square root
 * @n: number
 * @i: power
 * Return: the square root
 */
int _sqrt_recurses(int n, int i)
{
	int sqrt;

	sqrt = i * i;
	if (sqrt == n)
	{
		return (i);
	}
	if (n < sqrt)
	{
		return (-1);
	}
	return (_sqrt_recurses(n, i + 1));
}
