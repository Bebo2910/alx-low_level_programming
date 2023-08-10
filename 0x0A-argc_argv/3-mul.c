#include <stdio.h>
#include <stdlib.h>
/**
  * main - func
  * @argc: find
  * @argv: didffh
  * Return: 0
  *
  */
int main(int argc, char const *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
	}
	else
	{
		int i = atoi(argv[1]);
		int j = atoi(argv[2]);
		printf("%d\n", i * j);
	}
	return (0);
}
