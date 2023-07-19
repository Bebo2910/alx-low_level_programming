#include <stdio.h>

/**
  * main - fibiannoacc
  * Return: always 0.
  */

int main(void)
{
	int i;

	unsigned long j = 1, k = 2, sum = 0, next;

	for (i = 0; i <= 33; i++)
	{
		if ((j < 4000000) && (j % 2 == 0))
		{
			sum += j;
		}
		next = k + j;
		j = k;
		k = next;
	}
	printf("%lu\n", sum);
	return (0);
}
