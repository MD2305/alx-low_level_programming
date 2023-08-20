#include <stdio.h>
/**
 * main - prints largest prime factor.
 * Return: Always 0.
 */

int main(void)
{
long int n, fc;

n = 612852475143;
for (fc = 2; fc <= n; fc++)
{
if (n % fc == 0)
{
n /= fc;
fc--;
}
}
printf("%ld\n", fc);
return (0);
}
