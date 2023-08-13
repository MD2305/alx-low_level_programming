#include <stdio.h>
/**
* main - Prints the alphabet in reverse.
*
* Return: Always 0
*/
int main(void)
{
char str[26] = "abcdefghijklmnopqrstuvwxyz";
int i;
for (i = 25; i >= 0; i--)
{
putchar(str[i]);
}
putchar('\n');
return (0);
}
