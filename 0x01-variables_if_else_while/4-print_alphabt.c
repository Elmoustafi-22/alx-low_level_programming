#include <stdio.h>
#include <stdlib.h>

/**
 * main - lowercase and uppercase letters
 * return: Always 0 (Success)
 */
int main(void)
{
char c;
for (c = 'a' ; c <= 'z' ; c++)
{
if (c != 'e' && c != 'q')
{
putchar(c);
}
}
putchar('\n');
return (0);
}
