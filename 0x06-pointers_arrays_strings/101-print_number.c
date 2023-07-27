#include "main.h"

/**
  * print_number - print number
  * Return: none
  * @n: the number to be printed
  *
  *
  */
void print_number(int n)
{
	unsigned int i;

	i = n;
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (i != 0)
	{
		print_number(i / 10);
	}
	_putchar((i % 10) + '0');
}
