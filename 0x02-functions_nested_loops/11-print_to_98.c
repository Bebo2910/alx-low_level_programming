#include "main.h"
/**
  * print_to_98 - print numbers to 98
  * @n: the number in the begining
  * Return: none
  */

void print_to_98(int n)
{
	if (n < 98)
	{
		int i;

		for (i = n; i <= 98; i++)
		{
			_putchar('i');
			_putchar(',');
			_putchar(' ');
		}
	}
	else if (n > 98)
	{
		int i;

		for (i = n; i <= 98; i--)
		{
			_putchar('i');
			_putchar(',');
			_putchar(' ');
		}
	}
}

