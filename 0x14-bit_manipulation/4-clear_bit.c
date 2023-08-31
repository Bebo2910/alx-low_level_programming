#include "main.h"

/**
  * clear_bit - function to clear bit
  * @n: n
  * @index: index
  * Return: 1 or -1
  *
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	*n = ((0 << index) & *n);

	return (1);
}
