#include "main.h"

/**
  * print_binary - function to print binary
  * @n: the number
  * Return: void
  *
  *
  */

void print_binary(unsigned long int n)
{
	unsigned long int head;
	int count = 0, i;

	for (i = 63; i >= 0; i--)
	{
		head = n >> i;
		if (head & 1L)
		{
			_putchar('1');
			count++;
		}
		else if (count)
		{
			_putchar('0');
		}
	}
	if (!count)
	{
		_putchar('0');
	}
}
