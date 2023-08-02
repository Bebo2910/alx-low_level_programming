#include "main.h"

/**
  * _pow_recursion - function to power
  * @x: number to multiply
  * @y: power of the number
  * Return: number x with power of y
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		y--;
		return (x * _pow_recursion(x, y));
	}
}

