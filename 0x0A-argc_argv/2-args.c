#include <stdio.h>

/**
  * main - fun
  * @argc: fin
  * @argv: tin
  * Return: 0
  */
int main(int argc, char const *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
