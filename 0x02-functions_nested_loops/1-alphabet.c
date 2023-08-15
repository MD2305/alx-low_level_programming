#include "main.h"
/**
* print_alphabet - prints the alphabets lowercase
*
* Return: 0
*/
void print_alphabet(void)
{
int i;
char str[26] = "abcdefghijklmnopqrstuvwxyz";
for (i = 0; i < 26; i++)
{
_putchar(str[i] + 'a');
}
_putchar('\n');
}
