#include <stdio.h>
/**
 * main - Prints the alphabet.
 *
 * Return: Always 0
 */
int main(void)
{
char str[26] = "abcdefghijklmnopqrstuvwxyz";
int i;
for (i = 0; i < 26; i++)
{
putchar(str[i]);
}
putchar('\n');
return (0);
}
