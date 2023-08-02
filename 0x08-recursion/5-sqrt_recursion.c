#include "main.h"

/**
  * actual_sqrt - find the value of root
  * @n: the number
  * @i: the second number
  * Return: -1 or number
  *
  */
int actual_sqrt(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
		return (i);
	return (actual_sqrt(n, i + 1));
}
/**
  * _sqrt_recursion - function to recursion
  * @n: number to find root
  * Return: -1 or root
  *
  */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (actual_sqrt(n, 0));
}
