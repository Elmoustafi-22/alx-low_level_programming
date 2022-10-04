#include <stdio.h>
#include "main.h"

/**
 * main - a program that multiplies two numbers.
 * @argc: character count
 * @argv: array count
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		mul *= _atoi(argv[i]);
	}
	printf("%d\n", mul);
	return (0);
}
