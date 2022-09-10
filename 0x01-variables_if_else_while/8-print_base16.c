#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all the base 16 numbers in lowercase
 * followed by a line
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
char c;
for (i = 0; i <= 9; i++)
{
putchar(i + '0');
}
for (c = 'a'; c <= 'f' c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
