#include "main.h"
/**
* _islower - checks for lowercase character
* @c: character
* Return: 1 or 0
*/
int _islower(int c)
{

if (c > 97  && c < 123)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
