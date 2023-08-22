#include "main.h"
/**
 * rev_string - reverses a string.
 * @s: input string.
 * Return: no return.
 */
void rev_string(char *s)
{
int count = 0, i, j;
char *st, pass;
while (count >= 0)
{
if (s[count] == '\0')
break;
count++;
}
st = s;
for (i = 0; i < (count - 1); i++)
{
for (j = i + 1; j > 0; j--)
{
pass = *(str + j);
*(st + j) = *(st + (j - 1));
*(st + (j - 1)) = pass;
}
}
}
