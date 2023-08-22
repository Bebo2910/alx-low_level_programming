#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * main - function
  * @argc: argc
  * @argv: argv
  * Return: 1 or 0
  *
  *
  */

int main(int argc, char **argv)
{
	int sum = 0, i = 1;

	if (argc < 2)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (; i < argc; i++)
	{
		int n = atoi(argv[i]);

		if (n == 0)
		{
			printf("Error\n");
			return (0);
		}
		sum += n;
	}
	printf("%d\n", sum);
	return (1);
}
