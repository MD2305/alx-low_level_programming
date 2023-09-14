#include "function_pointers.h"
/**
  * array_iterator - executes a funct that prints elem of array
  * @array: pointer to an array
  * @size: size of array
  * @action: pointer to the function
  *
  * Return: nothing
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
