#include <stdio.h>

/**
  *main - print reverse alpha
  *Return: 0
  */

int main(void)
{
	int count;

	for (count = 122; count >= 97; count--)
	{
		putchar(count);
	}
	putchar('\n');
	return (0);
}
