#include "main.h"

/**
  * flag_is - function to test the number
  * @n: number to test
  * @i: mod number
  * Return: 0 or 1
  */

int flag_is(int n, int i)
{
	int flag = 1;

	if (i <= n / 2)
	{
		if (n % i == 0)
		{
			flag = 0;
			return (flag);
		}
		else
		{
			flag_is(n, i + 1);
		}
	}
	
	return (flag);
}

/**
  * is_prime_number - function to find prime numbers
  * @n: number to determine
  * Return: 0 or 1.
  *
  *
  */

int is_prime_number(int n)
{
	if (n == 0 || n == 1)
	{
		return (0);
	}
	else
	{
		return (flag_is(n, 2));
	}
}
