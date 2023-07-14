#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
  * main - finds out the last number and print it
  * Return: 0
  */
int main(void)
{
	int n;
	int mod;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	mod = n % 10;
	if (mod > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, mod);
	}
	else if (mod < 6 && mod != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, mod);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, mod);
	}
	return (0);
}
