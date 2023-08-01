#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - print diagsums
  * @a: the array
  * @size: the size of the array
  * Return: none.
  *
  */
void print_diagsums(int *a, int size)
{
	int i, j;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
	}

	for (j = size - 1; j >= 0; j--)
	{
		sum2 += a[j * size + (size - j - 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
