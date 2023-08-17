#include "function_pointers.h"

/**
  * array_iterator - function
  * @array: array
  * @size: size of array
  * @action: function pointer
  * Return: void
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (action && array && size)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
