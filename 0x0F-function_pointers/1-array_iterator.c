#include <stdio.h>
/**
  *array_iterator - function that executes function given as parameter.
  *@array: Input array of elements.
  *@size: Input size of array.
  *@action: Input function pointer.
  *
  *Return: void.
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
