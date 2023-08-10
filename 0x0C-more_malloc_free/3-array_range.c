#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * array_range - func
  * @min: size minimum
  * @max: size maximum
  * Return: 0 or marina
  *
  */
int *array_range(int min, int max)
{
	int i, len;
	int *marina;

	if (min > max)
	{
		return (0);
	}

	len = max - min + 1;
	marina = malloc(sizeof(int) * len);

	if (marina == 0)
	{
		return (0);
	}

	for (i = 0; i < len; i++, min++)
	{
		marina[i] = min;
	}

	return (marina);
}
