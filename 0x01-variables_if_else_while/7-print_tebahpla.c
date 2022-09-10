#include <stdio.h>

/**
 *  main - prints alphabet in reverse
 *  Return: last digit
 */
int main(void)
{
char x;
for (x = 'z'; x >= 'a'; x--)
{
putchar(x);
}
putchar('\n');
return (0);
}
