#include "function_pointers.h"

/**
  * int_index - Searches for an integer
  * @array: Input array of numbers
  * @size: Input number of element in array
  * @cmp: pointer to function used to compare values
  *
  * Return: index of first element
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (j < size)
			{
				if (cmp(array[j]))
					return (j);

				j++;
			}
		}
	}

	return (-1);
}
