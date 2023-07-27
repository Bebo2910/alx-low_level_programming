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
	for (; n >= 0; n--)
	{
		_putchar(a[n]);
	}
	_putchar('\n');
}
