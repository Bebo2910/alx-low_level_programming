#include "main.h"

/**
  * reverse_array - function to reverse a string
  * @a: the array
  * @n: the number of elements in the array
  *
  *
  */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
