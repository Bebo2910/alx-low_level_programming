#include <stdio.h>

/**
  * _sqrt - function
  * @x: input number
  * Return: square root of x
  */

double _sqrt(double x)
{
	float sqrt, tmp;

	sqrt = x / 2;
	tmp = 0;

	while (sqrt != tmp)
	{
		tmp = sqrt;
		sqrt = (x / tmp + tmp) / 2;
	}
	return (sqrt);
}

/**
  * largest_prime_factor - the largest divisor
  * @num: the number
  * Return: the largest
  */

void largest_prime_factor(long int num)
{
	int prmN, largest;

	while (num % 2 == 0)
	{
		num = num / 2;
	}
	for (prmN = 3; prmN <= _sqrt(num); prmN += 2)
	{
		while (num % prmN == 0)
		{
			num = num / prmN;
			largest = prmN;
		}
	}

	if (num > 2)
	{
		largest = num;
	}

	printf("%d\n", largest);
}

/**
  * main - the main
  * Return: 0
  */

int main(void)
{
	largest_prime_factor(612852475143);

	return (0);
}
