#include <stdio.h>
/**
* main - Prints the alphabt.
*
* Return: Always 0
*/
int main(void)
{
char str[24] = "abcdfghijklmnoprstuvwxyz";
int i;
for (i = 0; i < 24; i++)
{
putchar(str[i]);
}
putchar('\n');
return (0);
}
