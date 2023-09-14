#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
  * op_add - adds two integers
  * @a: integ
  * @b: integ
  *
  * Return: sum
  */
int op_add(int a, int b)
{
	return (a + b);
}


/**
  * op_sub - sub two integers
  * @a: integer
  * @b: integer
  *
  * Return: sub
  */
int op_sub(int a, int b)
{
	return (a - b);
}


/**
  * op_mul - multiply two int
  * @a: int
  * @b: int
  *
  * Return: multi
  */
int op_mul(int a, int b)
{
	return (a * b);
}


/**
  * op_div - divise two int
  * @a: int
  * @b: int
  *
  * Return: div
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}


/**
  * op_mod - rest of div
  * @a: int
  * @b: int
  *
  * Return: rest
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
