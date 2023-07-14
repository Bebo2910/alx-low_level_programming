#include <stdio.h>

/**
  *main - print alphapets
  *Return: 0
  */
int main(void)
{
	int count;

	for (count = 97; count <= 122; count++)
	{
		putchar(count);
	}
	putchar('\n');
	return (0);
