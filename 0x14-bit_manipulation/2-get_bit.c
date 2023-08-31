#include "main.h"

/**
  * get_bit - funny
  * @n: number
  * @index: index
  * Return: number
  *
  */
int get_bit(unsigned long int n, unsigned int index)
{
	int number;

	if (index > 64)
	{
		return (-1);
	}

	number = (n >> index) & 1;

	return (number);
}
