#include <stdio.h>

/**
  * main - function
  * @argc: finding len
  * @argv: finding string
  * Return: 0
  */
int main(int argc, char const *argv[])
{
	(void)**argv;
	printf("%d\n", argc - 1);
	return (0);
}
