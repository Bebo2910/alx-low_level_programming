#include <stdio.h>
/**
 * sum - sum the numbers
 * @a: the first int
 * @b: the second int
 * Return: the sum
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * div - div the numbers
 * @a: the first int
 * @b: the second int
 * Return: the the division
 */


float div(int a, int b)
{
	if (b == 0)
	{
		printf("Error: the under mod is zero");
		return (-1);
	}
	return (a / b);
}

/**
 * sub - sum the numbers
 * @a: the first int
 * @b: the second int
 * Return: the sum
 */


int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - sum the numbers
 * @a: the first int
 * @b: the second int
 * Return: the sum
 */

int mul(int a, int b)
{
	return (a * b);
}

/**
 * mod - sum the numbers
 * @a: the first int
 * @b: the second int
 * Return: the mod
 */


int mod(int a, int b)
{
	return (a % b);
}
