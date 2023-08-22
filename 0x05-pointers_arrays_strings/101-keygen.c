#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates keygen.
 * Return: 0 Always.
 */
int main(void)
{
int i = 0, j = 0;
time_t k;

srand((unsigned int) time(&k));
while (j < 2772)
{
i = rand() % 128;
if ((j + i) > 2772)
break;
j = j + i;
printf("%c", i);
}
printf("%c\n", (2772 - j));
return (0);
}
