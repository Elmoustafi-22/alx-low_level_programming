 #include "main.h"
/** 
 * int _sqrt_recursion - Write a function that returns the natural square root of a number.
 * @n: character
 * Return: Always 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (_sqrt_recurses(n, 2));
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
	if (n - sqrt == 0)
	{
		return (n);
	}
	else if (n < sqrt)
	{
		return (-1);
	}
	return (_sqrt_recurses(n, ++i));
}
