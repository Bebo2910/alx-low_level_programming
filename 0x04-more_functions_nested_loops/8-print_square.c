#include "main.h"

/**
  * print_square - function
  * @size: number
  * Return: none
  */

void print_square(int size)
{
	int l, w;

	for (l = 1; l <= size; l++)
	{
		for (w = 1; w <= size; w++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
