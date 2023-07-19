#include <stdio.h>

/**
  * main - fibonacci
  * Return: 0
  */

int main(void)
{
	int i;

	unsigned long j = 0, k = 1, sum;

	for (i = 0; i < 98; i++)
	{
		sum = j + k;
		printf("%lu, ", sum);

		j = k;
		k = sum;
	}
	printf("\n");
	return (0);
}
