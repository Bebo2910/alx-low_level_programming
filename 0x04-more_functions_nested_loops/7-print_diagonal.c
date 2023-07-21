#include "main.h"

/**
  * print_diagonal - function
  * Return: none
  *@n: number of size
  */

void print_diagonal(int n)
{
	int postn, space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (postn = 1; postn < n; postn++)
		{
			for (space = 2; space < n; space++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
