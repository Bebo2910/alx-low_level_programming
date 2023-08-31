#include "main.h"
#include <math.h>

/**
  * binary_to_uint - fucntion to change bin to dex
  * @b: string
  * Return: dec or 0
  *
  *
  *
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int i;

	if (!b)
	{
		return (0);
	}

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		dec = dec * 2 + (b[i] - '0');
	}

	return (dec);
}
