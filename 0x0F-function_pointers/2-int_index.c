#include "function_pointers.h"
/**
  * int_index - searches for the first index
  * @array: pointer to an array
  * @size: size of array
  * @cmp: pointer to function
  *
  * Return: Nothing
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
