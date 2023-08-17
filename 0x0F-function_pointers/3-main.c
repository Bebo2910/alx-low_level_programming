#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - function of main
  * @argc: argc
  * @argv: argv
  * Return: error or operation
  *
  *
  */
int main(int argc, char **argv)
{
	int (*operation)(int, int), a, b;

	if (argc != 4)
	{
		printf("Error\n"), exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	operation = get_op_func(argv[2]);

	if (!operation)
	{
		printf("Error\n"), exit(99);
	}
	if (!b && (argv[2][0] == '%' || argv[2][0] == '/'))
	{
		printf("Error\n"), exit(100);
	}

	return (operation(a, b));
}
