#include "function_pointers.h"

/**
  * int_index - find index of the array to match
  * @array: the array
  * @size: time to go
  * @cmp: function to pointer
  * Return: n or -1
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
	{
		return (-1);
	}

	if (size && array && cmp)
	{
		for (; i < size; i++)
		{
			int n = cmp(array[i]);

			if (n != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
