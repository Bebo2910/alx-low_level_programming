#include "main.h"

/**
  * flip_bits - function
  * @n: num 1
  * @m: num 2
  * Return: return
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int buffer, current;
	int count = 0, i;

	buffer = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = (buffer >> i) & 1;

		if (current == 1)
		{
			count++;
		}
	}

	return (count);
}
