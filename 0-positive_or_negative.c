#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assigns a random number n
 * Return: 1 if the number is +ve. 0 if not -ve
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
return (0);
}
