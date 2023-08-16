#include "main.h"
/**
* print_sign - shows 1 and prints + if n is greater than zero
* shows 0 and prints 0 if n is zero
* shows -1 and prints - if n is less than zero
* @n: int
* Return: 1 for positif. 0 for zero. -1 for neg
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (0);
}
else
if (n == 0)
{
_putchar(48);
return (0);
}
else
{
_putchar(45);
return (-1);
}
_putchar('\n');
}
