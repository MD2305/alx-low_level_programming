#include <stdio.h>
/**
* main - prints base 16
*
* Return: Always 0
*/
int main(void)
{
int i, j;
for (i = 0; i < 10; i++)
{
putchar(i + '0');
}
for (j = 0; j < 6; j++)
{
putchar(j + 'a');
}
putchar('\n');
return (0);
}
