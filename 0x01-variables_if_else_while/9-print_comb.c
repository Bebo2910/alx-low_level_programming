#include <stdio.h>

/**
  *main - combination
  *Return: 0
  */
int main(void)
{
	for (int i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	return (0);
}
