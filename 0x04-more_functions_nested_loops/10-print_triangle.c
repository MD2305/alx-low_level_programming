#include "main.h"
/**
 * print_triangle - prints a triangle.
 * @size: numbers of lines.
 * Return: no return.
 */
void print_triangle(int size)
{
int i, j, k;
if (size <= 0)
{
putchar('\n');
}
for (i = 0; i < size; i++)
{
for (j = 1; j < (size - i); j++)
{
_putchar(' ');
}
for (k = 0; k <= i; k++)
{
_putchar(35);
}
_putchar('\n');
}
}
