#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * main - func
  * @argc: fine
  * @argv: fine
  * Return: cents
  *
  *
  */
int main(int argc, char **argv)
{
	int i, least = 0, num;
	int a[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);

	if (num <= 0)
	{
		printf("%d\n", 0);
		return (1);
	}

	for (i = 0; i < 5; i++)
	{
		if (num >= a[i])
		{
			least += num / a[i];
			num = num % a[i];
			if (num % a[i] == 0)
			{
				break;
			}
		}
	}

	printf("%d\n", least);
	return (0);
}
