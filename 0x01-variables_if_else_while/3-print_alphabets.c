#include <stdio.h>
/**
* main - Prints the alphabet.
*
* Return: Always 0
*/
int main(void)
{
char low[26] = "abcdefghijklmnopqrstuvwxyz";
char upp[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i, j;
for (i = 0; i < 26; i++)
{
putchar(low[i]);
}
for (j = 0; j < 26; j++)
{
putchar(upp[j]);
}
putchar('\n');
return (0);
}
